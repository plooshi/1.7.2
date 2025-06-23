#pragma once
#include "pch.h"
#include "Utils.h"

struct FNetworkObjectInfo
{
	/** Pointer to the replicated actor. */
	AActor* Actor;

	/** List of connections that this actor is dormant on */
	TSet<TWeakObjectPtr<UNetConnection>> DormantConnections;

	/** A list of connections that this actor has recently been dormant on, but the actor doesn't have a channel open yet.
	*  These need to be differentiated from actors that the client doesn't know about, but there's no explicit list for just those actors.
	*  (this list will be very transient, with connections being moved off the DormantConnections list, onto this list, and then off once the actor has a channel again)
	*/
	TSet<TWeakObjectPtr<UNetConnection>> RecentlyDormantConnections;

	/** Next time to consider replicating the actor. Based on FPlatformTime::Seconds(). */
	double NextUpdateTime;

	/** Last absolute time in seconds since actor actually sent something during replication */
	double LastNetReplicateTime;

	/** Optimal delta between replication updates based on how frequently actor properties are actually changing */
	float OptimalNetUpdateDelta;

	/** Last time this actor was updated for replication via NextUpdateTime
	* @warning: internal net driver time, not related to WorldSettings.TimeSeconds */
	float LastNetUpdateTime;

	/** Is this object still pending a full net update due to clients that weren't able to replicate the actor at the time of LastNetUpdateTime */
	bool bPendingNetUpdate;
};


template< class ObjectType>
class TSharedPtr
{
public:
	ObjectType* Object;

	int32 SharedReferenceCount;
	int32 WeakReferenceCount;

	FORCEINLINE ObjectType* Get()
	{
		return Object;
	}
	FORCEINLINE ObjectType* Get() const
	{
		return Object;
	}
	FORCEINLINE ObjectType& operator*()
	{
		return *Object;
	}
	FORCEINLINE const ObjectType& operator*() const
	{
		return *Object;
	}
	FORCEINLINE ObjectType* operator->()
	{
		return Object;
	}
	FORCEINLINE ObjectType* operator->() const
	{
		return Object;
	}
};

class FNetworkObjectList
{
public:
	using FNetworkObjectSet = TSet<TSharedPtr<FNetworkObjectInfo>>;

	FNetworkObjectSet AllNetworkObjects;
	FNetworkObjectSet ActiveNetworkObjects;
	FNetworkObjectSet ObjectsDormantOnAllConnections;

	TMap<TWeakObjectPtr<UNetConnection>, int32> NumDormantObjectsPerConnection;

	void Remove(AActor* const Actor);
};

struct alignas(0x4) FServerFrameInfo
{
	int32 LastProcessedInputFrame = -1;
	int32 LastLocalFrame = -1;
	int32 LastSentLocalFrame = -1;

	float TargetTimeDilation = 1.f;
	int8 QuantizedTimeDilation = 1;
	float TargetNumBufferedCmds = 1.f;
	bool bFault = true;
};

class FNetworkGUID
{
public:

	uint32 Value;

public:

	FNetworkGUID()
		: Value(0)
	{
	}

	FNetworkGUID(uint32 V)
		: Value(V)
	{
	}

public:

	friend bool operator==(const FNetworkGUID& X, const FNetworkGUID& Y)
	{
		return (X.Value == Y.Value);
	}

	friend bool operator!=(const FNetworkGUID& X, const FNetworkGUID& Y)
	{
		return (X.Value != Y.Value);
	}
};


struct FActorDestructionInfo
{
public:
	TWeakObjectPtr<UObject>		ObjOuter;
	FVector			DestroyedPosition;
	FNetworkGUID	NetGUID;
	FString			PathName;
	FName			StreamingLevelName;
};

template< class ObjectType>
class TUniquePtr
{
public:
	ObjectType* Ptr;

	FORCEINLINE ObjectType* Get()
	{
		return Ptr;
	}
	FORCEINLINE ObjectType* Get() const
	{
		return Ptr;
	}
	FORCEINLINE ObjectType& operator*()
	{
		return *Ptr;
	}
	FORCEINLINE const ObjectType& operator*() const
	{
		return *Ptr;
	}
	FORCEINLINE ObjectType* operator->()
	{
		return Ptr;
	}
	FORCEINLINE ObjectType* operator->() const
	{
		return Ptr;
	}
};

#define CLOSEPROXIMITY					500.
#define NEARSIGHTTHRESHOLD				2000.
#define MEDSIGHTTHRESHOLD				3162.
#define FARSIGHTTHRESHOLD				8000.
#define CLOSEPROXIMITYSQUARED			(CLOSEPROXIMITY*CLOSEPROXIMITY)
#define NEARSIGHTTHRESHOLDSQUARED		(NEARSIGHTTHRESHOLD*NEARSIGHTTHRESHOLD)
#define MEDSIGHTTHRESHOLDSQUARED		(MEDSIGHTTHRESHOLD*MEDSIGHTTHRESHOLD)
#define FARSIGHTTHRESHOLDSQUARED		(FARSIGHTTHRESHOLD*FARSIGHTTHRESHOLD)

struct FRelevantConnectionInfo
{
	UActorChannel* Channel;
	bool bRelevant;
};

struct FActorPriority
{
	int32 Priority;

	FNetworkObjectInfo* ActorInfo;
	bool bRelevant;
	UActorChannel* Channel;

	FActorDestructionInfo* DestructionInfo;

	FActorPriority() :
		Priority(0), ActorInfo(NULL), bRelevant(false), Channel(NULL), DestructionInfo(NULL)
	{
	}

	FActorPriority(UNetConnection* InConnection, UActorChannel* InChannel, FNetworkObjectInfo* InActorInfo, bool InRelevant, const TArray<FNetViewer>& Viewers)
		: ActorInfo(InActorInfo), Channel(InChannel), bRelevant(InRelevant), DestructionInfo(NULL)
	{
		float (*GetNetPriority)(AActor*, const FVector&, const FVector&, class AActor*, AActor*, UActorChannel*, float, bool) = decltype(GetNetPriority)(ActorInfo->Actor->VTable[0x6e]);

		const auto Time = float(Channel ? (*(double*)(__int64(InConnection->Driver) + offsetof(UNetDriver, Time)) - *(double*)(__int64(InChannel) + 0x78)) : InConnection->Driver->SpawnPrioritySeconds);
		Priority = 0;
		for (int32 i = 0; i < Viewers.Num(); i++)
		{
			Priority = max(Priority, (int32)round(65536.0f * GetNetPriority(ActorInfo->Actor, Viewers[i].ViewLocation, Viewers[i].ViewDir, Viewers[i].InViewer, Viewers[i].ViewTarget, InChannel, Time, false)));
		}
	}

	FActorPriority(UNetConnection* InConnection, FActorDestructionInfo* DestructInfo, const TArray<FNetViewer>& Viewers)
		: ActorInfo(NULL), Channel(NULL), DestructionInfo(DestructInfo)
	{
		Priority = 0;

		for (int32 i = 0; i < Viewers.Num(); i++)
		{
			float Time = InConnection->Driver->SpawnPrioritySeconds;

			FVector Dir = DestructionInfo->DestroyedPosition - Viewers[i].ViewLocation;
			double DistSq = Dir.SizeSquared();

			// adjust priority based on distance and whether actor is in front of viewer
			if ((Viewers[i].ViewDir | Dir) < 0.f)
			{
				if (DistSq > NEARSIGHTTHRESHOLDSQUARED)
					Time *= 0.2f;
				else if (DistSq > CLOSEPROXIMITYSQUARED)
					Time *= 0.4f;
			}
			else if (DistSq > MEDSIGHTTHRESHOLDSQUARED)
				Time *= 0.4f;

			Priority = max(Priority, int32(65536.0f * Time));
		}
	}

	bool operator>(FActorPriority& _Rhs) {
		return Priority > _Rhs.Priority;
	}
};

enum class EChannelCreateFlags : uint32_t
{
	None = (1 << 0),
	OpenedLocally = (1 << 1)
};

enum EConnectionState
{
	USOCK_Invalid = 0, // Connection is invalid, possibly uninitialized.
	USOCK_Closed = 1, // Connection permanently closed.
	USOCK_Pending = 2, // Connection is awaiting connection.
	USOCK_Open = 3, // Connection is open.
};

struct FPacketIdRange
{
	int32 First;
	int32 Last;
};

struct FOutBunch
{
	char _Pad1[0x108];
};

class ReplicationOffsets {
public:
	static inline uint32 TimeSeconds = 0x900;
	static inline uint32 ReplicationFrame = 0x288;
	static inline uint32 NetworkObjectList = 0x3f8;
	static inline uint32 ElapsedTime = offsetof(UNetDriver, Time);
	static inline uint32 RelevantTime = 0x70;
	static inline uint32 NetTag = 0x1e4;
	static inline uint32 DestroyedStartupOrDormantActorGUIDs = 0x33658;
	static inline uint32 DestroyedStartupOrDormantActors = 0x1e8;
	static inline uint32 ClientVisibleLevelNames = 0x336b0;
	static inline uint32 ClientWorldPackageName = 0x336a8;
	static inline uint32 GuidCache = 0xb0;
	static inline uint32 State = 0x124;

	static inline uint32 IsNetRelevantForVft = 0x84;
	static inline uint32 IsRelevancyOwnerForVft = 0x86;
	static inline uint32 GetNetOwnerVft = 0x89;
	static inline uint32 WriteObjectVft = 0x45;
	static inline uint32 SendBunchVft = 0x4f;

	static inline uint64 GetViewTarget;
	static inline uint64 CallPreReplication;
	static inline uint64 SendClientAdjustment;
	static inline uint64 CreateChannel;
	static inline uint64 SetChannelActor;
	static inline uint64 ReplicateActor;
	static inline uint64 RemoveNetworkActor;
	static inline uint64 ClientHasInitializedLevelFor;
	static inline uint64 CloseActorChannel;
	static inline uint64 StartBecomingDormant;
	static inline uint64 SupportsObject;
	static inline uint64 GetArchetype;
	static inline uint64 IsNetReady;
	static inline uint64 CloseConnection;
	static inline uint64 ConstructOutBunch;

	static void Init() {
		GetViewTarget = ImageBase + 0x10c40d0;
		CallPreReplication = ImageBase + 0x1eB94e0;
		SendClientAdjustment = ImageBase + 0x232bad0;
		CreateChannel = ImageBase + 0x22247f0;
		SetChannelActor = ImageBase + 0x20c3390;
		ReplicateActor = ImageBase + 0x20bea90;
		RemoveNetworkActor = ImageBase + 0x2238770;
		ClientHasInitializedLevelFor = ImageBase + 0x22243c0;
		CloseActorChannel = ImageBase + 0x20a8450;
		StartBecomingDormant = ImageBase + 0x20c49b0;
		SupportsObject = ImageBase + 0x223cca0;
		GetArchetype = ImageBase + 0x13d08a0;
		IsNetReady = ImageBase + 0x222f7d0;
		CloseConnection = ImageBase + 0x2224500;
		ConstructOutBunch = ImageBase + 0x20a4210;
	}
};

class Replication {
private:
	static float& GetTimeSeconds(UWorld* World)
	{
		return *(float*)(__int64(World) + ReplicationOffsets::TimeSeconds);
	}
	static int& GetReplicationFrame(UNetDriver* Driver)
	{
		return *(int*)(__int64(Driver) + ReplicationOffsets::ReplicationFrame);
	}
	static FNetworkObjectList& GetNetworkObjectList(UNetDriver* Driver)
	{
		return *(*(class TSharedPtr<FNetworkObjectList>*)(__int64(Driver) + ReplicationOffsets::NetworkObjectList));
	}
	static double& GetElapsedTime(UNetDriver* Driver)
	{
		return *(double*)(__int64(Driver) + ReplicationOffsets::ElapsedTime);
	}
	static AActor* GetViewTarget(APlayerController* Controller)
	{
		return (decltype(&GetViewTarget)(ReplicationOffsets::GetViewTarget))(Controller);
	}
	static double& GetRelevantTime(UActorChannel* Channel)
	{
		return *(double*)(__int64(Channel) + ReplicationOffsets::RelevantTime);
	}
	static int32& GetNetTag(UNetDriver* Driver)
	{
		return *(int32*)(__int64(Driver) + ReplicationOffsets::NetTag);
	}
	static TSet<FNetworkGUID>& GetDestroyedStartupOrDormantActorGUIDs(UNetConnection* Conn)
	{
		return *(TSet<FNetworkGUID>*)(__int64(Conn) + ReplicationOffsets::DestroyedStartupOrDormantActorGUIDs);
	}
	static TMap<FNetworkGUID, FActorDestructionInfo>& GetDestroyedStartupOrDormantActors(UNetDriver* Driver)
	{
		return *(TMap<FNetworkGUID, FActorDestructionInfo>*)(__int64(Driver) + ReplicationOffsets::DestroyedStartupOrDormantActors);
	}
	static TArray<FName>& GetClientVisibleLevelNames(UNetConnection* Conn)
	{
		return *(TArray<FName>*)(__int64(Conn) + ReplicationOffsets::ClientVisibleLevelNames);
	}
	static FName& GetClientWorldPackageName(UNetConnection* Conn)
	{
		return *(FName*)(__int64(Conn) + ReplicationOffsets::ClientWorldPackageName);
	}
	static class TSharedPtr<void*>& GetGuidCache(UNetDriver* Driver)
	{
		return *(class TSharedPtr<void*>*)(__int64(Driver) + ReplicationOffsets::GuidCache);
	}
	static EConnectionState& GetState(UNetConnection* Conn)
	{
		return *(EConnectionState*)(__int64(Conn) + ReplicationOffsets::State);
	}
	static void BuildViewerMap(UNetDriver*);
	static UActorChannel* FindChannel(UNetConnection* Conn, TWeakObjectPtr<AActor> WeakActor);
	static void BuildPriorityLists(UNetDriver*, float);
	static bool IsActorRelevantToConnection(const AActor* Actor, const TArray<FNetViewer>& ConnectionViewers);
	static FNetViewer ConstructNetViewer(UNetConnection* NetConnection);
	static UNetConnection* IsActorOwnedByAndRelevantToConnection(const AActor* Actor, TArray<FNetViewer>&, bool& bOutHasNullViewTarget);
	static bool ShouldActorGoDormant(AActor* Actor, const TArray<FNetViewer>& ConnectionViewers, UActorChannel* Channel, const float Time, const bool bLowNetBandwidth);
	static bool IsLevelInitializedForActor(const UNetDriver* Driver, const AActor* InActor, UNetConnection* InConnection);
	static void SendClientAdjustment(APlayerController*);
	static bool IsNetReady(UNetConnection* Connection, bool bSaturate);
	static bool IsNetReady(UChannel* Channel, bool bSaturate);
	static void SetChannelActorForDestroy(UActorChannel* Channel, FActorDestructionInfo* DestructInfo);
	static int ProcessPrioritizedActors(UNetDriver* Driver, UNetConnection* Conn, TArray<FActorPriority>&);
public:
	static void ServerReplicateActors(UNetDriver*, float);
};
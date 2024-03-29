//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDNetworkRouterFirewallRuleManagerBackingStoreMirror_h
#define HMDNetworkRouterFirewallRuleManagerBackingStoreMirror_h
@import Foundation;

#include "HMFObject.h"
#include "HMBLocalZoneID-Protocol.h"
#include "HMBMirrorProtocol-Protocol.h"
#include "HMDNetworkRouterFirewallRuleManagerBackingStoreMirror-Protocol.h"
#include "HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel.h"
#include "HMFLogging-Protocol.h"

@class HMBCloudDatabase, HMBLocalDatabase, HMBLocalZone, NAFuture, NAPromise, NSString;
@protocol NAScheduler, OS_dispatch_queue;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirror : HMFObject<HMFLogging, HMDNetworkRouterFirewallRuleManagerBackingStoreMirror, HMBMirrorProtocol>

@property (readonly, nonatomic) HMBCloudDatabase *cloudDatabase;
@property (readonly, nonatomic) HMBLocalDatabase *localDatabase;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) BOOL useAnonymousRequests;
@property (readonly, nonatomic) NAPromise *startupPromise;
@property (readonly, nonatomic) NAPromise *shutdownPromise;
@property (readonly, nonatomic) NSObject<NAScheduler> *workQueueScheduler;
@property (readonly, nonatomic) BOOL running;
@property (nonatomic) BOOL shuttingDown;
@property (retain, nonatomic) HMBLocalZone *localZone;
@property (retain, nonatomic) NAFuture *lastAsyncFuture;
@property (retain, nonatomic) HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel *internalState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NAFuture *startupFuture;
@property (readonly, nonatomic) NAFuture *shutdownFuture;
@property (readonly, nonatomic) NSObject<HMBLocalZoneID> *zoneID;
@property (readonly, nonatomic) NAFuture *startUp;

/* class methods */
+ (id)__overrideParentModelID;
+ (BOOL)__errorIsNotFound:(id)found;
+ (unsigned long long)__maxSizeForCKRecordSignatureVerificationCertificateChain;
+ (id)__createSignatureVerificationPolicy;
+ (id)__certificatesRecordID;
+ (id)__recordKeyCertificatePrefix:(id)prefix;
+ (id)__publicKeyFromCertificateRecord:(id)record dataKey:(id)key assetKey:(id)key;
+ (id)publicKeysFromCertificateRecord:(id)record;
+ (id)logCategory;

/* instance methods */
- (BOOL)__createCloudZonesForFetchInfo:(id)info error:(id *)error;
- (void)__startUpCloudZonesWithFetchInfo:(id)info;
- (void)__performCloudZonePullsWithFetchInfo:(id)info;
- (void)__fetchZoneChangesWithFetchInfo:(id)info;
- (void)__fetchDatabaseChangesWithFetchInfo:(id)info;
- (void)__fetchDatabaseChangesCompleted:(id)completed error:(id)error;
- (BOOL)__canRecoverFromFetchDatabaseChangesError:(id)error fetchInfo:(id)info;
- (void)__retryFetchDatabaseChangesWithFetchInfo:(id)info;
- (void)__removeDeletedZonesWithFetchInfo:(id)info;
- (void)__updateChangeTokenWithFetchInfo:(id)info;
- (id)__createCloudZoneIDForZoneID:(id)id;
- (id)__openLocalZoneForCloudZoneID:(id)id error:(id *)error;
- (void)__shutdownLocalZones:(id)zones activity:(id)activity;
- (id)__localZonesForRecordIDs:(id)ids activity:(id)activity error:(id *)error;
- (id)__fetchAllDataForRecordIDs:(id)ids options:(id)options activity:(id)activity error:(id *)error;
- (id)__fetchAllDataForZoneID:(id)id options:(id)options activity:(id)activity error:(id *)error;
- (id)__fetchAllDataForZoneName:(id)name options:(id)options activity:(id)activity error:(id *)error;
- (BOOL)__removeAllLocalRulesWithOptions:(id)options activity:(id)activity error:(id *)error;
- (id)__fetchOverridesForRecordIDs:(id)ids options:(id)options activity:(id)activity error:(id *)error;
- (id)__fetchOverridesForZoneName:(id)name options:(id)options activity:(id)activity error:(id *)error;
- (BOOL)__addOverrides:(id)overrides replace:(BOOL)replace options:(id)options activity:(id)activity error:(id *)error;
- (BOOL)__removeAllOverridesWithOptions:(id)options activity:(id)activity error:(id *)error;
- (BOOL)__removeOverridesForRecordIDs:(id)ids options:(id)options activity:(id)activity error:(id *)error;
- (BOOL)__removeOverridesForZoneName:(id)name options:(id)options activity:(id)activity error:(id *)error;
- (BOOL)__removeOverridesForZoneName:(id)name recordName:(id)name options:(id)options activity:(id)activity error:(id *)error;
- (void)fetchVerificationCertificatesRecordWithOperationGroup:(id)group completion:(id /* block */)completion;
- (void)__fetchVerificationCertificatesWithFetchInfo:(id)info;
- (void)__fetchVerificationCertificatesCompleted:(id)completed record:(id)record error:(id)error;
- (BOOL)__canRecoverFromVerificationCertificatesError:(id)error fetchInfo:(id)info;
- (void)__retryFetchVerificationCertificatesWithFetchInfo:(id)info;
- (id)__loadOrCreateInternalStateModelWithLocalZone:(id)zone activity:(id)activity;
- (void)__startupWithLocalZone:(id)zone activity:(id)activity;
- (void)__shutdownWithActivity:(id)activity;
- (BOOL)__shouldFailCloudRecordFetchError:(id)error error:(id)error;
- (void)__fetchCloudRecordsWithFetchInfo:(id)info;
- (void)__fetchRecordByID:(id)id;
- (void)__fetchRecordsByQuery:(id)query;
- (void)__startQueryOperation:(id)operation operation:(id)operation;
- (id)initWithLocalDatabase:(id)database cloudDatabase:(id)database useAnonymousRequests:(BOOL)requests ownerQueue:(id)queue;
- (BOOL)isRunning;
- (BOOL)isShuttingDown;
- (id)__asyncFutureWithActivity:(id)activity ignoreErrors:(BOOL)errors block:(id /* block */)block;
- (void)startUpWithLocalZone:(id)zone;
- (id)destroy;
- (id)triggerOutputForOutputRow:(unsigned long long)row options:(id)options;
- (id)flush;
- (id)shutdown;
- (id)cloudFetchNeededForRecordIDs:(id)ids error:(id *)error;
- (void)fetchCloudChangesForRecordIDs:(id)ids options:(id)options ignoreLastSynchronizedRecords:(BOOL)records xpcActivity:(id)activity completion:(id /* block */)completion;
- (void)_fetchCloudRecordsForZoneID:(id)id recordID:(id)id options:(id)options desiredKeys:(id)keys completion:(id /* block */)completion;
- (void)fetchCloudRecordIDsForZoneID:(id)id options:(id)options completion:(id /* block */)completion;
- (id)desiredKeys;
- (void)fetchCloudRecordsForZoneID:(id)id recordID:(id)id options:(id)options completion:(id /* block */)completion;
- (id)fetchAllDataForRecordIDs:(id)ids options:(id)options error:(id *)error;
- (id)_fetchAllDataForZoneName:(id)name options:(id)options error:(id *)error;
- (id)fetchAllDataWithOptions:(id)options error:(id *)error;
- (id)fetchAllDataForZoneName:(id)name options:(id)options error:(id *)error;
- (BOOL)removeAllLocalRulesWithOptions:(id)options error:(id *)error;
- (id)fetchOverridesForRecordIDs:(id)ids options:(id)options error:(id *)error;
- (id)fetchAllOverridesWithOptions:(id)options error:(id *)error;
- (id)fetchOverridesForZoneName:(id)name options:(id)options error:(id *)error;
- (id)_fetchOverridesForZoneName:(id)name options:(id)options error:(id *)error;
- (BOOL)addOverrides:(id)overrides replace:(BOOL)replace options:(id)options error:(id *)error;
- (BOOL)removeOverridesForRecordIDs:(id)ids options:(id)options error:(id *)error;
- (BOOL)removeAllOverridesWithOptions:(id)options error:(id *)error;
- (BOOL)removeOverridesForZoneName:(id)name recordName:(id)name options:(id)options error:(id *)error;
- (BOOL)_removeOverridesForZoneName:(id)name recordName:(id)name options:(id)options error:(id *)error;
- (void)__saveInternalStateWithActivity:(id)activity;
@end

#endif /* HMDNetworkRouterFirewallRuleManagerBackingStoreMirror_h */

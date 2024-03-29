//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDDatabase_h
#define HMDDatabase_h
@import Foundation;

#include "HMFObject.h"
#include "HMBCloudDatabaseDelegate-Protocol.h"
#include "HMBLocalDatabaseDelegate-Protocol.h"
#include "HMDDatabase-Protocol.h"
#include "HMDDatabaseZoneDelegate-Protocol.h"
#include "HMFLogging-Protocol.h"
#include "HMMLogEventSubmitting-Protocol.h"

@class HMBCloudDatabase, HMBLocalDatabase, NSHashTable, NSMapTable, NSString;

@interface HMDDatabase : HMFObject<HMBLocalDatabaseDelegate, HMBCloudDatabaseDelegate, HMDDatabaseZoneDelegate, HMFLogging, HMDDatabase> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSHashTable *delegates;
@property (readonly) NSMapTable *zoneDelegatesByLocalZone;
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter;
@property BOOL hasStarted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HMBCloudDatabase *cloudDatabase;
@property (readonly) HMBLocalDatabase *localDatabase;

/* class methods */
+ (id)defaultLocalDatabaseFileURL;
+ (void)registerQueries;
+ (id)defaultDatabase;
+ (id)cameraClipsDatabase;
+ (id)hindsightDatabase;
+ (id)logCategory;

/* instance methods */
- (id)initWithFileURL:(id)url cloudConfiguration:(id)configuration;
- (id)initWithLocalDatabase:(id)database cloudDatabase:(id)database logEventSubmitter:(id)submitter;
- (void)addDelegate:(id)delegate;
- (void)removeDelegate:(id)delegate;
- (void)start;
- (id)registerSharedSubscriptionForExternalRecordType:(id)type;
- (id)unregisterSharedSubscriptionForExternalRecordType:(id)type;
- (id)existingPrivateZonesWithName:(id)name configuration:(id)configuration delegate:(id)delegate error:(id *)error;
- (id)privateZonesWithName:(id)name configuration:(id)configuration delegate:(id)delegate error:(id *)error;
- (id)existingSharedZoneIDWithName:(id)name;
- (id)sharedZonesWithID:(id)id configuration:(id)configuration delegate:(id)delegate error:(id *)error;
- (id)synchronizeSharedZones;
- (id)removePrivateZonesWithName:(id)name;
- (id)removeSharedZonesWithName:(id)name;
- (id)removeLocalAndCloudDataForLocalZone:(id)zone;
- (id)acceptInvitation:(id)invitation;
- (id)zonesWithID:(id)id isPrivate:(BOOL)private shouldCreate:(BOOL)create configuration:(id)configuration delegate:(id)delegate error:(id *)error;
- (id)removeZonesWithID:(id)id isPrivate:(BOOL)private;
- (void)performDelegateCallback:(id /* block */)callback;
- (void)addZoneDelegate:(id)delegate forLocalZone:(id)zone;
- (void)removeZoneDelegate:(id)delegate forLocalZone:(id)zone;
- (void)performZoneDelegateCallback:(id /* block */)callback forLocalZone:(id)zone;
- (id)mergedActionFutureForActionFutures:(id)futures;
- (void)localDatabase:(id)database detectedLocalCorruptionWithInfo:(id)info;
- (void)localDatabase:(id)database willRemoveZoneWithID:(id)id;
- (void)cloudDatabase:(id)database didCreateZoneWithID:(id)id;
- (id)cloudDatabase:(id)database willRemoveZoneWithID:(id)id;
- (void)cloudDatabase:(id)database didRemoveZoneWithID:(id)id;
- (void)cloudDatabase:(id)database didReceiveMessageWithUserInfo:(id)info;
- (void)cloudDatabase:(id)database encounteredError:(id)error withOperation:(id)operation onZone:(id)zone;
- (void)cloudDatabase:(id)database encounteredError:(id)error withOperation:(id)operation onContainer:(id)container;
- (void)localZone:(id)zone didCompleteProcessingWithResult:(id)result;
- (void)cloudZone:(id)zone didUpdateParticipantWithClientIdentifier:(id)identifier;
- (void)cloudZone:(id)zone didRemoveParticipantWithClientIdentifier:(id)identifier;
- (void)cloudZone:(id)zone didChangeRebuildStatus:(id)status;
- (id)logIdentifier;
@end

#endif /* HMDDatabase_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCCKPrivateDatabase_h
#define FCCKPrivateDatabase_h
@import Foundation;

#include "FCCKDatabaseEncryptionDelegate-Protocol.h"
#include "FCCKPrivateDatabaseSchema.h"
#include "FCNetworkBehaviorMonitor.h"

@class CKRecord, NFLazy, NSArray, NSData, NSDate, NSOperationQueue;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface FCCKPrivateDatabase : NSObject {
  /* instance variables */
  BOOL _encryptionEnabled;
  BOOL _secureSubscriptionsEnabled;
  BOOL _encryptionRequired;
  BOOL _beganInitialStartUp;
  BOOL _finishedInitialStartUp;
  BOOL _activelyStartingUp;
  NSObject<FCCKDatabaseEncryptionDelegate> *_encryptionDelegate;
  FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
  NSData *_encryptionKey;
  NSData *_secureEncryptionKey;
  CKRecord *_sentinelRecord;
  NFLazy *_ckProperties;
  FCCKPrivateDatabaseSchema *_schema;
  NSObject<OS_dispatch_queue> *_queue;
  NSOperationQueue *_serialOperationQueue;
  NSOperationQueue *_highPriorityOperationQueue;
  NSOperationQueue *_noPreflightOperationQueue;
  NSArray *_middleware;
  NSArray *_remainingStartUpMiddleware;
  NSArray *_operationMiddleware;
  NSArray *_recordMiddleware;
  NSObject<OS_dispatch_group> *_initialStartUpGroup;
  long long _startUpResult;
  unsigned long long _countOfFailedStartUpAttempts;
  NSDate *_dateOfLastFailedStartUpAttempt;
  NSArray *_zoneRestorationSources;
  NSArray *_zonePruningAssistants;
}

/* class methods */
+ (id)testingDatabase;

/* instance methods */
- (void)fetchAllDatabaseChangesWithServerChangeToken:(id)token qualityOfService:(long long)service completionQueue:(id)queue completionHandler:(id /* block */)handler;
- (void)fetchChangesForRecordZoneID:(id)id changeToken:(id)token desiredKeys:(id)keys fetchAllChanges:(BOOL)changes qualityOfService:(long long)service completionHandler:(id /* block */)handler;
@end

#endif /* FCCKPrivateDatabase_h */

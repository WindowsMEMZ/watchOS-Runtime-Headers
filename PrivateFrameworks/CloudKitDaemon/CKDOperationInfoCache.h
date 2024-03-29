//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDOperationInfoCache_h
#define CKDOperationInfoCache_h
@import Foundation;

#include "CKDSQLiteCache.h"

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CKDOperationInfoCache : CKDSQLiteCache

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheDelegateQueue;
@property (retain, nonatomic) NSMutableDictionary *delegateWrappersByOperationID;

/* class methods */
+ (id)sharedCache;
+ (id)dbFileName;
+ (id)cacheDatabaseSchema;

/* instance methods */
- (id)initWithCacheDir:(id)dir;
- (void)registerDelegate:(id)delegate forOperationWithID:(id)id;
- (void)unregisterDelegate:(id)delegate forOperationWithID:(id)id;
- (id)operationInfoMetadataForOperationWithID:(id)id;
- (void)_locked_enumerateCallbacksForOperationWithID:(id)id usingBlock:(id /* block */)block;
- (void)enumerateCallbacksForOperationWithID:(id)id usingBlock:(id /* block */)block;
- (id)resumableOperationInfosByAppContainerAccountTuplesWithProgressPurged:(BOOL)purged;
- (id)outstandingOperationInfosForIDs:(id)ids;
- (id)allOutstandingOperationIDsForAppContainerAccountTuple:(id)tuple;
- (void)expungeOperationInfoForDeletedAccountID:(id)id;
- (void)deleteAllInfoForOperationWithID:(id)id;
- (void)_lockedSetOperationInfo:(id)info forOperationID:(id)id appContainerAccountTuple:(id)tuple;
- (void)setOperationInfo:(id)info forOperationID:(id)id appContainerAccountTuple:(id)tuple;
- (void)_lockedArchiveCallback:(id)callback forOperationID:(id)id;
- (void)archiveCallback:(id)callback forOperationID:(id)id;
- (void)registerAttemptForOperationWithID:(id)id;
- (id)_locked_operationInfoForID:(id)id;
- (void)registerCacheEvictionActivity;
@end

#endif /* CKDOperationInfoCache_h */

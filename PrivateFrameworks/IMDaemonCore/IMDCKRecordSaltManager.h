//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDCKRecordSaltManager_h
#define IMDCKRecordSaltManager_h
@import Foundation;

@class NSString;
@protocol OS_dispatch_queue;

@interface IMDCKRecordSaltManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain) NSString *cachedSalt;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)_CKUtilitiesSharedInstance;
- (void)_scheduleOperation:(id)operation;
- (id)_container;
- (void)_fetchLatestSaltFromCloudKitAndPersistWithCompletion:(id /* block */)completion;
- (void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(id /* block */)completion;
- (void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(id /* block */)completion forceFetch:(BOOL)fetch;
- (void)clearLocalSyncState;
- (void)deleteDeDupeRecordZone;
@end

#endif /* IMDCKRecordSaltManager_h */

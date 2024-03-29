//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSSyncEngineDataSource_Protocol_h
#define DNDSSyncEngineDataSource_Protocol_h
@import Foundation;

@protocol DNDSSyncEngineDataSource <NSObject>
/* instance methods */
- (id)syncEngine:(id)engine recordTypeForRecordID:(id)id;
- (long long)syncEngine:(id)engine prepareRecordToSave:(inout id)save;
- (void)syncEngine:(id)engine resolveConflictBetweenClientRecord:(id)record andServerRecord:(id)record;
- (void)syncEngine:(id)engine failedToDeleteRecordWithID:(id)id error:(id)error;
- (void)syncEngine:(id)engine didFetchRecord:(id)record;
- (void)syncEngine:(id)engine recordWithIDWasDeleted:(id)deleted;
- (long long)syncEngine:(id)engine wantsRecord:(id)record;
- (void)syncEngine:(id)engine zoneWithIDWasDeleted:(id)deleted removingRecordIDs:(id)ids;
- (id)recordIDsForSyncEngine:(id)engine;
- (void)purgeRecordsForSyncEngine:(id)engine;
@end

#endif /* DNDSSyncEngineDataSource_Protocol_h */

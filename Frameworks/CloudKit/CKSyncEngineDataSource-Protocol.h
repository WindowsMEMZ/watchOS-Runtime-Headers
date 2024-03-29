//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKSyncEngineDataSource_Protocol_h
#define CKSyncEngineDataSource_Protocol_h
@import Foundation;

@protocol CKSyncEngineDataSource <NSObject>
/* instance methods */
- (id)syncEngine:(id)engine recordToSaveForRecordID:(id)id;
- (void)syncEngine:(id)engine didSaveRecord:(id)record;
- (void)syncEngine:(id)engine failedToSaveRecord:(id)record error:(id)error;
- (void)syncEngine:(id)engine didDeleteRecordWithID:(id)id;
- (void)syncEngine:(id)engine failedToDeleteRecordWithID:(id)id error:(id)error;
- (void)syncEngine:(id)engine didFetchRecord:(id)record;
- (void)syncEngine:(id)engine recordWithIDWasDeleted:(id)deleted recordType:(id)type;
- (void)syncEngine:(id)engine didUpdateMetadata:(id)metadata;
@optional
/* instance methods */
- (void)syncEngine:(id)engine didSaveRecordZone:(id)zone;
- (void)syncEngine:(id)engine didDeleteRecordZoneWithID:(id)id;
- (void)syncEngine:(id)engine failedToFetchChangesForRecordZoneID:(id)id error:(id)error;
- (void)syncEngine:(id)engine failedToSaveRecordZone:(id)zone error:(id)error;
- (void)syncEngine:(id)engine failedToDeleteRecordZoneWithID:(id)id error:(id)error;
- (void)syncEngine:(id)engine zoneWithIDChanged:(id)idchanged;
- (void)syncEngine:(id)engine zoneWithIDWasDeleted:(id)deleted;
- (void)syncEngine:(id)engine zoneWithIDWasDeletedDueToUserEncryptedDataReset:(id)reset;
- (void)syncEngine:(id)engine zoneWithIDWasPurged:(id)purged;
- (void)syncEngine:(id)engine accountChangedFromUserRecordID:(id)id toUserRecordID:(id)id;
- (void)syncEngineWillBeginFetchingChanges:(id)changes;
- (void)syncEngineDidEndFetchingChanges:(id)changes;
- (void)syncEngine:(id)engine willBeginFetchingChangesForZoneIDs:(id)ids;
- (void)syncEngine:(id)engine didEndFetchingChangesForZoneID:(id)id;
- (void)syncEngineWillBeginModifyingPendingChanges:(id)changes;
- (void)syncEngineDidEndModifyingPendingChanges:(id)changes;
- (id)syncEngine:(id)engine nextBatchOfRecordsToModifyForZoneIDs:(id)ids;
- (void)syncEngine:(id)engine didCompleteModifyRecordsBatch:(id)batch error:(id)error;
- (id)recordZonesToSaveForSyncEngine:(id)engine;
- (id)recordZoneIDsToDeleteForSyncEngine:(id)engine;
@end

#endif /* CKSyncEngineDataSource_Protocol_h */

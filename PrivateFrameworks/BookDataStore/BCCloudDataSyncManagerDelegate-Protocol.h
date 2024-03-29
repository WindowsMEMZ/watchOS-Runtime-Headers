//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef BCCloudDataSyncManagerDelegate_Protocol_h
#define BCCloudDataSyncManagerDelegate_Protocol_h
@import Foundation;

@protocol BCCloudDataSyncManagerDelegate <NSObject>
/* instance methods */
- (void)syncManager:(id)manager startSyncToCKWithCompletion:(id /* block */)completion;
- (void)signalSyncToCKForSyncManager:(id)manager;
- (void)syncManager:(id)manager removeCloudDataForIDs:(id)ids completion:(id /* block */)completion;
- (void)syncManager:(id)manager updateSyncGenerationFromCloudData:(id)data completion:(id /* block */)completion;
- (void)syncManager:(id)manager resolveConflictsForRecords:(id)records completion:(id /* block */)completion;
- (void)syncManager:(id)manager failedRecordIDs:(id)ids completion:(id /* block */)completion;
- (id)entityName;
@optional
/* instance methods */
- (void)syncManager:(id)manager fetchedAllRecordsInZone:(id)zone;
@end

#endif /* BCCloudDataSyncManagerDelegate_Protocol_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.8.10.0.0
//
#ifndef MTIDSyncEngineDelegate_Protocol_h
#define MTIDSyncEngineDelegate_Protocol_h
@import Foundation;

@protocol MTIDSyncEngineDelegate 
/* instance methods */
- (void)accountDidChangeWithUserRecordID:(id)id;
- (void)syncEngineDidStartWithError:(id)error;
- (id)recordWithID:(id)id;
- (void)recordWasSaved:(id)saved;
- (void)recordWasFailedToSave:(id)save;
- (void)recordWasFetched:(id)fetched;
- (void)recordWasDeleted:(id)deleted;
@end

#endif /* MTIDSyncEngineDelegate_Protocol_h */

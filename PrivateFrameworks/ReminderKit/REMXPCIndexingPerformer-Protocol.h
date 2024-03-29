//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMXPCIndexingPerformer_Protocol_h
#define REMXPCIndexingPerformer_Protocol_h
@import Foundation;

@protocol REMXPCIndexingPerformer 
/* instance methods */
- (void)testIndexDummyItemWithCompletion:(id /* block */)completion;
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)handler;
- (void)reindexSearchableItemsWithIdentifiers:(id)identifiers acknowledgementHandler:(id /* block */)handler;
- (void)deleteAllSearchableItemsWithCompletionHandler:(id /* block */)handler;
@end

#endif /* REMXPCIndexingPerformer_Protocol_h */

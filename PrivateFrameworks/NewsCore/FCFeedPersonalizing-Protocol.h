//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCFeedPersonalizing_Protocol_h
#define FCFeedPersonalizing_Protocol_h
@import Foundation;

@protocol FCFeedPersonalizing <FCTagRanking>
/* instance methods */
- (id)limitItemsByMinimumItemQuality:(id)quality;
- (id)limitItemsByFlowRate:(id)rate timeInterval:(double)interval publisherCount:(unsigned long long)count;
- (void)prepareForUseWithCompletionHandler:(id /* block */)handler;
- (double)decayedPublisherDiversificationPenalty;
- (id)sortItems:(id)items options:(long long)options configurationSet:(long long)set;
@optional
/* instance methods */
- (void)fetchAggregateMapForPersonalizingItem:(id)item completion:(id /* block */)completion;
@end

#endif /* FCFeedPersonalizing_Protocol_h */

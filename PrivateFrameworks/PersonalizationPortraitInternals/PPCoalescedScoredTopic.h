//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPCoalescedScoredTopic_h
#define PPCoalescedScoredTopic_h
@import Foundation;

@class PPScoredItem;

@interface PPCoalescedScoredTopic : NSObject

@property (readonly, nonatomic) PPScoredItem *scoredTopic;
@property (readonly, nonatomic) unsigned short occurrencesInSource;

/* instance methods */
- (id)initWithScoredTopic:(id)topic occurrencesInSource:(unsigned short)source;
- (id)init;
@end

#endif /* PPCoalescedScoredTopic_h */

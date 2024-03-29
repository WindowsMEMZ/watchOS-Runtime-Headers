//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _CompletionListRankingObserverFeedbackGenerator_Protocol_h
#define _CompletionListRankingObserverFeedbackGenerator_Protocol_h
@import Foundation;

@protocol _CompletionListRankingObserverFeedbackGenerator <NSObject>

@property (weak, nonatomic) NSObject<_CompletionListRankingObserverFeedbackGeneratorDelegate> *delegate;

/* instance methods */
- (void)didAddItem:(id)item hidingOutrankedResults:(id)results hidingDuplicateResults:(id)results;
- (void)removeAllSectionsAndItems;
@optional
/* instance methods */
- (void)didBeginRanking;
- (void)didEndRanking;
- (void)didBeginSectionWithBundleIdentifier:(id)identifier;
@end

#endif /* _CompletionListRankingObserverFeedbackGenerator_Protocol_h */

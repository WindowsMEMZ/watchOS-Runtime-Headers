//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPUniversalSearchSpotlightIndexScorer_h
#define PPUniversalSearchSpotlightIndexScorer_h
@import Foundation;

@class _PASLazyPurgeableResult;

@interface PPUniversalSearchSpotlightIndexScorer : NSObject {
  /* instance variables */
  _PASLazyPurgeableResult *_cachedPortraitTopicScores;
}

/* instance methods */
- (id)initWithLocalTopicStore:(id)store;
- (id)topicAlgorithmWeights;
- (double)computeSpotlightIndexScoreFromPortraitExtractions:(id)extractions;
- (double)computeSpotlightIndexTopicSubscoreFromPortraitExtractions:(id)extractions;
- (double)computeSpotlightIndexTopicScoreComponentFromDocumentTopicVector:(id)vector;
@end

#endif /* PPUniversalSearchSpotlightIndexScorer_h */

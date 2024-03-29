//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPSocialHighlightFractionalEngagementProvider_h
#define PPSocialHighlightFractionalEngagementProvider_h
@import Foundation;

#include "PPSocialHighlightFeatureProvider-Protocol.h"

@class NSMutableDictionary;

@interface PPSocialHighlightFractionalEngagementProvider : NSObject<PPSocialHighlightFeatureProvider> {
  /* instance variables */
  NSMutableDictionary *_engagementsByKey;
  NSMutableDictionary *_offeredByKey;
  id /* block */ _groupByBlock;
  id /* block */ _keyBlock;
}

/* instance methods */
- (id)initWithFeedbackGroupByBlock:(id /* block */)block highlightKeyBlock:(id /* block */)block highlights:(id)highlights;
- (id)valueForHighlight:(id)highlight;
- (id)applyFeedback:(id)feedback;
@end

#endif /* PPSocialHighlightFractionalEngagementProvider_h */

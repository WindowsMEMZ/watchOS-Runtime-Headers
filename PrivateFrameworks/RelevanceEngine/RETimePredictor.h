//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef RETimePredictor_h
#define RETimePredictor_h
@import Foundation;

#include "REPredictor.h"

@interface RETimePredictor : REPredictor
/* class methods */
+ (double)updateInterval;
+ (id)supportedFeatures;

/* instance methods */
- (id)featureValueForFeature:(id)feature element:(id)element engine:(id)engine trainingContext:(id)context;
- (void)update;
@end

#endif /* RETimePredictor_h */

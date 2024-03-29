//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REAppUsagePredictor_h
#define REAppUsagePredictor_h
@import Foundation;

#include "REPredictor.h"
#include "REAppUsagePredictorProperties-Protocol.h"
#include "RETimeline.h"
#include "REUpNextTimer.h"

@interface REAppUsagePredictor : REPredictor<REAppUsagePredictorProperties> {
  /* instance variables */
  REUpNextTimer *_timelineProgressionTimer;
}

@property (readonly, nonatomic) RETimeline *timeline;

/* class methods */
+ (id)supportedFeatures;
+ (double)updateInterval;

/* instance methods */
- (void)update;
- (id)featureValueForFeature:(id)feature element:(id)element engine:(id)engine trainingContext:(id)context;
- (id)_nextTimelineTransitionDateAfter:(id)after;
- (void)_scheduleTimelineProgressionTimerAfter:(id)after;
@end

#endif /* REAppUsagePredictor_h */

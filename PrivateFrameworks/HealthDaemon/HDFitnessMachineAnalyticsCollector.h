//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDFitnessMachineAnalyticsCollector_h
#define HDFitnessMachineAnalyticsCollector_h
@import Foundation;

#include "HDGymKitWorkoutAnalyticEvent.h"

@class HKPersistentTimer;

@interface HDFitnessMachineAnalyticsCollector : NSObject {
  /* instance variables */
  HKPersistentTimer *_authorizationTimer;
}

@property (retain, nonatomic) HDGymKitWorkoutAnalyticEvent *gymKitWorkoutEvent;

/* instance methods */
- (id)init;
- (void)userBeganPairing;
- (void)userIsAuthorized;
- (void)setFitnessMachineType:(unsigned long long)type manufacturer:(id)manufacturer;
- (void)workoutFailedWithError:(id)error;
- (void)workoutEndedSubmitMetricsWith:(id)with;
@end

#endif /* HDFitnessMachineAnalyticsCollector_h */

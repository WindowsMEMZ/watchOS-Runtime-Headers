//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDDemoDataActivitySampleGenerator_h
#define HDDemoDataActivitySampleGenerator_h
@import Foundation;

#include "HDDemoDataBaseSampleGenerator.h"
#include "HDDataOriginProvenance.h"
#include "HDDemoDataGeneratorWorkoutConfiguration.h"
#include "_HDDemoDataActivityWorkoutState.h"

@class HKActivityCache;

@interface HDDemoDataActivitySampleGenerator : HDDemoDataBaseSampleGenerator {
  /* instance variables */
  HDDataOriginProvenance *_provenance;
  double _nextActiveCaloriesSampleTime;
  double _nextAppleStandHourSampleTime;
  double _nextRestingCaloriesSampleTime;
  double _nextPhysicalEffortSampleTime;
  double _nextFallSampleTime;
  double _nextFlightsClimbedSampleTime;
  double _nextStepsSampleTime;
  double _nextExerciseMinuteTime;
  double _nextHeartRateRecoveryStartTime;
  double _nextHeartRateRecoveryStopTime;
  double _nextRunningPowerSampleTime;
  double _nextRunningStrideLengthSampleTime;
  double _nextRunningVerticalOscillationSampleTime;
  double _nextRunningGroundContactTimeSampleTime;
  double _nextCyclingPowerSampleTime;
  double _nextCyclingFTPSampleTime;
  double _nextCyclingCadenceSampleTime;
  double _nextCyclingSpeedSampleTime;
  double _nextWaterTemperatureSampleTime;
  double _nextUVIndexSampleTime;
  double _lastUVIndexPeakTime;
  double _lastUVExposure;
  double _lastUVIndexPeak;
  HKActivityCache *_lastActivityCache;
  HDDemoDataGeneratorWorkoutConfiguration *_currentWorkoutConfiguration;
  _HDDemoDataActivityWorkoutState *_workoutState;
}

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)setProfile:(id)profile provenance:(id)provenance;
- (void)setupWithDemoDataGenerator:(id)generator;
- (void)generateFirstRunObjectsForDemoPerson:(id)person firstDate:(id)date objectCollection:(id)collection;
- (void)generateObjectsForDemoPerson:(id)person fromTime:(double)time toTime:(double)time currentDate:(id)date objectCollection:(id)collection;
- (double)_computeExerciseTimeFromCurrentTime:(double)time mean:(double)mean stdDev:(double)dev;
- (id)_computeFlightsClimbedForDemoPerson:(id)person atTime:(double)time;
- (double)_computePercentCooledForDemoPerson:(id)person atTime:(double)time;
- (BOOL)_isDemoPersonCoolingDown:(id)down atTime:(double)time;
- (BOOL)_isDemoPersonSedentary:(id)sedentary atTime:(double)time;
- (BOOL)_isDemoPersonWalking:(id)walking atTime:(double)time samplePeriod:(double)period;
- (BOOL)_isDemoPersonInWorkoutRecovery:(id)recovery atTime:(double)time;
@end

#endif /* HDDemoDataActivitySampleGenerator_h */

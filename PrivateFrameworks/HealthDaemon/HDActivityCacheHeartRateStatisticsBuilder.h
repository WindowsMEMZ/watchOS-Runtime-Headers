//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDActivityCacheHeartRateStatisticsBuilder_h
#define HDActivityCacheHeartRateStatisticsBuilder_h
@import Foundation;

@class HKHeartRateSummary, HKHeartRateSummaryStatistics, HKQuantity, NSDateComponents, NSDateInterval, NSMutableArray, NSMutableDictionary;
@protocol {vector<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample, std::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample>>="__begin_"^{HDActivityCacheHeartRateStatisticsBuilderHeartRateSample}"__end_"^{HDActivityCacheHeartRateStatisticsBuilderHeartRateSample}"__end_cap_"{__compressed_pair<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *, std::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample>>="__value_"^{HDActivityCacheHeartRateStatisticsBuilderHeartRateSample}}}, {vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>>="__begin_"^{HDActivityCacheStatisticsBuilderWorkoutSample}"__end_"^{HDActivityCacheStatisticsBuilderWorkoutSample}"__end_cap_"{__compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>>="__value_"^{HDActivityCacheStatisticsBuilderWorkoutSample}}};

@interface HDActivityCacheHeartRateStatisticsBuilder : NSObject {
  /* instance variables */
  NSDateInterval *_dateInterval;
  long long _activityCacheIndex;
  struct vector<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample, std::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample>> { struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *__begin_; struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *__end_; struct __compressed_pair<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *, std::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample>> { struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *__value_; } __end_cap_; } _heartRateSamples;
  struct vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> { struct HDActivityCacheStatisticsBuilderWorkoutSample *__begin_; struct HDActivityCacheStatisticsBuilderWorkoutSample *__end_; struct __compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> { struct HDActivityCacheStatisticsBuilderWorkoutSample *__value_; } __end_cap_; } _workouts;
  HKQuantity *_restingHeartRate;
  HKQuantity *_walkingAverageHeartRate;
  HKHeartRateSummaryStatistics *_allDayStatistics;
  NSMutableArray *_workoutStatistics;
  NSMutableArray *_workoutRecoveryStatistics;
  NSMutableArray *_breatheStatistics;
  NSMutableDictionary *_averageCalculatorsByWorkoutUUID;
  NSMutableDictionary *_recoveryReadingsByWorkoutUUID;
  NSMutableDictionary *_breatheSessionReadingsBySessionUUID;
  NSMutableDictionary *_breatheSessionDateIntervalBySessionUUID;
  NSDateComponents *_dateOfBirthComponents;
}

@property (readonly, nonatomic) HKHeartRateSummary *heartRateSummary;

/* instance methods */
- (id)initWithDateInterval:(id)interval activityCacheIndex:(long long)index;
- (void)addHeartRateSamples:(const void *)samples;
- (void)addWorkouts:(const void *)workouts;
- (void)addBreatheSessions:(const void *)sessions;
- (void)setDateOfBirthComponents:(id)components;
- (void)reportDailyAnalyticsWithProfile:(id)profile;
@end

#endif /* HDActivityCacheHeartRateStatisticsBuilder_h */

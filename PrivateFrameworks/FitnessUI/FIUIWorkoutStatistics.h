//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef FIUIWorkoutStatistics_h
#define FIUIWorkoutStatistics_h
@import Foundation;

@class HKQuantity, NSArray, NSDate;

@interface FIUIWorkoutStatistics : NSObject {
  /* instance variables */
  NSArray *_workouts;
  long long _numberOfWalkRunWorkouts;
  long long _numberOfCyclingWorkouts;
  BOOL _isAllOutdoorCycling;
  BOOL _isAllRunning;
}

@property (readonly, nonatomic) double totalWorkoutDuration;
@property (readonly, nonatomic) double averageWorkoutDuration;
@property (readonly, nonatomic) HKQuantity *totalActiveEnergyBurn;
@property (readonly, nonatomic) HKQuantity *averageActiveEnergyBurn;
@property (readonly, nonatomic) HKQuantity *totalWalkRunDistance;
@property (readonly, nonatomic) HKQuantity *averageWalkRunDistance;
@property (readonly, nonatomic) double totalWalkRunDuration;
@property (readonly, nonatomic) HKQuantity *totalCyclingDistance;
@property (readonly, nonatomic) HKQuantity *averageCyclingDistance;
@property (readonly, nonatomic) double totalCyclingDuration;
@property (readonly, nonatomic) unsigned long long workoutCount;
@property (readonly, nonatomic) unsigned long long workoutsWithEnergyBurned;
@property (readonly, nonatomic) NSDate *startOfMonth;

/* class methods */
+ (id)_monthFormatter;

/* instance methods */
- (id)formattedMonth;
- (id)formattedWorkoutDurationWithFormattingManager:(id)manager;
- (id)formattedActiveEnergyBurnWithFormattingManager:(id)manager;
- (id)formattedWalkRunDistanceWithFormattingManager:(id)manager;
- (id)formattedCyclingDistanceWithFormattingManager:(id)manager;
- (id)formattedPaceWithFormattingManager:(id)manager;
- (id)formattedSpeedWithFormattingManager:(id)manager;
- (id)formattedTotalWorkoutDurationWithFormattingManager:(id)manager;
- (id)formattedAverageWorkoutDurationWithFormattingManager:(id)manager;
- (id)_formattedDuration:(double)duration formattingManager:(id)manager;
- (id)formattedTotalActiveEnergyBurnWithFormattingManager:(id)manager;
- (id)formattedAverageActiveEnergyBurnWithFormattingManager:(id)manager;
- (id)_formattedEnergyBurn:(id)burn formattingManager:(id)manager;
- (id)formattedTotalWalkRunDistanceWithFormattingManager:(id)manager;
- (id)formattedAverageWalkRunDistanceWithFormattingManager:(id)manager;
- (id)_formattedWalkRunDistance:(id)distance formattingManager:(id)manager;
- (id)formattedTotalCyclingDistanceWithFormattingManager:(id)manager;
- (id)formattedAverageCyclingDistanceWithFormattingManager:(id)manager;
- (id)_formattedCyclingDistance:(id)distance formattingManager:(id)manager;
- (id)simpleWorkoutCount;
- (id)formattedWorkoutCount;
- (id)initWithWorkouts:(id)workouts;
- (id)init;
- (void)_calculateStats;
- (void)_calculateAverages;
@end

#endif /* FIUIWorkoutStatistics_h */

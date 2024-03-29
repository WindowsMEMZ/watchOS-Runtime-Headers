//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDDemoDataWorkoutPrototype_h
#define HDDemoDataWorkoutPrototype_h
@import Foundation;

@class HKQuantity;

@interface HDDemoDataWorkoutPrototype : NSObject

@property (nonatomic) unsigned long long workoutActivityType;
@property (nonatomic) unsigned long long goalType;
@property (retain, nonatomic) HKQuantity *goal;
@property (nonatomic) double startTimeOffsetInDay;
@property (nonatomic) double duration;
@property (nonatomic) double totalEnergyBurnedInKcal;
@property (nonatomic) double totalDistanceWalkingInMiles;
@property (nonatomic) double totalDistanceCyclingInMiles;
@property (nonatomic) double totalDistanceSwimmingInYards;
@property (nonatomic) double swimmingSegmentDistanceInYards;
@property (nonatomic) long long totalSwimmingSegments;
@property (nonatomic) long long numLapsPerSegment;
@property (nonatomic) double swimTimePerSegment;
@property (nonatomic) double restTimePerSegment;
@property (nonatomic) long long swimmingStrokeStyle;

/* class methods */
+ (id)workoutPrototypeWithActivityType:(unsigned long long)type goalType:(unsigned long long)type goal:(id)goal startTime:(double)time duration:(double)duration energyBurned:(double)burned distanceWalking:(double)walking distanceCycling:(double)cycling;
+ (id)workoutPrototypeWithActivityType:(unsigned long long)type goalType:(unsigned long long)type goal:(id)goal startTime:(double)time duration:(double)duration energyBurned:(double)burned distanceWalking:(double)walking distanceCycling:(double)cycling distanceSwimming:(double)swimming distanceSwimmingSegment:(double)segment totalSwimmingSegments:(long long)segments numLapsPerSegment:(long long)segment swimTimePerSegment:(double)segment restTimePerSegment:(double)segment swimmingStrokeStyle:(long long)style;
+ (id)ellipticalPrototype;
+ (id)HIITPrototype;
+ (id)runningPrototype;
+ (id)cyclingPrototype;
+ (id)swimmingPrototype;
+ (id)walkingPrototype;
+ (id)hikingPrototype;
+ (id)yogaPrototype;
+ (id)thirdPartyWorkoutPrototype;
+ (id)functionalStrengthTrainingPrototype;
+ (id)coolDownPrototype;
+ (id)coreTrainingPrototype;
+ (id)dancePrototype;
+ (id)underwaterDivingPrototype;
+ (id)yogaAndRunningPrototypes;
+ (id)pickRandomWorkoutFrom:(id)from;

/* instance methods */
@end

#endif /* HDDemoDataWorkoutPrototype_h */

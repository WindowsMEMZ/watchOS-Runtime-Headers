//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef FIUIActivityDataModel_h
#define FIUIActivityDataModel_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class HKQuantity, NSArray, NSDate;

@interface FIUIActivityDataModel : NSObject<NSCopying>

@property (nonatomic) BOOL databaseLoading;
@property (nonatomic) BOOL areFitnessAppsRestricted;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) long long activityMoveMode;
@property (retain, nonatomic) HKQuantity *activeEnergyTotal;
@property (retain, nonatomic) HKQuantity *activeEnergyGoal;
@property (nonatomic) double appleMoveTimeTotal;
@property (nonatomic) double appleMoveTimeGoal;
@property (nonatomic) double appleExerciseTimeTotal;
@property (nonatomic) double appleExerciseTimeGoal;
@property (nonatomic) BOOL wheelchairUser;
@property (nonatomic) long long appleStandHoursTotal;
@property (nonatomic) long long appleStandHoursGoal;
@property (copy, nonatomic) NSArray *activeEnergyChartData;
@property (copy, nonatomic) NSArray *appleMoveTimeChartData;
@property (copy, nonatomic) NSArray *appleExerciseTimeChartData;
@property (copy, nonatomic) NSArray *appleStandHourChartData;
@property (readonly, nonatomic) BOOL userHasDoneActivitySetup;
@property (readonly, nonatomic) BOOL deviceLocked;
@property (readonly, nonatomic) BOOL privacy;

/* class methods */
+ (id)lockedModel;
+ (id)privacyModel;
+ (id)idealizedModel;
+ (id)formattingManager;

/* instance methods */
- (id)description;
- (id)debugDescription;
- (double)activeEnergyCompletionPercentage;
- (double)appleMoveTimeCompletionPercentage;
- (double)appleExerciseTimeCompletionPercentage;
- (double)appleStandHourCompletionPercentage;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)loggingString;
- (BOOL)isPrivacy;
@end

#endif /* FIUIActivityDataModel_h */

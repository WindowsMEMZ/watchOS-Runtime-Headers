//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKCardioFitnessClassificationUtilities_h
#define HKCardioFitnessClassificationUtilities_h
@import Foundation;

@interface HKCardioFitnessClassificationUtilities : NSObject
/* class methods */
+ (id)_cardioFitnessLevels;
+ (id)_stubbedCardioFitnessLevelData;
+ (id)_parseCoreMotionClassificationData:(id)data;
+ (id)_queryCoreMotionClassifications;
+ (id)_queryCoreMotionClassificationsForBiologicalSex:(long long)sex age:(long long)age;
+ (id)_flattenedThresholdsForLevelData:(id)data;
+ (id)flattenedCardioFitnessDataForBiologicalSex:(long long)sex;
+ (id)cardioFitnessDataForBiologicalSex:(long long)sex;
+ (id)_cardioFitnessLevelTransitionDatesForDateInterval:(id)interval biologicalSex:(long long)sex dateOfBirth:(id)birth;
+ (id)cardioFitnessPropertiesForDate:(id)date healthStore:(id)store;
+ (id)cardioFitnessDataForBiologicalSex:(long long)sex age:(long long)age;
+ (id)cardioFitnessDataForVO2Max:(double)max biologicalSex:(long long)sex age:(long long)age;
+ (id)cardioFitnessDataForLevel:(long long)level biologicalSex:(long long)sex age:(long long)age;
+ (id)cardioFitnessDataForLevel:(long long)level date:(id)date healthStore:(id)store;
+ (long long)cardioFitnessLevelForVO2Max:(double)max biologicalSex:(long long)sex age:(long long)age;
+ (long long)cardioFitnessLevelForVO2MaxSample:(id)sample inHealthStore:(id)store;
+ (id)cardioFitnessLevelDateIntervalsWithDateInterval:(id)interval healthStore:(id)store;
+ (id)analyticsStringForLevel:(long long)level;
@end

#endif /* HKCardioFitnessClassificationUtilities_h */

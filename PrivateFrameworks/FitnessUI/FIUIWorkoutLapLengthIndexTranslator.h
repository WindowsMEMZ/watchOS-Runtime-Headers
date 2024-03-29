//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef FIUIWorkoutLapLengthIndexTranslator_h
#define FIUIWorkoutLapLengthIndexTranslator_h
@import Foundation;

@class HKUnit;

@interface FIUIWorkoutLapLengthIndexTranslator : NSObject

@property (retain, nonatomic) HKUnit *distanceUnit;

/* instance methods */
- (id)initWithDistanceUnit:(id)unit;
- (double)valueTranslatedIntoDistanceUnit:(double)unit;
- (double)valueTranslatedFromDistanceUnit:(double)unit;
- (double)valueForIndex:(long long)index;
- (long long)indexForValue:(double)value;
@end

#endif /* FIUIWorkoutLapLengthIndexTranslator_h */

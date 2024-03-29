//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 100.2.0.0.0
//
#ifndef HAMenstrualAlgorithmsStats_h
#define HAMenstrualAlgorithmsStats_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSNumber;

@interface HAMenstrualAlgorithmsStats : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSNumber *medianCycleLength;
@property (retain, nonatomic) NSNumber *medianMenstruationLength;
@property (retain, nonatomic) NSNumber *lowerCycleLengthPercentile;
@property (retain, nonatomic) NSNumber *lowerMenstruationLengthPercentile;
@property (retain, nonatomic) NSNumber *upperCycleLengthPercentile;
@property (retain, nonatomic) NSNumber *upperMenstruationLengthPercentile;
@property (retain, nonatomic) NSNumber *numberOfCyclesFound;
@property (retain, nonatomic) NSNumber *julianDayOfFirstCycleStart;
@property (retain, nonatomic) NSNumber *julianDayOfLastCycleStart;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* HAMenstrualAlgorithmsStats_h */

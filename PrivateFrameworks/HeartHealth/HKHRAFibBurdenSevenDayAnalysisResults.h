//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKHRAFibBurdenSevenDayAnalysisResults_h
#define HKHRAFibBurdenSevenDayAnalysisResults_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class HKQuantitySample;

@interface HKHRAFibBurdenSevenDayAnalysisResults : NSObject<NSSecureCoding>

@property (readonly, nonatomic) long long result;
@property (readonly, nonatomic) HKQuantitySample *sampleCreated;
@property (readonly, nonatomic) BOOL onboardedWithinAnalysisInterval;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithResult:(long long)result sample:(id)sample onboardedWithinAnalysisInterval:(BOOL)interval;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* HKHRAFibBurdenSevenDayAnalysisResults_h */

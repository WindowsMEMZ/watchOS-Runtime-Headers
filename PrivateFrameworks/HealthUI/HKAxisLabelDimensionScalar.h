//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKAxisLabelDimensionScalar_h
#define HKAxisLabelDimensionScalar_h
@import Foundation;

#include "HKAxisLabelDimension-Protocol.h"

@interface HKAxisLabelDimensionScalar : NSObject<HKAxisLabelDimension>
/* class methods */
+ (long long)_fractionDigitsForStep:(double)step;

/* instance methods */
- (double)niceStepSizeLargerThan:(double)than;
- (double)ticksPerStepSize:(double)size;
- (id)formatterForLabelStepSize:(double)size;
- (id)stringForLocation:(id)location formatterForStepSize:(id)size;
- (id)endingLabelsFactorOverride;
@end

#endif /* HKAxisLabelDimensionScalar_h */

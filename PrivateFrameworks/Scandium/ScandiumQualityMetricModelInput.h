//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.0, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 57.0.0.0.0
//
#ifndef ScandiumQualityMetricModelInput_h
#define ScandiumQualityMetricModelInput_h
@import Foundation;

#include "MLFeatureProvider-Protocol.h"

@class MLMultiArray, NSSet;

@interface ScandiumQualityMetricModelInput : NSObject<MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *input1;
@property (readonly, nonatomic) NSSet *featureNames;

/* instance methods */
- (id)initWithInput1:(id)input1;
- (id)featureValueForName:(id)name;
@end

#endif /* ScandiumQualityMetricModelInput_h */

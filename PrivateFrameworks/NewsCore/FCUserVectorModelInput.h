//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCUserVectorModelInput_h
#define FCUserVectorModelInput_h
@import Foundation;

#include "MLFeatureProvider-Protocol.h"

@class MLMultiArray, NSSet;

@interface FCUserVectorModelInput : NSObject<MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *aggregates;
@property (readonly, nonatomic) NSSet *featureNames;

/* instance methods */
- (id)initWithAggregates:(id)aggregates;
- (id)featureValueForName:(id)name;
@end

#endif /* FCUserVectorModelInput_h */

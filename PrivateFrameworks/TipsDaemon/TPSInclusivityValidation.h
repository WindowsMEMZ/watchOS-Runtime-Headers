//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSInclusivityValidation_h
#define TPSInclusivityValidation_h
@import Foundation;

#include "TPSTargetingValidation.h"

@class NSArray;

@interface TPSInclusivityValidation : TPSTargetingValidation

@property (copy, nonatomic) NSArray *targetValues;
@property (copy, nonatomic) NSArray *excludeValues;

/* instance methods */
- (id)initWithTargetValues:(id)values excludeValues:(id)values;
- (id)description;
@end

#endif /* TPSInclusivityValidation_h */

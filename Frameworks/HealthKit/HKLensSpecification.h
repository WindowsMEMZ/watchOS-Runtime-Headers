//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKLensSpecification_h
#define HKLensSpecification_h
@import Foundation;

#include "HKQuantity.h"

@interface HKLensSpecification : NSObject

@property (readonly, copy, nonatomic) HKQuantity *sphere;
@property (readonly, copy, nonatomic) HKQuantity *cylinder;
@property (readonly, copy, nonatomic) HKQuantity *axis;
@property (readonly, copy, nonatomic) HKQuantity *addPower;

/* instance methods */
- (id)_initWithSphere:(id)sphere cylinder:(id)cylinder axis:(id)axis addPower:(id)power;
- (id)description;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HKLensSpecification_h */

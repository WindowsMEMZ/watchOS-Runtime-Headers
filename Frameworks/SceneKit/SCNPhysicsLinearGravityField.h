//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 599.201.0.0.0
//
#ifndef SCNPhysicsLinearGravityField_h
#define SCNPhysicsLinearGravityField_h
@import Foundation;

#include "SCNPhysicsField.h"

@interface SCNPhysicsLinearGravityField : SCNPhysicsField
/* instance methods */
- (struct SCNVector3 { float x0; float x1; float x2; })gravity;
- (void)setDirection:(struct SCNVector3 { float x0; float x1; float x2; })direction;
- (struct c3dPhysicsField { undefined * * x0; struct { x0[4] } x1; struct { x0[4] } x2; float x3; float x4; float x5; unsigned int x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; float x11; } *)_createField;
- (BOOL)supportsOffset;
@end

#endif /* SCNPhysicsLinearGravityField_h */

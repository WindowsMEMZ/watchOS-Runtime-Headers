//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 50.0.6.0.0
//
#ifndef SKPhysicsContact_h
#define SKPhysicsContact_h
@import Foundation;

#include "SKPhysicsBody.h"

@interface SKPhysicsContact : NSObject

@property (readonly, nonatomic) SKPhysicsBody *bodyA;
@property (readonly, nonatomic) SKPhysicsBody *bodyB;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } contactPoint;
@property (readonly, nonatomic) struct CGVector { double x0; double x1; } contactNormal;
@property (readonly, nonatomic) double collisionImpulse;

/* class methods */
+ (id)allocWithZone:(struct _NSZone *)zone;

/* instance methods */
@end

#endif /* SKPhysicsContact_h */

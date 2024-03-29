//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 40.0.3.0.0
//
#ifndef PKPhysicsContact_h
#define PKPhysicsContact_h
@import Foundation;

#include "PKPhysicsBody.h"

@interface PKPhysicsContact : NSObject {
  /* instance variables */
  double _impulse;
}

@property BOOL didBegin;
@property BOOL didEnd;
@property (readonly, nonatomic) PKPhysicsBody *bodyA;
@property (readonly, nonatomic) PKPhysicsBody *bodyB;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } contactPoint;
@property (readonly, nonatomic) struct CGVector { double x0; double x1; } contactNormal;
@property (readonly, nonatomic) double collisionImpulse;

/* instance methods */
- (id)init;
@end

#endif /* PKPhysicsContact_h */

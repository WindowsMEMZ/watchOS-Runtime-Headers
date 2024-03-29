//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 599.201.0.0.0
//
#ifndef SCNPhysicsBallSocketJoint_h
#define SCNPhysicsBallSocketJoint_h
@import Foundation;

#include "SCNPhysicsBehavior.h"
#include "SCNPhysicsBody.h"
#include "SCNPhysicsWorld.h"

@interface SCNPhysicsBallSocketJoint : SCNPhysicsBehavior {
  /* instance variables */
  struct { SCNPhysicsBody *bodyA; SCNPhysicsBody *bodyB; struct SCNVector3 { float x; float y; float z; } anchorA; struct SCNVector3 { float x; float y; float z; } anchorB; } _definition;
  struct btPoint2PointConstraint { undefined * * x0; int x1; int x2; union { int x0; void * x1; } x3; float x4; BOOL x5; BOOL x6; int x7; struct btRigidBody * x8; struct btRigidBody * x9; float x10; float x11; struct btJointFeedback * x12; f])}f} x13[3{btJacobianEntry={btVector3=(?=[4f])}{btVector3=(?=[4f])}{btVector3=(?=[4f])}{btVector3=(?=[4f])}{btVector3=(?=[4] struct btVector3 { union { float x0[4] } x0; } x14; struct btVector3 { union { float x0[4] } x0; } x15; int x16; float x17; float x18; BOOL x19; struct btConstraintSetting { float x0; float x1; float x2; } x20; } * _constraint;
  SCNPhysicsWorld *_world;
}

@property (readonly, nonatomic) SCNPhysicsBody *bodyA;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } anchorA;
@property (readonly, nonatomic) SCNPhysicsBody *bodyB;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } anchorB;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)jointWithBodyA:(id)a anchorA:(struct SCNVector3 { float x0; float x1; float x2; })a bodyB:(id)b anchorB:(struct SCNVector3 { float x0; float x1; float x2; })b;
+ (id)jointWithBody:(id)body anchor:(struct SCNVector3 { float x0; float x1; float x2; })anchor;

/* instance methods */
- (void)dealloc;
- (id)initWithBodyA:(id)a anchorA:(struct SCNVector3 { float x0; float x1; float x2; })a bodyB:(id)b anchorB:(struct SCNVector3 { float x0; float x1; float x2; })b;
- (id)initWithBody:(id)body anchor:(struct SCNVector3 { float x0; float x1; float x2; })anchor;
- (void)_copyDefinition:(struct { unsigned char x0[296] } *)definition;
- (void)_addToPhysicsWorld:(id)world definition:(struct { unsigned char x0[296] })definition;
- (void)_willRemoveFromPhysicsWorld:(id)world;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* SCNPhysicsBallSocketJoint_h */

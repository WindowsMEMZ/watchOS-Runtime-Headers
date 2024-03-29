//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 599.201.0.0.0
//
#ifndef SCNPhysicsContact_h
#define SCNPhysicsContact_h
@import Foundation;

#include "SCNNode.h"

@interface SCNPhysicsContact : NSObject {
  /* instance variables */
  double _distance;
  double _fraction;
  long long _updateCount;
}

@property (readonly, nonatomic) SCNNode *nodeA;
@property (readonly, nonatomic) SCNNode *nodeB;
@property (readonly, nonatomic) struct SCNVector3 { float x0; float x1; float x2; } contactPoint;
@property (readonly, nonatomic) struct SCNVector3 { float x0; float x1; float x2; } contactNormal;
@property (readonly, nonatomic) double collisionImpulse;
@property (readonly, nonatomic) double penetrationDistance;
@property (readonly, nonatomic) double sweepTestFraction;

/* class methods */
+ (id)_contactWithManifold:(const struct btPersistentManifold { int x0; f])}} x1[4{btManifoldPoint={btVector3=(?=[4f])}{btVector3=(?=[4f])}{btVector3=(?=[4f])}{btVector3=(?=[4f])}{btVector3=(?=[4f])}ffffiiii^vBfffffffi{btVector3=(?=[4f])}{btVector3=(?=[4] struct btCollisionObject * x2; struct btCollisionObject * x3; int x4; float x5; float x6; int x7; int x8; int x9; struct c3dContactCallback * x10; } *)manifold index:(long long)index;

/* instance methods */
- (void)dealloc;
- (id)description;
- (void)_fillNodeA:(id)a nodeB:(id)b contactPoint:(struct SCNVector3 { float x0; float x1; float x2; })point collisionImpulse:(struct SCNVector3 { float x0; float x1; float x2; })impulse distance:(double)distance hitFraction:(double)fraction;
- (void)_fillNodeA:(id)a nodeB:(id)b;
- (void)_updateWithManifold:(const struct btPersistentManifold { int x0; f])}} x1[4{btManifoldPoint={btVector3=(?=[4f])}{btVector3=(?=[4f])}{btVector3=(?=[4f])}{btVector3=(?=[4f])}{btVector3=(?=[4f])}ffffiiii^vBfffffffi{btVector3=(?=[4f])}{btVector3=(?=[4] struct btCollisionObject * x2; struct btCollisionObject * x3; int x4; float x5; float x6; int x7; int x8; int x9; struct c3dContactCallback * x10; } *)manifold index:(long long)index point:(const struct btManifoldPoint { struct btVector3 { union { float x0[4] } x0; } x0; struct btVector3 { union { float x0[4] } x0; } x1; struct btVector3 { union { float x0[4] } x0; } x2; struct btVector3 { union { float x0[4] } x0; } x3; struct btVector3 { union { float x0[4] } x0; } x4; float x5; float x6; float x7; float x8; int x9; int x10; int x11; int x12; void * x13; BOOL x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; int x22; struct btVector3 { union { float x0[4] } x0; } x23; struct btVector3 { union { float x0[4] } x0; } x24; } *)point;
- (void)_prepareUpdate;
- (BOOL)_shouldPostUpdate;
@end

#endif /* SCNPhysicsContact_h */

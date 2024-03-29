//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 50.0.6.0.0
//
#ifndef SKPhysicsWorld_h
#define SKPhysicsWorld_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@protocol SKPhysicsContactDelegate;

@interface SKPhysicsWorld : NSObject<NSSecureCoding>

@property (nonatomic) struct CGVector { double x0; double x1; } gravity;
@property (nonatomic) double speed;
@property (nonatomic) NSObject<SKPhysicsContactDelegate> *contactDelegate;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone *)zone;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)stepWithTime:(double)time velocityIterations:(unsigned long long)iterations positionIterations:(unsigned long long)iterations;
- (void)addBody:(id)body;
- (void)removeBody:(id)body;
- (void)removeAllBodies;
- (BOOL)hasBodies;
- (id)bodies;
- (id)fields;
- (void)addJoint:(id)joint;
- (void)removeJoint:(id)joint;
- (void)removeAllJoints;
- (BOOL)hasFields;
- (void)enumerateBodiesAtPoint:(struct CGPoint { double x0; double x1; })point usingBlock:(id /* block */)block;
- (void)enumerateBodiesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect usingBlock:(id /* block */)block;
- (void)enumerateBodiesAlongRayStart:(struct CGPoint { double x0; double x1; })start end:(struct CGPoint { double x0; double x1; })end usingBlock:(id /* block */)block;
- (id)bodyAtPoint:(struct CGPoint { double x0; double x1; })point;
- (id)bodyInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)bodyAlongRayStart:(struct CGPoint { double x0; double x1; })start end:(struct CGPoint { double x0; double x1; })end;
- (3)sampleFields:;
- (3)sampleFieldsAt:;
@end

#endif /* SKPhysicsWorld_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 50.0.6.0.0
//
#ifndef SKPhysicsBody_h
#define SKPhysicsBody_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SKNode.h"

@class NSArray;

@interface SKPhysicsBody : NSObject<NSCopying, NSSecureCoding>

@property (nonatomic) BOOL dynamic;
@property (nonatomic) BOOL usesPreciseCollisionDetection;
@property (nonatomic) BOOL allowsRotation;
@property (nonatomic) BOOL pinned;
@property (nonatomic) BOOL resting;
@property (nonatomic) double friction;
@property (nonatomic) double charge;
@property (nonatomic) double restitution;
@property (nonatomic) double linearDamping;
@property (nonatomic) double angularDamping;
@property (nonatomic) double density;
@property (nonatomic) double mass;
@property (readonly, nonatomic) double area;
@property (nonatomic) BOOL affectedByGravity;
@property (nonatomic) unsigned int fieldBitMask;
@property (nonatomic) unsigned int categoryBitMask;
@property (nonatomic) unsigned int collisionBitMask;
@property (nonatomic) unsigned int contactTestBitMask;
@property (readonly, nonatomic) NSArray *joints;
@property (readonly, weak, nonatomic) SKNode *node;
@property (nonatomic) struct CGVector { double x0; double x1; } velocity;
@property (nonatomic) double angularVelocity;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone *)zone;
+ (id)copyWithZone:(struct _NSZone *)zone;
+ (id)bodyWithCircleOfRadius:(double)radius;
+ (id)bodyWithCircleOfRadius:(double)radius center:(struct CGPoint { double x0; double x1; })center;
+ (id)bodyWithRectangleOfSize:(struct CGSize { double x0; double x1; })size;
+ (id)bodyWithRectangleOfSize:(struct CGSize { double x0; double x1; })size center:(struct CGPoint { double x0; double x1; })center;
+ (id)bodyWithPolygonFromPath:(struct CGPath *)path;
+ (id)bodyWithEdgeFromPoint:(struct CGPoint { double x0; double x1; })point toPoint:(struct CGPoint { double x0; double x1; })point;
+ (id)bodyWithEdgeChainFromPath:(struct CGPath *)path;
+ (id)bodyWithEdgeLoopFromPath:(struct CGPath *)path;
+ (id)bodyWithEdgeLoopFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
+ (id)bodyWithTexture:(id)texture size:(struct CGSize { double x0; double x1; })size;
+ (id)bodyWithTexture:(id)texture alphaThreshold:(float)threshold size:(struct CGSize { double x0; double x1; })size;
+ (id)bodyWithTexture:(id)texture alphaThreshold:(float)threshold size:(struct CGSize { double x0; double x1; })size accuracy:(float)accuracy;
+ (id)bodyWithBodies:(id)bodies;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)applyForce:(struct CGVector { double x0; double x1; })force;
- (void)applyForce:(struct CGVector { double x0; double x1; })force atPoint:(struct CGPoint { double x0; double x1; })point;
- (void)applyTorque:(double)torque;
- (void)applyImpulse:(struct CGVector { double x0; double x1; })impulse;
- (void)applyImpulse:(struct CGVector { double x0; double x1; })impulse atPoint:(struct CGPoint { double x0; double x1; })point;
- (void)applyAngularImpulse:(double)impulse;
- (id)allContactedBodies;
- (BOOL)isDynamic;
- (BOOL)isResting;
@end

#endif /* SKPhysicsBody_h */

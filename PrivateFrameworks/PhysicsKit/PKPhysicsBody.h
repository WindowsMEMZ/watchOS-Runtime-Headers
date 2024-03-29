//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 40.0.3.0.0
//
#ifndef PKPhysicsBody_h
#define PKPhysicsBody_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PKPhysicsWorld.h"

@class NSArray, NSMutableArray;
@protocol NSObject, struct shared_ptr<PKPath> { struct PKPath * x0; struct __shared_weak_count * x1; }, {shared_ptr<PKPath>="__ptr_"^{PKPath}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<QuadTree>="__ptr_"^{QuadTree}"__cntrl_"^{__shared_weak_count}}, {vector<PKPhysicsShape *, std::allocator<PKPhysicsShape *>>="__begin_"^^{PKPhysicsShape}"__end_"^^{PKPhysicsShape}"__end_cap_"{__compressed_pair<PKPhysicsShape **, std::allocator<PKPhysicsShape *>>="__value_"^^{PKPhysicsShape}}};

@interface PKPhysicsBody : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  struct b2BodyDef { BOOL _sk_affectedByGravity; unsigned int _sk_fieldCategoryBitMask; unsigned int _sk_categoryBitMask; unsigned int _sk_collisionBitMask; unsigned int _sk_intersectionCallbackBitMask; int type; struct b2Vec2 { float x; float y; } position; float angle; struct b2Vec2 { float x; float y; } linearVelocity; float angularVelocity; float charge; float linearDamping; float angularDamping; BOOL allowSleep; BOOL awake; BOOL fixedRotation; BOOL bullet; BOOL active; void *userData; } _bodyDef;
  struct b2Body { BOOL x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; unsigned short x6; int x7; struct b2Transform { struct b2Vec2 { float x0; float x1; } x0; struct b2Rot { float x0; float x1; } x1; } x8; struct b2Transform { struct b2Vec2 { float x0; float x1; } x0; struct b2Rot { float x0; float x1; } x1; } x9; struct b2Sweep { struct b2Vec2 { float x0; float x1; } x0; union b2Position { struct { struct b2Vec2 { float x0; float x1; } x0; float x1; float x2; } x0; } x1; union b2Position { struct { struct b2Vec2 { float x0; float x1; } x0; float x1; float x2; } x0; } x2; float x3; } x10; struct b2Vec2 { float x0; float x1; } x11; float x12; struct b2Vec2 { float x0; float x1; } x13; float x14; struct b2World * x15; struct b2Body * x16; struct b2Body * x17; struct b2Fixture * x18; int x19; struct b2JointEdge * x20; struct b2ContactEdge * x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; void * x30; } * _body;
  struct PKCField * _field;
  int _dynamicType;
  struct vector<PKPhysicsShape *, std::allocator<PKPhysicsShape *>> { struct PKPhysicsShape * *__begin_; struct PKPhysicsShape * *__end_; struct __compressed_pair<PKPhysicsShape **, std::allocator<PKPhysicsShape *>> { struct PKPhysicsShape * *__value_; } __end_cap_; } _shapes;
  PKPhysicsWorld *_world;
  BOOL _inUse;
  int _shapeType;
  struct shared_ptr<PKPath> { struct PKPath *__ptr_; struct __shared_weak_count *__cntrl_; } _pathPtr;
  struct shared_ptr<QuadTree> { struct QuadTree *__ptr_; struct __shared_weak_count *__cntrl_; } _quadTree;
  struct CGPoint { double x; double y; } _p0;
  struct CGPoint { double x; double y; } _p1;
  struct CGSize { double width; double height; } _size;
  double _edgeRadius;
  struct CGImage * _mask;
  BOOL _isPinned;
}

@property (readonly, nonatomic) void * _shapes;
@property (nonatomic) struct b2BodyDef { BOOL x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; struct b2Vec2 { float x0; float x1; } x6; float x7; struct b2Vec2 { float x0; float x1; } x8; float x9; float x10; float x11; float x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; void * x18; } _bodyDef;
@property (nonatomic) struct b2Body { BOOL x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; unsigned short x6; int x7; struct b2Transform { struct b2Vec2 { float x0; float x1; } x0; struct b2Rot { float x0; float x1; } x1; } x8; struct b2Transform { struct b2Vec2 { float x0; float x1; } x0; struct b2Rot { float x0; float x1; } x1; } x9; struct b2Sweep { struct b2Vec2 { float x0; float x1; } x0; union b2Position { struct { struct b2Vec2 { float x0; float x1; } x0; float x1; float x2; } x0; } x1; union b2Position { struct { struct b2Vec2 { float x0; float x1; } x0; float x1; float x2; } x0; } x2; float x3; } x10; struct b2Vec2 { float x0; float x1; } x11; float x12; struct b2Vec2 { float x0; float x1; } x13; float x14; struct b2World * x15; struct b2Body * x16; struct b2Body * x17; struct b2Fixture * x18; int x19; struct b2JointEdge * x20; struct b2ContactEdge * x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; void * x30; } * _body;
@property (nonatomic) struct CGPoint { double x0; double x1; } position;
@property (nonatomic) double rotation;
@property (nonatomic) BOOL dynamic;
@property (nonatomic) BOOL usesPreciseCollisionDetection;
@property (nonatomic) BOOL allowsRotation;
@property (nonatomic) BOOL pinned;
@property (nonatomic) struct shared_ptr<PKPath> { struct PKPath * x0; struct __shared_weak_count * x1; } outline;
@property (readonly, nonatomic) void * volume;
@property (nonatomic) BOOL resting;
@property (nonatomic) double friction;
@property (nonatomic) double charge;
@property (nonatomic) double restitution;
@property (nonatomic) double linearDamping;
@property (nonatomic) double angularDamping;
@property (nonatomic) double density;
@property (nonatomic) double mass;
@property (readonly, nonatomic) double area;
@property (nonatomic) double radius;
@property (nonatomic) BOOL affectedByGravity;
@property (nonatomic) unsigned int fieldBitMask;
@property (nonatomic) unsigned int categoryBitMask;
@property (nonatomic) unsigned int collisionBitMask;
@property (nonatomic) unsigned int contactTestBitMask;
@property (readonly, nonatomic) NSArray *joints;
@property (weak, nonatomic) NSObject<NSObject> *representedObject;
@property (copy, nonatomic) id /* block */ postStepBlock;
@property (nonatomic) struct CGVector { double x0; double x1; } velocity;
@property (nonatomic) double angularVelocity;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)bodyWithOutline:(struct shared_ptr<PKPath> { struct PKPath * x0; struct __shared_weak_count * x1; })outline offset:(struct CGPoint { double x0; double x1; })offset;
+ (id)initWithQuadTree:(id)tree;
+ (id)initWithMarchingCubes:(void *)cubes pixelFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
+ (id)bodyWithBodies:(id)bodies;
+ (id)bodyWithCircleOfRadius:(double)radius;
+ (id)bodyWithCircleOfRadius:(double)radius center:(struct CGPoint { double x0; double x1; })center;
+ (id)bodyWithRectangleOfSize:(struct CGSize { double x0; double x1; })size;
+ (id)bodyWithRectangleOfSize:(struct CGSize { double x0; double x1; })size edgeRadius:(double)radius;
+ (id)bodyWithRectangleOfSize:(struct CGSize { double x0; double x1; })size center:(struct CGPoint { double x0; double x1; })center;
+ (id)bodyWithRectangleOfSize:(struct CGSize { double x0; double x1; })size center:(struct CGPoint { double x0; double x1; })center edgeRadius:(double)radius;
+ (id)bodyWithEdgeFromPoint:(struct CGPoint { double x0; double x1; })point toPoint:(struct CGPoint { double x0; double x1; })point;
+ (id)bodyWithPolygonFromPath:(struct CGPath *)path;
+ (id)bodyWithEdgeChainFromPath:(struct CGPath *)path;
+ (id)bodyWithEdgeLoopFromPath:(struct CGPath *)path;

/* instance methods */
- (BOOL)active;
- (void)setActive:(BOOL)active;
- (void)set_world:(id)set_world;
- (id)_world;
- (struct shared_ptr<QuadTree> { struct QuadTree * x0; struct __shared_weak_count * x1; })_quadTree;
- (id)_joints;
- (void)set_joints:(id)set_joints;
- (BOOL)_inUse;
- (void)set_inUse:(BOOL)use;
- (void)clearBox2DData;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqualToBody:(id)body;
- (id)init;
- (void)dealloc;
- (id)initWithBodies:(id)bodies;
- (id)initWithCircleOfRadius:(double)radius;
- (id)initWithCircleOfRadius:(double)radius center:(struct CGPoint { double x0; double x1; })center;
- (id)initWithRectangleOfSize:(struct CGSize { double x0; double x1; })size;
- (id)initWithRectangleOfSize:(struct CGSize { double x0; double x1; })size center:(struct CGPoint { double x0; double x1; })center;
- (id)initWithRectangleOfSize:(struct CGSize { double x0; double x1; })size center:(struct CGPoint { double x0; double x1; })center edgeRadius:(float)radius;
- (id)initWithEdgeFromPoint:(struct CGPoint { double x0; double x1; })point toPoint:(struct CGPoint { double x0; double x1; })point;
- (id)initWithPolygonFromPath:(struct CGPath *)path;
- (id)initWithEdgeChainFromPath:(struct CGPath *)path;
- (id)initWithEdgeLoopFromPath:(struct CGPath *)path;
- (void)set_allowSleep:(BOOL)sleep;
- (BOOL)_allowSleep;
- (void)applyForce:(struct CGPoint { double x0; double x1; })force atPoint:(struct CGPoint { double x0; double x1; })point;
- (void)applyForce:(struct CGPoint { double x0; double x1; })force;
- (void)applyTorque:(double)torque;
- (void)applyImpulse:(struct CGVector { double x0; double x1; })impulse atPoint:(struct CGPoint { double x0; double x1; })point;
- (void)applyImpulse:(struct CGVector { double x0; double x1; })impulse;
- (void)applyAngularImpulse:(double)impulse;
- (void)applyUnscaledForce:(struct CGVector { double x0; double x1; })force atPoint:(struct CGPoint { double x0; double x1; })point;
- (void)applyUnscaledForce:(struct CGVector { double x0; double x1; })force;
- (void)applyUnscaledImpulse:(struct CGVector { double x0; double x1; })impulse atPoint:(struct CGPoint { double x0; double x1; })point;
- (void)applyUnscaledImpulse:(struct CGVector { double x0; double x1; })impulse;
- (BOOL)isResting;
- (void)reapplyScale:(double)scale yScale:(double)scale;
- (BOOL)isDynamic;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)_descriptionClassName;
- (id)description;
- (id)allContactedBodies;
@end

#endif /* PKPhysicsBody_h */

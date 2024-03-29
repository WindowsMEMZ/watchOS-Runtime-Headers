//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIGravityBehavior_h
#define UIGravityBehavior_h
@import Foundation;

#include "UIDynamicBehavior.h"

@class NSArray;

@interface UIGravityBehavior : UIDynamicBehavior {
  /* instance variables */
  struct CGPoint { double x; double y; } _gravity;
}

@property (readonly, copy, nonatomic) NSArray *items;
@property (nonatomic) struct CGVector { double x0; double x1; } gravityDirection;
@property (nonatomic) double angle;
@property (nonatomic) double magnitude;

/* class methods */
+ (BOOL)_isPrimitiveBehavior;

/* instance methods */
- (id)init;
- (id)initWithItems:(id)items;
- (void)_addGravityItem:(id)item;
- (void)addItem:(id)item;
- (void)removeItem:(id)item;
- (struct CGPoint { double x0; double x1; })gravity;
- (struct CGPoint { double x0; double x1; })denormalizedGravity;
- (double)xComponent;
- (double)yComponent;
- (void)setXComponent:(double)xcomponent;
- (void)setYComponent:(double)ycomponent;
- (void)setXComponent:(double)xcomponent yComponent:(double)component;
- (void)_setAngle:(double)angle magnitude:(double)magnitude;
- (void)setAngle:(double)angle magnitude:(double)magnitude;
- (void)setGravity:(struct CGPoint { double x0; double x1; })gravity;
- (void)_associate;
- (void)_dissociate;
- (id)description;
@end

#endif /* UIGravityBehavior_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIImageSymbolBounceEffect_h
#define _UIImageSymbolBounceEffect_h
@import Foundation;

#include "_UIImageSymbolEffect.h"
#include "_UIImageSymbolEffectRepeatBehavior.h"

@interface _UIImageSymbolBounceEffect : _UIImageSymbolEffect

@property (retain, nonatomic) _UIImageSymbolEffectRepeatBehavior *repeatBehavior;
@property (nonatomic) long long bounceDirection;
@property (nonatomic) BOOL byLayer;

/* class methods */
+ (id)effect;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (BOOL)_isValidAnimationPreset;
- (id)_nsSymbolEffectRepresentation;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* _UIImageSymbolBounceEffect_h */

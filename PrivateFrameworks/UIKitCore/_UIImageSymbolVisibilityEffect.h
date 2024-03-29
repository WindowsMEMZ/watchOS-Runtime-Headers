//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIImageSymbolVisibilityEffect_h
#define _UIImageSymbolVisibilityEffect_h
@import Foundation;

#include "_UIImageSymbolEffect.h"

@interface _UIImageSymbolVisibilityEffect : _UIImageSymbolEffect

@property (nonatomic) long long visibility;
@property (nonatomic) long long style;
@property (nonatomic) BOOL byLayer;

/* class methods */
+ (id)effect;
+ (id)effectWithVisibility:(long long)visibility;
+ (id)appearEffect;
+ (id)disappearEffect;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (BOOL)_isValidAnimationPreset;
- (long long)_stateUpdateType;
- (long long)_desiredVisibility;
- (id)_nsSymbolEffectRepresentation;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* _UIImageSymbolVisibilityEffect_h */

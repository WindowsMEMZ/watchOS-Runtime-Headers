//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 135.2.0.2.0
//
#ifndef NSSymbolVariableColorEffect_h
#define NSSymbolVariableColorEffect_h
@import Foundation;

#include "NSSymbolEffect.h"

@interface NSSymbolVariableColorEffect : NSSymbolEffect {
  /* instance variables */
  long long _inactiveStyle;
  long long _playbackStyle;
  long long _fillStyle;
}

@property (nonatomic) long long _fillStyle;
@property (nonatomic) long long _inactiveStyle;
@property (nonatomic) long long _playbackStyle;

/* class methods */
+ (id)effect;

/* instance methods */
- (id)effectWithIterative;
- (id)effectWithCumulative;
- (id)effectWithReversing;
- (id)effectWithNonReversing;
- (id)effectWithHideInactiveLayers;
- (id)effectWithDimInactiveLayers;
- (id)_rbOptionsMutable;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* NSSymbolVariableColorEffect_h */

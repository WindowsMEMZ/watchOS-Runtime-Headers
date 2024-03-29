//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 135.2.0.2.0
//
#ifndef NSSymbolReplaceContentTransition_h
#define NSSymbolReplaceContentTransition_h
@import Foundation;

#include "NSSymbolContentTransition.h"

@interface NSSymbolReplaceContentTransition : NSSymbolContentTransition {
  /* instance variables */
  long long _layerBehavior;
  long long _style;
}

@property (nonatomic) long long _style;
@property (nonatomic) long long _layerBehavior;

/* class methods */
+ (id)transition;
+ (id)replaceDownUpTransition;
+ (id)replaceUpUpTransition;
+ (id)replaceOffUpTransition;

/* instance methods */
- (id)_withStyle:(long long)style;
- (id)transitionWithByLayer;
- (id)transitionWithWholeSymbol;
- (id)_rbOptionsMutable;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* NSSymbolReplaceContentTransition_h */

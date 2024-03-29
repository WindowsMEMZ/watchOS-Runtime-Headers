//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIKeyEventMap_ja_h
#define TIKeyEventMap_ja_h
@import Foundation;

#include "TIKeyEventMap.h"

@interface TIKeyEventMap_ja : TIKeyEventMap
/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)shiftOptionMap_JIS;
+ (id)optionMap_JIS;

/* instance methods */
- (id)remapKeyWithString:(id)string stringWithoutModifiers:(id)modifiers modifierFlags:(unsigned long long)flags keyboardState:(id)state;
@end

#endif /* TIKeyEventMap_ja_h */

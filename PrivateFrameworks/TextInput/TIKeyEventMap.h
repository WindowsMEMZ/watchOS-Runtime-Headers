//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIKeyEventMap_h
#define TIKeyEventMap_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface TIKeyEventMap : NSObject<NSSecureCoding>
/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)remapKeyWithString:(id)string stringWithoutModifiers:(id)modifiers modifierFlags:(unsigned long long)flags keyboardState:(id)state;
- (id)inputEventForInputString:(id)string stringWithoutModifiers:(id)modifiers modifierFlags:(unsigned long long)flags keyboardState:(id)state;
- (long long)candidateNumberKey:(int)key;
@end

#endif /* TIKeyEventMap_h */

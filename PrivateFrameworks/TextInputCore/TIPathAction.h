//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIPathAction_h
#define TIPathAction_h
@import Foundation;

#include "TIUserAction.h"

@interface TIPathAction : TIUserAction

@property (readonly, nonatomic) unsigned long long syllableCount;

/* instance methods */
- (id)initWithSyllableCount:(unsigned long long)count keyboardState:(id)state;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* TIPathAction_h */

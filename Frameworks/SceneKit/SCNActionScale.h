//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 599.201.0.0.0
//
#ifndef SCNActionScale_h
#define SCNActionScale_h
@import Foundation;

#include "SCNAction.h"

@interface SCNActionScale : SCNAction {
  /* instance variables */
  struct SCNCActionScale { undefined * * x0; double x1; id /* block */ x2; id x3; BOOL x4; double x5; double x6; double x7; double x8; double x9; BOOL x10; BOOL x11; id /* block */ x12; struct __CFString * x13; long long x14; double x15; double x16; double x17; double x18; float x19; float x20; float x21; float x22; float x23; BOOL x24; BOOL x25; } * _mycaction;
}

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)scaleBy:(double)by duration:(double)duration;
+ (id)scaleTo:(double)to duration:(double)duration;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)reversedAction;
- (id)parameters;
- (BOOL)isRelative;
@end

#endif /* SCNActionScale_h */

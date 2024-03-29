//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 599.201.0.0.0
//
#ifndef SCNActionSequence_h
#define SCNActionSequence_h
@import Foundation;

#include "SCNAction.h"

@class NSArray;

@interface SCNActionSequence : SCNAction {
  /* instance variables */
  void * _mycaction;
  NSArray *_actions;
}

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)sequenceWithActions:(id)actions;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isCustom;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)reversedAction;
@end

#endif /* SCNActionSequence_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 50.0.6.0.0
//
#ifndef SKGroup_h
#define SKGroup_h
@import Foundation;

#include "SKAction.h"

@class NSArray;

@interface SKGroup : SKAction {
  /* instance variables */
  void * _mycaction;
  NSArray *_actions;
}

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)groupWithActions:(id)actions;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)subactions;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)reversedAction;
- (BOOL)finished;
@end

#endif /* SKGroup_h */

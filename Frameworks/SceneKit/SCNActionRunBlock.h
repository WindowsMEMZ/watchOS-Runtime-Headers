//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 599.201.0.0.0
//
#ifndef SCNActionRunBlock_h
#define SCNActionRunBlock_h
@import Foundation;

#include "SCNAction.h"

@protocol OS_dispatch_queue;

@interface SCNActionRunBlock : SCNAction {
  /* instance variables */
  id /* block */ _block;
  NSObject<OS_dispatch_queue> *_queue;
}

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)runBlock:(id /* block */)block queue:(id)queue;

/* instance methods */
- (id)init;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isCustom;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)updateWithTarget:(id)target forTime:(double)time;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)reversedAction;
@end

#endif /* SCNActionRunBlock_h */

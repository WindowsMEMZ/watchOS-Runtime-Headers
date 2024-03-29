//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 50.0.6.0.0
//
#ifndef SKRunBlock_h
#define SKRunBlock_h
@import Foundation;

#include "SKAction.h"

@protocol OS_dispatch_queue;

@interface SKRunBlock : SKAction {
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
- (id)initWithCoder:(id)coder;
- (void)updateWithTarget:(id)target forTime:(double)time;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)reversedAction;
@end

#endif /* SKRunBlock_h */

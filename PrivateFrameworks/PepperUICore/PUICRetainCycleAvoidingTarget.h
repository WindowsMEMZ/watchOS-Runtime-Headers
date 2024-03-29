//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICRetainCycleAvoidingTarget_h
#define PUICRetainCycleAvoidingTarget_h
@import Foundation;

@interface PUICRetainCycleAvoidingTarget : NSObject {
  /* instance variables */
  id _target;
}

/* class methods */
+ (id)retainCycleAvoiderWithRealTarget:(id)target;

/* instance methods */
- (id)initWithTarget:(id)target;
- (id)forwardingTargetForSelector:(SEL)selector;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)methodSignatureForSelector:(SEL)selector;
- (void)forwardInvocation:(id)invocation;
@end

#endif /* PUICRetainCycleAvoidingTarget_h */

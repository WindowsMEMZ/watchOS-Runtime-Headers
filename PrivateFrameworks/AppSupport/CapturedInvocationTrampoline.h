//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2622.0.0.0.0
//
#ifndef CapturedInvocationTrampoline_h
#define CapturedInvocationTrampoline_h
@import Foundation;

#include "InvocationTrampoline.h"

@interface CapturedInvocationTrampoline : InvocationTrampoline {
  /* instance variables */
  id * _outInvocation;
}

/* instance methods */
- (id)initWithTarget:(id)target outInvocation:(id *)invocation;
- (void)forwardInvocation:(id)invocation;
@end

#endif /* CapturedInvocationTrampoline_h */

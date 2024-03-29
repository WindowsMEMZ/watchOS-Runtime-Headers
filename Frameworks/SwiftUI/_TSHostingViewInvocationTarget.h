//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.2.12.0.0
//
#ifndef _TSHostingViewInvocationTarget_h
#define _TSHostingViewInvocationTarget_h
@import Foundation;

#include "NSProxy.h"

@interface _TSHostingViewInvocationTarget : NSProxy {
  /* instance variables */
  id /* block */ _handler;
}

/* instance methods */
- (id)initWithHandler:(id /* block */)handler;
- (id)methodSignatureForSelector:(SEL)selector;
- (void)forwardInvocation:(id)invocation;
@end

#endif /* _TSHostingViewInvocationTarget_h */

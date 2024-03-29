//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMInvocationCapturingProxy_h
#define IMInvocationCapturingProxy_h
@import Foundation;

#include "NSProxy.h"

@class Protocol;

@interface IMInvocationCapturingProxy : NSProxy

@property (readonly, nonatomic) Protocol *protocol;
@property (readonly, copy, nonatomic) id /* block */ forwardingHandler;

/* instance methods */
- (id)initWithProtocol:(id)protocol forwardingHandler:(id /* block */)handler;
- (BOOL)conformsToProtocol:(id)protocol;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)methodSignatureForSelector:(SEL)selector;
- (void)forwardInvocation:(id)invocation;
@end

#endif /* IMInvocationCapturingProxy_h */

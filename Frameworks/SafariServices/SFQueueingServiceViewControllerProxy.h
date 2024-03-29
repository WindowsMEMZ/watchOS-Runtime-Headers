//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFQueueingServiceViewControllerProxy_h
#define SFQueueingServiceViewControllerProxy_h
@import Foundation;

#include "NSProxy.h"
#include "SFQueueingServiceViewControllerProxyDelegate-Protocol.h"

@class NSMutableArray, Protocol;

@interface SFQueueingServiceViewControllerProxy : NSProxy {
  /* instance variables */
  NSMutableArray *_queuedInvocations;
  Protocol *_protocol;
}

@property (retain, nonatomic) id target;
@property (weak, nonatomic) NSObject<SFQueueingServiceViewControllerProxyDelegate> *delegate;

/* instance methods */
- (id)initWithProtocol:(id)protocol;
- (id)methodSignatureForSelector:(SEL)selector;
- (void)forwardInvocation:(id)invocation;
- (id)forwardingTargetForSelector:(SEL)selector;
@end

#endif /* SFQueueingServiceViewControllerProxy_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef NSInvocation_WebMainThreadInvoker_h
#define NSInvocation_WebMainThreadInvoker_h
@import Foundation;

#include "NSProxy.h"

@protocol {RetainPtr<id>="m_ptr"^v};

@interface NSInvocation (WebMainThreadInvoker)
/* instance methods */
- (void)_webkit_invokeAndHandleException:(id)exception;
@end

#endif /* NSInvocation_WebMainThreadInvoker_h */

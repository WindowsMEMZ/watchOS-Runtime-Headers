//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBProcessMonitorObserverConnection_Protocol_h
#define RBProcessMonitorObserverConnection_Protocol_h
@import Foundation;

#include "RBProcessMonitorObserverConnection-Protocol.h"

@class NSString;
@protocol OS_xpc_object;

@protocol RBProcessMonitorObserverConnection <NSObject>
/* instance methods */
- (void)sendMessage:(id)message replyQueue:(id)queue completion:(id /* block */)completion;
@end

#endif /* RBProcessMonitorObserverConnection_Protocol_h */

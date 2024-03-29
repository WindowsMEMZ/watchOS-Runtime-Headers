//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDRemoteHomeMessagingManager_Protocol_h
#define HMDRemoteHomeMessagingManager_Protocol_h
@import Foundation;

#include "HMDRemoteHomeMessagingManager-Protocol.h"
#include "HMFLogging-Protocol.h"

@class NSMapTable, NSString;

@protocol HMDRemoteHomeMessagingManager <NSObject>
/* instance methods */
- (void)registerHandler:(id)handler;
- (BOOL)sendMessage:(id)message completionHandler:(id /* block */)handler;
@end

#endif /* HMDRemoteHomeMessagingManager_Protocol_h */

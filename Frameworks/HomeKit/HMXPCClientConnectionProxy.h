//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMXPCClientConnectionProxy_h
#define HMXPCClientConnectionProxy_h
@import Foundation;

#include "HMFMessageTransport.h"
#include "HMXPCClientMessageHandling-Protocol.h"

@class NSDictionary, NSString;

@interface HMXPCClientConnectionProxy : HMFMessageTransport<HMXPCClientMessageHandling>

@property (readonly, copy) NSDictionary *userInfo;
@property (readonly) id /* block */ refreshHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserInfo:(id)info refreshHandler:(id /* block */)handler;
- (void)sendMessage:(id)message completionHandler:(id /* block */)handler;
- (void)handleMessage:(id)message;
- (void)handleMessage:(id)message responseHandler:(id /* block */)handler;
- (void)fetchUserInfo:(id /* block */)info;
@end

#endif /* HMXPCClientConnectionProxy_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2622.0.0.0.0
//
#ifndef DMXPCConnection_h
#define DMXPCConnection_h
@import Foundation;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface DMXPCConnection : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_queue> *_replyQueue;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (copy) id /* block */ interruptionHandler;
@property (copy) id /* block */ invalidationHandler;
@property (copy) id /* block */ messageHandler;

/* instance methods */
- (id)initWithConnection:(id)connection;
- (id)initWithServiceName:(id)name;
- (void)targetForegroundUserSessionIfNecessary;
- (void)resume;
- (void)invalidate;
- (void)_handleMessage:(id)message;
- (void)handleMessage:(id)message;
- (void)sendMessage:(id)message replyHandler:(id /* block */)handler;
- (id)sendMessageSync:(id)sync;
- (BOOL)hasEntitlement:(id)entitlement;
@end

#endif /* DMXPCConnection_h */

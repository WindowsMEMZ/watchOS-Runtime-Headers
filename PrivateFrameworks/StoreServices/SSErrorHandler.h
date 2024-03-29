//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSErrorHandler_h
#define SSErrorHandler_h
@import Foundation;

#include "SSXPCConnection.h"

@class NSArray;
@protocol OS_dispatch_queue, SSErrorHandlerDelegate;

@interface SSErrorHandler : NSObject {
  /* instance variables */
  SSXPCConnection *_controlConnection;
  NSObject<OS_dispatch_queue> *_delegateQueue;
  NSObject<OS_dispatch_queue> *_dispatchQueue;
  SSXPCConnection *_observerConnection;
}

@property NSObject<SSErrorHandlerDelegate> *delegate;
@property (copy) NSArray *failureTypes;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)startWithCompletionBlock:(id /* block */)block;
- (void)stopWithCompletionBlock:(id /* block */)block;
- (void)_dispatchToDelegate:(id /* block */)delegate;
- (void)_handleMessage:(id)message fromServerConnection:(id)connection;
- (void)_openSessionWithMessage:(id)message;
- (void)_reconnectToDaemonWithCompletionBlock:(id /* block */)block;
- (void)_sendDisconnectMessage;
- (void)_tearDownConnections;
@end

#endif /* SSErrorHandler_h */

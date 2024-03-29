//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXServer_h
#define AXServer_h
@import Foundation;

#include "AXIPCClient.h"
#include "AXIPCServer.h"

@class AXDispatchTimer, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface AXServer : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _actionHandlersLock;
}

@property (copy, nonatomic) NSString *serverIdentifier;
@property (retain, nonatomic) NSMutableArray *assertionWorkBacklog;
@property (retain, nonatomic) AXDispatchTimer *assertionRetryTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assertionWorkQueue;
@property (retain, nonatomic) NSMutableArray *actionHandlers;
@property (retain, nonatomic) AXIPCClient *client;
@property (retain, nonatomic) AXIPCServer *server;
@property (nonatomic) BOOL shouldRegisterClientCallbackSourceOnMainRunloop;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)sendSimpleMessage:(id)message;
- (BOOL)sendSimpleMessage:(id)message enqueueError:(id *)error;
- (BOOL)sendSimpleMessageWithResult:(id)result;
- (id)sendSimpleMessageWithObjectResult:(id)result;
- (id)sendMessage:(id)message;
- (id)_sendMessage:(id)message error:(id *)error;
- (void)sendAsynchronousMessage:(id)message replyOnQueue:(id)queue boolResultHandler:(id /* block */)handler;
- (void)sendAsynchronousMessage:(id)message replyOnQueue:(id)queue objectResultHandler:(id /* block */)handler;
- (void)sendAsynchronousMessage:(id)message replyOnQueue:(id)queue handler:(id /* block */)handler;
- (void)_processAssertionBacklog;
- (void)_initializeAssertionBookkeeping;
- (void)acquireAssertionWithType:(id)type identifier:(id)identifier;
- (void)relinquishAssertionWithType:(id)type identifier:(id)identifier;
- (void)_didConnectToClient;
- (void)_wasDisconnectedFromClient;
- (void)_didConnectToServer;
- (void)_willClearServer;
- (BOOL)_connectIfNecessary;
- (BOOL)_connectServerIfNecessary;
- (void)_ensureAssertionsHaveBeenProcessedWithCompletion:(id /* block */)completion;
- (id)_serviceName;
- (void)_registerActionHandler:(id /* block */)handler withIdentifierCallback:(id /* block */)callback retryInterval:(double)interval registrationMessageKey:(int)key;
- (void)_removeActionHandler:(id)handler registrationMessageKey:(int)key;
- (int)_actionResultKey;
- (id)_handleActionResult:(id)result;
@end

#endif /* AXServer_h */

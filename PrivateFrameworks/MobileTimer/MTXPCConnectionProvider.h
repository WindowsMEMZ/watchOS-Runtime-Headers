//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTXPCConnectionProvider_h
#define MTXPCConnectionProvider_h
@import Foundation;

#include "MTXPCConnectionInfo.h"
#include "NAScheduler-Protocol.h"

@class NSDate, NSXPCConnection;

@interface MTXPCConnectionProvider : NSObject {
  /* instance variables */
  NSXPCConnection *_connection;
  BOOL _alive;
}

@property (retain, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (retain, nonatomic) MTXPCConnectionInfo *info;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ reconnectHandler;
@property (retain, nonatomic) NSDate *lastLifecycleNotification;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int x0; } connectionLock;

/* class methods */
+ (id)providerWithConnectionInfo:(id)info errorHandler:(id /* block */)handler;
+ (id)providerWithConnectionInfo:(id)info reconnectHandler:(id /* block */)handler;

/* instance methods */
- (id)initWithConnectionInfo:(id)info errorHandler:(id /* block */)handler reconnectHandler:(id /* block */)handler;
- (void)dealloc;
- (id)_connectionRebuildingIfNecessary;
- (id)connection;
- (void)_didInterruptConnection;
- (void)_didInvalidateConnection;
- (void)didReceiveLifecycleNotification;
- (id)_retryConnection;
- (void)_retryConnectionWithRecover:(BOOL)recover;
- (void)performRemoteBlock:(id /* block */)block;
- (void)performRemoteBlock:(id /* block */)block withErrorHandler:(id /* block */)handler;
- (void)performRemoteBlock:(id /* block */)block withErrorHandler:(id /* block */)handler isSynchronous:(BOOL)synchronous;
- (id)_asyncRemoteObjectProxyWithErrorHandler:(id /* block */)handler;
- (id)_syncRemoteObjectProxyWithErrorHandler:(id /* block */)handler;
- (id)_remoteObjectProxyWithXPCConnectionProvider:(id /* block */)provider remoteObjectProxyProvider:(id /* block */)provider errorHandler:(id /* block */)handler;
- (id)description;
- (void)invalidate;
@end

#endif /* MTXPCConnectionProvider_h */

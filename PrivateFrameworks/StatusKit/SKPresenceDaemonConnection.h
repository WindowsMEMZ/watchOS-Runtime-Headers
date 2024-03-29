//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 25.300.51.0.0
//
#ifndef SKPresenceDaemonConnection_h
#define SKPresenceDaemonConnection_h
@import Foundation;

#include "SKPresenceConnectionDelegateProtocol-Protocol.h"
#include "SKPresenceDaemonDelegateProtocol-Protocol.h"

@class NSXPCConnection;

@interface SKPresenceDaemonConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } lock;
@property (weak, nonatomic) NSObject<SKPresenceDaemonDelegateProtocol> *presenceDaemonDelegate;
@property (weak, nonatomic) NSObject<SKPresenceConnectionDelegateProtocol> *connectionDelegate;

/* class methods */
+ (id)logger;
+ (id)daemonXPCInterface;
+ (id)daemonDelegateXPCInterface;

/* instance methods */
- (id)initWithPresenceDaemonDelegate:(id)delegate connectionDelegate:(id)delegate;
- (id)asynchronousRemoteDaemonWithErrorHandler:(id /* block */)handler;
- (id)synchronousRemoteDaemonWithErrorHandler:(id /* block */)handler;
- (void)invalidate;
- (void)_resetConnectionHandlers;
- (void)setXPCConnection:(id)xpcconnection;
- (unsigned long long)_xpcConnectionOptions;
@end

#endif /* SKPresenceDaemonConnection_h */

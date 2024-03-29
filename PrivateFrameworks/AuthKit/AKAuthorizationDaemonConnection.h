//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKAuthorizationDaemonConnection_h
#define AKAuthorizationDaemonConnection_h
@import Foundation;

#include "AKAuthorizationClientProtocol-Protocol.h"

@class NSXPCConnection, NSXPCListenerEndpoint;

@interface AKAuthorizationDaemonConnection : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
  NSXPCConnection *_connection;
  NSObject<AKAuthorizationClientProtocol> *_contextManager;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;

/* instance methods */
- (id)init;
- (id)initWithListenerEndpoint:(id)endpoint exportedInterface:(id)interface;
- (void)dealloc;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)handler;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)handler;
- (id)_connection;
- (void)_connectionInterruptionHandler;
- (void)_connectionInvalidationHandler;
@end

#endif /* AKAuthorizationDaemonConnection_h */

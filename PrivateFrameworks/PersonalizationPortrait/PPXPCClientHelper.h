//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPXPCClientHelper_h
#define PPXPCClientHelper_h
@import Foundation;

@class NSString, NSXPCConnection, NSXPCInterface;

@interface PPXPCClientHelper : NSObject {
  /* instance variables */
  struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } _connLock;
  NSXPCConnection *_conn;
  NSString *_serviceName;
  NSXPCInterface *_allowedServerInterface;
  NSXPCInterface *_allowedClientInterface;
  id _clientExportedObject;
  id /* block */ _interruptionHandler;
  id /* block */ _invalidationHandler;
}

/* instance methods */
- (id)initWithServiceName:(id)name allowedServerInterface:(id)interface allowedClientInterface:(id)interface clientExportedObject:(id)object interruptionHandler:(id /* block */)handler invalidationHandler:(id /* block */)handler;
- (void)dealloc;
- (void)_locked_establishConnection;
- (id)remoteObjectProxy;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)handler;
@end

#endif /* PPXPCClientHelper_h */

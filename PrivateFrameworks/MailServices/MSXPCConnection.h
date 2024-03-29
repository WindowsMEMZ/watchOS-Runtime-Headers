//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MSXPCConnection_h
#define MSXPCConnection_h
@import Foundation;

#include "NSXPCConnection.h"

@class EFPromise, NSLock, NSXPCInterface, Protocol;
@protocol OS_dispatch_queue;

@interface MSXPCConnection : NSXPCConnection {
  /* instance variables */
  NSLock *_lock;
  NSObject<OS_dispatch_queue> *_queue;
  EFPromise *_connectionPromise;
  NSXPCInterface *_remoteObjectInterface;
  NSXPCInterface *_exportedInterface;
  id _exportedObject;
  id /* block */ _interruptionHandler;
  id /* block */ _invalidationHandler;
  long long _resumeCount;
  atomic BOOL _locallyInvalidated;
}

@property (readonly, retain, nonatomic) Protocol *protocol;
@property (nonatomic) BOOL shouldLaunchMobileMail;

/* instance methods */
- (id)initWithProtocol:(id)protocol;
- (void)dealloc;
- (id)description;
- (id)remoteObjectInterface;
- (void)setRemoteObjectInterface:(id)interface;
- (id)exportedInterface;
- (void)setExportedInterface:(id)interface;
- (id)exportedObject;
- (void)setExportedObject:(id)object;
- (id)_connectionForPromise:(id)promise;
- (void)_invalidatePromise:(id)promise;
- (void)_finishPromise:(id)promise withConnection:(id)connection error:(id)error;
- (id /* block */)_nts_wrappedInterruptionHandler;
- (void)_invokeInterruptionHandlerForPromise:(id)promise;
- (void)_queue_invokeInvalidationHandler;
- (id /* block */)interruptionHandler;
- (void)setInterruptionHandler:(id /* block */)handler;
- (id /* block */)invalidationHandler;
- (void)setInvalidationHandler:(id /* block */)handler;
- (void)resume;
- (void)suspend;
- (void)invalidate;
- (id)_connection;
- (int)auditSessionIdentifier;
- (int)processIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (unsigned int)effectiveGroupIdentifier;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)handler;
- (void)_sendInvocation:(id)invocation remoteInterface:(id)interface remoteProxy:(id)proxy errorHandler:(id /* block */)handler;
@end

#endif /* MSXPCConnection_h */

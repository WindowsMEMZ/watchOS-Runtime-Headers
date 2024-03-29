//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLAssetsdServiceProxyFactory_h
#define PLAssetsdServiceProxyFactory_h
@import Foundation;

#include "PLXPCAsyncProxyCreating-Protocol.h"
#include "PLXPCProxyCreating-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface PLAssetsdServiceProxyFactory : NSObject<PLXPCProxyCreating, PLXPCAsyncProxyCreating> {
  /* instance variables */
  SEL _proxyGetterSelector;
  NSObject<PLXPCProxyCreating> *_serviceProxy;
  NSObject<PLXPCProxyCreating> *_proxyCreating;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithQueue:(id)queue proxyCreating:(id)creating proxyGetter:(SEL)getter;
- (id)_inq_createServiceProxyWithErrorHandler:(id /* block */)handler;
- (id)_inq_createServiceProxyWithCallStackSymbols:(id)symbols errorHandler:(id /* block */)handler;
- (void)_logReplyError:(id)error withCallStackSymbols:(id)symbols;
- (id)serviceProxyWithErrorHandler:(id /* block */)handler;
- (void)remoteObjectProxyWithErrorHandler:(id /* block */)handler handler:(id /* block */)handler;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)handler;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)handler;
- (id)_unboostingRemoteObjectProxy;
- (void)addBarrierBlock:(id /* block */)block;
@end

#endif /* PLAssetsdServiceProxyFactory_h */

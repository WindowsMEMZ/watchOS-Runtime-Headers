//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIXPCNamespaceManagementServiceListener_h
#define TRIXPCNamespaceManagementServiceListener_h
@import Foundation;

#include "NSXPCListenerDelegate-Protocol.h"
#include "TRIServerContext.h"
#include "TRITaskQueuing-Protocol.h"
#include "TRIXPCServerContextPromise.h"

@class NSString, NSXPCInterface;

@interface TRIXPCNamespaceManagementServiceListener : NSObject<NSXPCListenerDelegate> {
  /* instance variables */
  NSXPCInterface *_interface;
  TRIServerContext *_serverContext;
  NSObject<TRITaskQueuing> *_taskQueue;
  TRIXPCServerContextPromise *_promise;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithServerContextPromise:(id)promise;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
@end

#endif /* TRIXPCNamespaceManagementServiceListener_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 887.3.0.0.0
//
#ifndef BBDataProviderConnection_h
#define BBDataProviderConnection_h
@import Foundation;

#include "BBDataProviderConnectionResolver.h"
#include "BBDataProviderConnectionServerProxy-Protocol.h"
#include "NSXPCListenerDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface BBDataProviderConnection : NSObject<NSXPCListenerDelegate> {
  /* instance variables */
  BBDataProviderConnectionResolver *_connectionResolver;
  NSObject<OS_dispatch_queue> *_clientCalloutQueue;
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<BBDataProviderConnectionServerProxy> *_serverProxy;
  NSObject<OS_dispatch_queue> *_connectionQueue;
  BOOL _connected;
  NSMutableDictionary *_dataProvidersBySectionID;
  NSMutableDictionary *_parentFactoriesBySectionID;
}

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *bundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)initWithServiceName:(id)name onQueue:(id)queue;
- (void)dealloc;
- (void)setServerProxy:(id)proxy;
- (void)_queue_setServerProxy:(id)proxy;
- (void)addDataProvider:(id)provider withCompletion:(id /* block */)completion;
- (id)addDataProvider:(id)provider;
- (id)addDataProvider:(id)provider withCompletionHandler:(id /* block */)handler;
- (id)_addDataProvider:(id)provider withCompletionHandler:(id /* block */)handler;
- (void)addParentSectionInfo:(id)info displayName:(id)name icon:(id)icon;
- (void)addParentSectionInfo:(id)info displayName:(id)name icon:(id)icon unversalSectionID:(id)id;
- (void)addParentSectionInfo:(id)info displayName:(id)name icon:(id)icon universalSectionID:(id)id;
- (void)removeDataProviderWithSectionID:(id)id;
- (void)_invalidate;
- (void)invalidate;
- (void)ping:(id /* block */)ping;
@end

#endif /* BBDataProviderConnection_h */

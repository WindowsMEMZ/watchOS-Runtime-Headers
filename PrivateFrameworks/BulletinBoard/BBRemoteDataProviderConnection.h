//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 887.3.0.0.0
//
#ifndef BBRemoteDataProviderConnection_h
#define BBRemoteDataProviderConnection_h
@import Foundation;

#include "BBDataProviderConnectionServerProxy-Protocol.h"
#include "BBDataProviderStore-Protocol.h"
#include "BBRemoteDataProviderDelegate-Protocol.h"
#include "BBRemoteDataProviderStoreDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface BBRemoteDataProviderConnection : NSObject<BBRemoteDataProviderDelegate, BBDataProviderConnectionServerProxy, BBDataProviderStore> {
  /* instance variables */
  BOOL _connected;
  NSObject<BBRemoteDataProviderStoreDelegate> *_delegate;
  NSObject<OS_dispatch_queue> *_queue;
  NSMutableDictionary *_dataProvidersBySectionID;
  NSMutableDictionary *_dataProvidersByUniversalSectionID;
  BOOL _clientReady;
}

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithServiceName:(id)name bundleID:(id)id delegate:(id)delegate;
- (id)debugDescriptionWithChildren:(unsigned long long)children;
- (void)setConnected:(BOOL)connected completion:(id /* block */)completion;
- (void)_queue_removeDataProvider:(id)provider;
- (void)addDataProviderWithSectionID:(id)id clientProxy:(id)proxy identity:(id)identity completion:(id /* block */)completion;
- (void)remoteDataProviderNeedsToWakeClient:(id)client;
- (void)removeDataProviderWithSectionID:(id)id;
- (void)addParentSectionFactory:(id)factory;
- (void)clientIsReady:(id /* block */)ready;
- (void)loadAllDataProviders;
- (id)dataProviderForSectionID:(id)id;
- (id)dataProvidersForUniversalSectionID:(id)id;
- (void)removeDataProvider:(id)provider;
- (void)performBlockOnDataProviders:(id /* block */)providers;
@end

#endif /* BBRemoteDataProviderConnection_h */

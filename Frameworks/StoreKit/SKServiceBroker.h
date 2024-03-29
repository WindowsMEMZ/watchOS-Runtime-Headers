//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 813.2.8.0.0
//
#ifndef SKServiceBroker_h
#define SKServiceBroker_h
@import Foundation;

@class NSLock, NSXPCConnection;

@interface SKServiceBroker : NSObject {
  /* instance variables */
  NSLock *_serviceConnectionLock;
  NSXPCConnection *_serviceConnection;
  NSXPCConnection *_sim2HostConnection;
}

/* class methods */
+ (id)defaultBroker;
+ (id)_storeKitServiceInterface;
+ (id)_storeKitClientInterface;
+ (id)_serviceConnectionWithName:(id)name;

/* instance methods */
- (id)init;
- (id)inAppBindingServiceWithErrorHandler:(id /* block */)handler;
- (id)manageSubscriptionsServiceWithErrorHandler:(id /* block */)handler;
- (id)overrideServiceWithErrorHandler:(id /* block */)handler;
- (id)overrideSynchronousServiceWithErrorHandler:(id /* block */)handler;
- (id)policyServiceWithErrorHandler:(id /* block */)handler;
- (id)productServiceWithErrorHandler:(id /* block */)handler;
- (id)productLookupServiceWithErrorHandler:(id /* block */)handler;
- (id)purchaseIntentServiceWithErrorHandler:(id /* block */)handler;
- (id)storeKitServiceWithErrorHandler:(id /* block */)handler;
- (id)storeKitSynchronousServiceWithErrorHandler:(id /* block */)handler;
- (id)_serviceConnection;
- (void)_serviceConnectionInvalidated;
- (id)storeKitSimulatorToHostServiceWithErrorHandler:(id /* block */)handler;
- (id)_sim2HostConnection;
- (void)_sim2HostConnectionInvalidated;
@end

#endif /* SKServiceBroker_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDRapportMessaging_h
#define HMDRapportMessaging_h
@import Foundation;

#include "HMFObject.h"
#include "HMDRapportMessagingClientFactory-Protocol.h"
#include "HMDRapportMessagingReachabilityDelegate-Protocol.h"
#include "HMFLogging-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, RPCompanionLinkClient;
@protocol OS_dispatch_queue;

@interface HMDRapportMessaging : HMFObject<HMFLogging> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSObject<OS_dispatch_queue> *_workQueue;
  NSObject<HMDRapportMessagingClientFactory> *_clientFactory;
  RPCompanionLinkClient *_discoveryClient;
  id /* block */ _requestHandler;
  NSMutableArray *_requestQueue;
  NSMutableDictionary *_deviceClients;
}

@property (weak, nonatomic) NSObject<HMDRapportMessagingReachabilityDelegate> *reachabilityDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;
+ (id)logCategory;

/* instance methods */
- (id)initWithClientFactory:(id)factory;
- (void)configureDiscoveryClientWithCompletion:(id /* block */)completion;
- (void)registerRequestHandler:(id /* block */)handler;
- (void)sendRequest:(id)request destinationID:(id)id options:(id)options responseHandler:(id /* block */)handler;
- (void)_configureDiscoveryClientWithCompletion:(id /* block */)completion;
- (void)_handleRequest:(id)request options:(id)options responseHandler:(id /* block */)handler;
- (void)_queueRequest:(id)request options:(id)options responseHandler:(id /* block */)handler;
- (void)_completeQueuedRequests;
- (id)_clientForIDSIdentifier:(id)idsidentifier withDevice:(id)device;
- (id)_createRapportClientForDevice:(id)device;
- (void)_invalidateDestinationDeviceWithIDSIdentifier:(id)idsidentifier;
- (void)_updateDevice:(id)device reachable:(BOOL)reachable;
@end

#endif /* HMDRapportMessaging_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDDelegatingMessageRouter_h
#define HMDDelegatingMessageRouter_h
@import Foundation;

#include "HMDDelegatingMessageRouterDataSource-Protocol.h"
#include "HMDMessageRouter-Protocol.h"
#include "HMFLogging-Protocol.h"

@class HMFMessageDispatcher, NSArray, NSString;

@interface HMDDelegatingMessageRouter : NSObject<HMFLogging, HMDMessageRouter>

@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) NSArray *routers;
@property (weak) NSObject<HMDDelegatingMessageRouterDataSource> *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithMessageDispatcher:(id)dispatcher routers:(id)routers;
- (void)routeMessage:(id)message localHandler:(id /* block */)handler;
- (void)routeMessage:(id)message allowRemoteRelayFromPrimary:(BOOL)primary localHandler:(id /* block */)handler;
@end

#endif /* HMDDelegatingMessageRouter_h */

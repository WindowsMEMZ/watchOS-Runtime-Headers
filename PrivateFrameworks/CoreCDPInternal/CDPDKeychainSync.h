//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 359.4.1.2.1
//
#ifndef CDPDKeychainSync_h
#define CDPDKeychainSync_h
@import Foundation;

#include "CDPDKeychainSyncPolicyProvider-Protocol.h"
#include "CDPInitUnavailable-Protocol.h"

@protocol CDPDCircleProxy;

@interface CDPDKeychainSync : NSObject<CDPInitUnavailable>

@property (readonly, nonatomic) NSObject<CDPDCircleProxy> *circleProxy;
@property (readonly, nonatomic) NSObject<CDPDCircleProxy> *sosCircleProxy;
@property (readonly, nonatomic) NSObject<CDPDKeychainSyncPolicyProvider> *syncPolicy;
@property (readonly, nonatomic) BOOL isUserVisibleKeychainSyncEnabled;
@property (readonly, nonatomic) BOOL isUserVisibleKeychainSyncAvailable;

/* class methods */
+ (id)keyChainSync;
+ (id)keyChainSyncWithProxy:(id)proxy sosCircleProxy:(id)proxy context:(id)context;
+ (id)_defaultUserVisibleViewSet;

/* instance methods */
- (id)initWithContext:(id)context;
- (id)initWithCircleProxy:(id)proxy sosCircleProxy:(id)proxy context:(id)context;
- (id)initWithCircleProxy:(id)proxy sosCircleProxy:(id)proxy policyProvider:(id)provider;
- (BOOL)_keychainSyncAvailableViaSOS;
- (BOOL)_keychainSyncAvailableViaOctacon;
- (BOOL)_isThisDeviceInCircle;
- (void)updateKeychainSyncStateIfNeededWithCompletion:(id /* block */)completion;
- (void)setUserVisibleKeychainSyncEnabled:(BOOL)enabled withCompletion:(id /* block */)completion;
- (void)_setUserVisibleKeychainSyncEnabled:(BOOL)enabled withCompletion:(id /* block */)completion;
- (void)_processAuthFailure:(id)failure completion:(id /* block */)completion;
- (void)_preflightCircleStatusWithCompletion:(id /* block */)completion;
- (BOOL)_setKeychainSyncState:(BOOL)state error:(id *)error;
- (void)removeNonViewAwarePeersFromCircleWithCompletion:(id /* block */)completion;
@end

#endif /* CDPDKeychainSync_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 320.100.1.0.0
//
#ifndef TPSRegistrationTelephonyController_h
#define TPSRegistrationTelephonyController_h
@import Foundation;

#include "TPSTelephonyController.h"
#include "CoreTelephonyClientRegistrationDelegate-Protocol.h"

@class CTNetworkSelectionInfo, CTXPCServiceSubscriptionContext, NSArray, NSString;

@interface TPSRegistrationTelephonyController : TPSTelephonyController<CoreTelephonyClientRegistrationDelegate>

@property (copy, nonatomic) NSArray *networks;
@property (retain, nonatomic) CTNetworkSelectionInfo *networkSelectionInfo;
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithSubscriptionContext:(id)context;
- (void)networksWithCompletionHandler:(id /* block */)handler;
- (void)automaticallySelectNetwork;
- (void)automaticallySelectNetworkWithCompletion:(id /* block */)completion;
- (void)selectNetwork:(id)network;
- (void)selectNetwork:(id)network completion:(id /* block */)completion;
- (id)copyNetworkSelectionInfo;
- (void)fetchNetworkList;
- (void)fetchNetworkListWithCompletion:(id /* block */)completion;
- (void)performDelegateSelector:(SEL)selector;
- (void)networkListAvailable:(id)available list:(id)list;
- (void)networkSelected:(id)selected success:(BOOL)success mode:(id)mode;
@end

#endif /* TPSRegistrationTelephonyController_h */

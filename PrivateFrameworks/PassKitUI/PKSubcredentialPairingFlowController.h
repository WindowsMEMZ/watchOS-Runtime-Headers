//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSubcredentialPairingFlowController_h
#define PKSubcredentialPairingFlowController_h
@import Foundation;

#include "PKPaymentSetupViewControllerDelegate-Protocol.h"
#include "PKSubcredentialPairingFlowControllerProtocol-Protocol.h"
#include "PKSubcredentialProvisioningFlowControllerDelegate-Protocol.h"

@class NSString;

@interface PKSubcredentialPairingFlowController : NSObject<PKSubcredentialPairingFlowControllerProtocol>

@property (weak, nonatomic) NSObject<PKSubcredentialProvisioningFlowControllerDelegate> *delegate;
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)contextFromPaymentCredential:(id)credential provisioningController:(id)controller;
+ (id)sharingRequestForContext:(id)context withCredential:(id)credential;
+ (id)credentialToShareForContext:(id)context;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)nextViewControllerFromProvisioningOperation:(id)operation withCompletion:(id /* block */)completion;
- (void)nextViewControllerFromHeroViewController:(id)controller completion:(id /* block */)completion;
- (void)provisioningFinishedWithOperation:(id)operation;
- (void)provisioningWasCanceledWithOperation:(id)operation;
- (void)_handOffToFlowManagerFromOperation:(id)operation completion:(id /* block */)completion;
- (id)localDeviceProvisioningViewModelForOperation:(id)operation;
- (id)remoteDeviceProvisioningViewModelForOperation:(id)operation;
- (void)canProvisionOnRemoteDeviceWithContext:(id)context sharingRequest:(id)request completion:(id /* block */)completion;
- (void)prewarmPairingWithContext:(id)context completion:(id /* block */)completion;
- (id)startingViewControllerForContext:(id)context;
- (id)alertForOperation:(id)operation withError:(id)error retryHandler:(id /* block */)handler cancelationHandler:(id /* block */)handler;
- (id)localizedIssuerNameForProvisioningOperation:(id)operation;
@end

#endif /* PKSubcredentialPairingFlowController_h */

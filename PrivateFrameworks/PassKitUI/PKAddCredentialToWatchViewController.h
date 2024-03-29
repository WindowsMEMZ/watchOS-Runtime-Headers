//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAddCredentialToWatchViewController_h
#define PKAddCredentialToWatchViewController_h
@import Foundation;

#include "PKExplanationViewController.h"
#include "PKExplanationViewControllerDelegate-Protocol.h"
#include "PKHeroCardWatchExplainationHeaderView.h"
#include "PKPaymentAuthorizationCoordinatorDelegate-Protocol.h"
#include "PKPaymentAuthorizationCoordinatorPrivateDelegate-Protocol.h"
#include "PKSubcredentialPairingFlowControllerContext.h"
#include "PKSubcredentialPairingFlowControllerProtocol-Protocol.h"
#include "PKSubcredentialProvisioningViewModelProtocol-Protocol.h"
#include "PKSubcredentialRemoteDevicePairingFlowControllerOperation-Protocol.h"
#include "PKViewControllerPreflightable-Protocol.h"

@class NSString, PKAppletSubcredentialSharingSession, PKPaymentAuthorizationCoordinator;

@interface PKAddCredentialToWatchViewController : PKExplanationViewController<PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKExplanationViewControllerDelegate, PKSubcredentialRemoteDevicePairingFlowControllerOperation, PKViewControllerPreflightable> {
  /* instance variables */
  PKAppletSubcredentialSharingSession *_sharingSession;
  NSObject<PKSubcredentialProvisioningViewModelProtocol> *_provisioningViewModel;
  BOOL _isAdvancing;
  PKHeroCardWatchExplainationHeaderView *_heroCardView;
  PKPaymentAuthorizationCoordinator *_authorizationCoordinator;
  id /* block */ _authorizationRequestCompletion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PKSubcredentialPairingFlowControllerContext *provisioningContext;
@property (readonly, nonatomic) NSObject<PKSubcredentialPairingFlowControllerProtocol> *flowController;
@property (readonly, nonatomic) unsigned long long operation;
@property (readonly, nonatomic) BOOL suppressFieldDetect;

/* instance methods */
- (id)initWithFlowController:(id)controller context:(id)context;
- (void)dealloc;
- (id)sharingSessionWithDelegate:(id)delegate;
- (void)loadView;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)preflightWithCompletion:(id /* block */)completion;
- (void)invalidateUserAuth;
- (void)startProvisioning;
- (void)presentPaymentSheetForSharingRequest:(id)request;
- (void)resetState;
- (void)advanceToNextState;
- (void)showSuccessCheckmark:(BOOL)checkmark;
- (void)showActivityIndicator:(BOOL)indicator;
- (void)explanationViewDidSelectContinue:(id)continue;
- (void)explanationViewDidSelectSetupLater:(id)later;
- (void)explanationViewControllerDidSelectCancel:(id)cancel;
- (void)subcredentialProvisioningConfiguration:(id)configuration requestUserAuthWithCompletion:(id /* block */)completion;
- (void)subcredentialProvisioningController:(id)controller didFinishWithError:(id)error inState:(long long)state;
- (void)subcredentialProvisioningController:(id)controller didFinishWithPass:(id)pass;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)finish;
- (void)paymentAuthorizationCoordinator:(id)coordinator didAuthorizePayment:(id)payment handler:(id /* block */)handler;
- (id)presentationSceneIdentifierForPaymentAuthorizationCoordinator:(id)coordinator;
- (void)paymentAuthorizationCoordinator:(id)coordinator didAuthorizeContextWithHandler:(id /* block */)handler;
- (void)paymentAuthorizationCoordinator:(id)coordinator didEncounterAuthorizationEvent:(unsigned long long)event;
@end

#endif /* PKAddCredentialToWatchViewController_h */

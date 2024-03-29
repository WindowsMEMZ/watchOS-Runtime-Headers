//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentAuthorizationFlowCoordinator_h
#define PKPaymentAuthorizationFlowCoordinator_h
@import Foundation;

#include "PKPaymentAuthorizationContext.h"
#include "PKPaymentAuthorizationDefaultService.h"
#include "PKPaymentAuthorizationHostProtocol-Protocol.h"
#include "PKPaymentAuthorizationInterface-Protocol.h"
#include "PKPaymentAuthorizationOnboardingInterfaceDelegate-Protocol.h"
#include "PKPaymentAuthorizationPresenter-Protocol.h"
#include "PKPaymentAuthorizationProvisioningInterfaceDelegate-Protocol.h"
#include "PKPaymentAuthorizationServiceProxy.h"
#include "PKPeerPaymentIdentityVerificationInterfaceDelegate-Protocol.h"

@class NSString, NSXPCConnection, PKAssertion, PKAsyncTaskProgressTracker, PKInAppPaymentService, PKPaymentRequest, PKPeerPaymentAccount;
@protocol PKPaymentAuthorizationFlowCoordinatorDelegate, PKPaymentAuthorizationScenePresenter;

@interface PKPaymentAuthorizationFlowCoordinator : NSObject<PKPaymentAuthorizationHostProtocol, PKPaymentAuthorizationOnboardingInterfaceDelegate, PKPaymentAuthorizationProvisioningInterfaceDelegate, PKPeerPaymentIdentityVerificationInterfaceDelegate, PKPaymentAuthorizationPresenter> {
  /* instance variables */
  BOOL _didSendAuthorizationDidPresent;
  BOOL _didSendAuthorizationDidFinish;
  PKAssertion *_notificationSuppressionAssertion;
  NSObject<PKPaymentAuthorizationInterface> *_paymentInterface;
  BOOL _invalidated;
  unsigned long long _paymentSetupState;
  BOOL _peerPaymentIdentityVerificationCompleted;
  BOOL _didBeginPayLaterAnalyticsReporter;
}

@property (readonly, nonatomic) PKPaymentAuthorizationContext *context;
@property (readonly, nonatomic) PKPaymentRequest *paymentRequest;
@property (weak, nonatomic) NSObject<PKPaymentAuthorizationFlowCoordinatorDelegate> *delegate;
@property (weak, nonatomic) NSObject<PKPaymentAuthorizationScenePresenter> *scenePresenter;
@property (retain, nonatomic) NSXPCConnection *hostConnection;
@property (readonly, nonatomic) PKPaymentAuthorizationServiceProxy *exportedObject;
@property (readonly, nonatomic) NSObject<PKPaymentAuthorizationHostProtocol> *remoteObjectProxy;
@property (retain, nonatomic) PKPaymentAuthorizationDefaultService *defaultService;
@property (retain, nonatomic) PKInAppPaymentService *inAppPaymentService;
@property (retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;
@property (retain, nonatomic) PKAsyncTaskProgressTracker *dismissalTaskProgressTracker;
@property (nonatomic) BOOL dismissAfterPaymentSetup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithContext:(id)context scenePresenter:(id)presenter delegate:(id)delegate;
- (void)dealloc;
- (void)willAppear;
- (void)willDisappear;
- (void)start;
- (void)invalidate;
- (void)notifyOnDismissal:(id /* block */)dismissal;
- (id)createConnectionToEndpoint:(id)endpoint;
- (void)openConnection:(id)connection;
- (void)_startAnalyticsReporting;
- (void)_endAnalyticsReporting;
- (void)_reportConnectionEstablishedAnalyticsForConnection:(id)connection;
- (void)_reportPaymentPassMissingAnalytics;
- (void)_reportUnsupportedPaymentPassAnalytics;
- (void)_reportVerificationRequiredAnalytics;
- (void)_reportAddCardAlertPresentedAnalytics;
- (void)_startSuppressingNotificationsIfNecessary;
- (void)_stopSuppressingNotifications;
- (void)_presentNextStepDismissingCurrentInterface:(BOOL)interface withDefaultPassID:(id)id;
- (void)_canPresentPaymentRequest:(id)request completion:(id /* block */)completion;
- (void)_handlePaymentRequestPresentationResultType:(long long)type relevantUniqueID:(id)id;
- (id)_createPaymentInterfaceConfigurationWithRelevantPassID:(id)id;
- (void)_presentPaymentInterface:(id)interface completion:(id /* block */)completion;
- (void)_openApplication:(id)application;
- (void)_presentOnboardingForContext:(long long)context;
- (void)paymentAuthorizationOnboardingDidFinishWithError:(id)error;
- (void)_presentPeerPaymentIdentityVerification;
- (void)peerPaymentIdentityVerificationDidFinishWithAccount:(id)account;
- (BOOL)_peerPaymentIdentityVerificationRequired;
- (void)_presentPaymentAuthorizationWithRelevantUniqueID:(id)id;
- (void)_presentActivatingPassAlertWithRelevantUniqueID:(id)id;
- (void)_presentVerifyPassAlertWithRelevantUniqueID:(id)id;
- (void)_presentLostModeAlertWithRelevantUniqueID:(id)id;
- (void)_presentPeerPaymentIdentityVerificationAlert;
- (void)_presentAddCardAlert;
- (void)_presentPassNotSupportedAlertWithRelevantUniqueID:(id)id;
- (void)_presentInvalidAlert;
- (void)_presentAlertController:(id)controller;
- (void)_presentAlertWithTitle:(id)title message:(id)message cancelTitle:(id)title actionTitle:(id)title actionHandler:(id /* block */)handler finalError:(id)error;
- (void)_presentAlertWithTitle:(id)title message:(id)message actionTitle:(id)title actionHandler:(id /* block */)handler;
- (void)_presentAlertWithTitle:(id)title message:(id)message cancelTitle:(id)title actionTitle:(id)title actionHandler:(id /* block */)handler;
- (void)_presentEnrollAccessibilityIntentAlert;
- (void)_presentWalletUninstalledAlert;
- (void)authorizationWillStart;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidFinishWithError:(id)error;
- (void)authorizationDidAuthorizeContext;
- (void)authorizationDidAuthorizePayment:(id)payment;
- (void)authorizationDidAuthorizePurchase:(id)purchase;
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)quote;
- (void)authorizationDidAuthorizeApplePayTrustSignature:(id)signature;
- (void)authorizationDidUpdateAccountServicePaymentMethod:(id)method;
- (void)authorizationDidSelectShippingMethod:(id)method;
- (void)authorizationDidSelectShippingAddress:(id)address;
- (void)authorizationDidSelectPaymentMethod:(id)method;
- (void)authorizationDidChangeCouponCode:(id)code;
- (void)didEncounterAuthorizationEvent:(unsigned long long)event;
- (void)authorizationDidPresent;
- (BOOL)supportsSecondaryViewController;
- (void)presentSecondaryViewController:(id)controller animated:(BOOL)animated completion:(id /* block */)completion;
- (void)dismissSecondaryViewControllerAnimated:(BOOL)animated completion:(id /* block */)completion;
- (void)presentPaymentProvisioningDismissingAfterwards:(BOOL)afterwards;
- (void)paymentAuthorizationProvisioningDidFinishWithPass:(id)pass;
- (void)dismissWithReason:(unsigned long long)reason error:(id)error completion:(id /* block */)completion;
- (BOOL)_shouldBlockHardwareCancels;
- (BOOL)handleHomeButtonPressed;
- (BOOL)_canPresentPaymenntSheetWithEmptyPass;
@end

#endif /* PKPaymentAuthorizationFlowCoordinator_h */

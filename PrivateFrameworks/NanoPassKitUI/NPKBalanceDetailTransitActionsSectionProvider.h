//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKBalanceDetailTransitActionsSectionProvider_h
#define NPKBalanceDetailTransitActionsSectionProvider_h
@import Foundation;

#include "NPKBalanceDetailSectionProvider.h"
#include "MFNanoMessageComposeViewControllerDelegate-Protocol.h"
#include "NPKAutoTopUpDetailViewControllerDelegate-Protocol.h"
#include "NPKListCollectionViewController.h"
#include "NPKPaymentPassActionController.h"
#include "NPKPaymentPassActionControllerDataSource-Protocol.h"
#include "NPKPaymentPassActionControllerDelegate-Protocol.h"

@class NSString, PKPaymentPass;
@protocol OS_dispatch_source;

@interface NPKBalanceDetailTransitActionsSectionProvider : NPKBalanceDetailSectionProvider<NPKPaymentPassActionControllerDelegate, MFNanoMessageComposeViewControllerDelegate, NPKPaymentPassActionControllerDataSource, NPKAutoTopUpDetailViewControllerDelegate>

@property (retain, nonatomic) NPKPaymentPassActionController *paymentPassActionController;
@property (weak, nonatomic) NPKListCollectionViewController *listViewController;
@property (nonatomic) BOOL autoTopUpModificationInProgress;
@property (nonatomic) long long autoTopUpState;
@property (retain, nonatomic) NSString *autoTopUpAmount;
@property (retain, nonatomic) NSString *autoTopUpThreshold;
@property (retain, nonatomic) PKPaymentPass *autoTopUpPaymentMethod;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *autoTopUpModificationTimeoutTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_errorAlertControllerWithLocalizedFailureReason:(id)reason forPassAction:(id)action alertActionHandler:(id /* block */)handler;
+ (id)_errorAlertControllerWithTitle:(id)title message:(id)message alertActionHandler:(id /* block */)handler;

/* instance methods */
- (id)sectionIdentifiers;
- (id)itemsForSectionWithIdentifier:(id)identifier;
- (void)paymentPassActionController:(id)controller requestPresentViewController:(id)controller;
- (void)paymentPassActionController:(id)controller didFinishWithError:(id)error;
- (void)paymentPassActionController:(id)controller didAuthorizeTopUpAmount:(id)amount forBalanceField:(id)field passWithUniqueID:(id)id;
- (void)paymentPassActionController:(id)controller didPurchaseSelectedItem:(id)item forCommutePlanField:(id)field passWithUniqueID:(id)id;
- (void)paymentPassActionController:(id)controller didCancelAutoTopUpWithSuccess:(BOOL)success;
- (void)paymentPassActionController:(id)controller didSetUpAutoTopUpWithAction:(id)action;
- (void)autoTopUpDetailViewController:(id)controller receivedSetupRequestForAction:(id)action;
- (BOOL)_receivedModifiedATUSetup;
- (void)messageComposeViewController:(id)controller didFinishWithResult:(long long)result;
- (id)passForPaymentPassActionController:(id)controller;
- (id)organizationNameForPaymentPassActionController:(id)controller;
- (id)transitPropertiesForPaymentPassActionController:(id)controller;
- (id)deviceIdentifierForPaymentPassActionController:(id)controller;
- (id)passTypeIdentifierForPaymentPassActionController:(id)controller;
- (id)passSerialNumberForPaymentPassActionController:(id)controller;
- (void)_handleActionWithListViewController:(id)controller action:(id)action;
- (void)_handleRequestRemoteAction:(id)action withListViewController:(id)controller;
- (BOOL)_canRequestRemoteActionBePerformed:(id)performed outError:(id *)error;
- (void)_showGenericErrorAlertForPaymentPassActionController:(id)controller error:(id)error;
- (void)_requestRemoteActionWithListViewController:(id)controller recipient:(id)recipient named:(id)named;
- (id)_makeMessageForField:(id)field;
- (id)_makeMessageComposeActionAlertForRecipient:(id)recipient named:(id)named errorHandler:(id /* block */)handler;
- (id)_makeRequestRemoteActionErrorAlertForError:(id)error;
- (void)_fetchGuardianWithCompletion:(id /* block */)completion;
- (id)_overriddenRemoteRecipientAppleID;
- (BOOL)_deviceSupportsRemoteActionRequests;
- (BOOL)_actionSupportsRemoteDeviceRequests;
- (BOOL)_actionIsTopUpRequest;
- (BOOL)_actionIsCommutePlanRenewal;
- (BOOL)_actionRequiresAppletData;
- (id)_imageForPass:(id)pass withSizeToCover:(struct CGSize { double x0; double x1; })cover;
- (BOOL)_shouldShowLocalDeviceAction:(id)action;
- (BOOL)_isAutoTopUpEnabled;
- (BOOL)_hasAutoTopUpMerchantToken;
- (id /* block */)_actionForAutoTopUpDetailItemWithAction:(id)action;
- (void)_autoTopUpModificationTimeoutTimerFired;
- (void)_startAutoTopUpModificationTimer;
- (void)_invalidateAutoTopUpModificationTimer;
@end

#endif /* NPKBalanceDetailTransitActionsSectionProvider_h */

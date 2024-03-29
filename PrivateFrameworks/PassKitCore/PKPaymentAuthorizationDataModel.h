//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentAuthorizationDataModel_h
#define PKPaymentAuthorizationDataModel_h
@import Foundation;

#include "PKAccountEnhancedMerchant.h"
#include "PKBankAccountInformation.h"
#include "PKContactFormatValidator.h"
#include "PKCurrencyAmount.h"
#include "PKPassLibrary.h"
#include "PKPayLaterFinancingController.h"
#include "PKPayLaterFinancingOption.h"
#include "PKPayLaterProductAssessmentCollection.h"
#include "PKPayment.h"
#include "PKPaymentApplication.h"
#include "PKPaymentInstructions.h"
#include "PKPaymentOptionsDefaults.h"
#include "PKPaymentOptionsRecents.h"
#include "PKPaymentOrderDetails.h"
#include "PKPaymentPass.h"
#include "PKPaymentRequest.h"
#include "PKPaymentSummaryItem.h"
#include "PKPaymentValidating-Protocol.h"
#include "PKPaymentWebService.h"
#include "PKPeerPaymentAccount.h"
#include "PKPeerPaymentQuote.h"
#include "PKPeerPaymentService.h"
#include "PKRemoteDevice.h"
#include "PKRemotePaymentInstrument.h"
#include "PKShippingMethod.h"

@class CNContact, NSArray, NSDecimalNumber, NSMapTable, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface PKPaymentAuthorizationDataModel : NSObject<PKPaymentValidating> {
  /* instance variables */
  NSMutableDictionary *_typeToItemMap;
  NSMutableDictionary *_billingAddressForFundingSource;
  unsigned long long _holdPendingUpdatesCount;
  BOOL _ignoreProximity;
  NSMapTable *_instrumentToDeviceMap;
  NSMutableDictionary *_remoteDeviceToAcceptedInstruments;
  NSMutableDictionary *_statusForPass;
  NSMutableDictionary *_acceptedApplications;
  PKAccountEnhancedMerchant *_appleCardEnhancedMerchant;
  NSString *_paymentApplicationIdentifierForErrors;
  NSArray *_clientErrors;
}

@property (retain, nonatomic) CNContact *cachedRecentAddress;
@property (retain, nonatomic) CNContact *originalShippingAddress;
@property (readonly, nonatomic) NSString *defaultPaymentPassUniqueIdentifier;
@property (readonly, nonatomic) BOOL isInlineSummaryItemsEligible;
@property (readonly, nonatomic) long long mode;
@property (nonatomic) long long fundingMode;
@property (retain, nonatomic) PKPaymentRequest *paymentRequest;
@property (retain, nonatomic) NSArray *paymentContentItems;
@property (retain, nonatomic) NSString *hostAppLocalizedName;
@property (retain, nonatomic) NSString *hostApplicationIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *relevantPassUniqueID;
@property (retain, nonatomic) NSString *teamIdentifier;
@property (retain, nonatomic) NSString *billingAgreement;
@property (retain, nonatomic) NSString *couponCode;
@property (nonatomic) unsigned long long numberOfOutstandingCouponCodeUpdates;
@property (retain, nonatomic) CNContact *shippingEmail;
@property (nonatomic) BOOL isHideMyEmailLoading;
@property (retain, nonatomic) CNContact *shippingPhone;
@property (retain, nonatomic) CNContact *shippingName;
@property (retain, nonatomic) CNContact *shippingAddress;
@property (retain, nonatomic) PKShippingMethod *shippingMethod;
@property (retain, nonatomic) NSString *shippingType;
@property (nonatomic) BOOL shippingEditable;
@property (retain, nonatomic) NSString *shippingEditableMessage;
@property (retain, nonatomic) CNContact *billingAddress;
@property (retain, nonatomic) NSArray *paymentSummaryItems;
@property (retain, nonatomic) NSArray *paymentErrors;
@property (retain, nonatomic) PKPayment *payment;
@property (readonly, nonatomic) NSArray *paymentContactFormatErrors;
@property (readonly, nonatomic) NSArray *allErrors;
@property (retain, nonatomic) PKContactFormatValidator *contactFormatValidator;
@property (retain, nonatomic) PKPaymentOptionsDefaults *defaults;
@property (retain, nonatomic) PKPaymentOptionsRecents *recents;
@property (retain, nonatomic) PKPassLibrary *library;
@property (retain, nonatomic) PKPaymentWebService *paymentWebService;
@property (retain, nonatomic) PKPeerPaymentService *peerPaymentService;
@property (retain, nonatomic) PKPaymentPass *peerPaymentPass;
@property (readonly, nonatomic) PKPaymentPass *appleCardPass;
@property (retain, nonatomic) NSArray *pendingTransactions;
@property (retain, nonatomic) PKPaymentOrderDetails *pendingOrderDetails;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (readonly, nonatomic) NSString *merchantName;
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) NSDecimalNumber *transactionAmount;
@property (readonly, nonatomic) PKPaymentSummaryItem *totalSummaryItem;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) BOOL pinRequired;
@property (retain, nonatomic) PKRemoteDevice *remoteDevice;
@property (retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;
@property (retain, nonatomic) PKPeerPaymentQuote *peerPaymentQuote;
@property (nonatomic) BOOL supportsPreservePeerPaymentBalance;
@property (nonatomic) BOOL usePeerPaymentBalance;
@property (retain, nonatomic) PKBankAccountInformation *bankAccount;
@property (retain, nonatomic) PKCurrencyAmount *peerPaymentBalanceForAccountPayment;
@property (copy, nonatomic) NSString *installmentBindToken;
@property (copy, nonatomic) NSString *installmentGroupIdentifier;
@property (retain, nonatomic) NSDecimalNumber *installmentAuthorizationAmount;
@property (retain, nonatomic) PKPaymentApplication *paymentApplication;
@property (retain, nonatomic) PKPaymentPass *pass;
@property (readonly, nonatomic) NSArray *acceptedPasses;
@property (readonly, nonatomic) NSArray *unavailablePasses;
@property (nonatomic) BOOL canAddPasses;
@property (nonatomic) BOOL supportsEmptyPass;
@property (readonly, nonatomic) BOOL wantsInstructions;
@property (retain, nonatomic) PKPaymentInstructions *instructions;
@property (readonly, nonatomic) NSArray *remoteDevices;
@property (readonly, nonatomic) NSArray *allRemoteDevices;
@property (readonly, nonatomic) NSArray *allNearbyRemoteDevices;
@property (readonly, nonatomic) NSArray *allUnavailableRemoteDevices;
@property (retain, nonatomic) PKRemotePaymentInstrument *remotePaymentInstrument;
@property (retain, nonatomic) PKRemotePaymentInstrument *initialRemotePaymentInstrument;
@property (readonly, nonatomic) NSSet *allAcceptedRemotePaymentInstruments;
@property (readonly, nonatomic) NSSet *allUnavailableRemotePaymentInstruments;
@property (retain, nonatomic) PKPayLaterFinancingOption *selectedFinancingOption;
@property (retain, nonatomic) PKPayLaterFinancingOption *previouslySelectedFinancingOption;
@property (retain, nonatomic) PKPayLaterProductAssessmentCollection *assessmentCollection;
@property (retain, nonatomic) PKPayLaterFinancingController *financingController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithMode:(long long)mode;
- (void)setRecurringPaymentRequest:(id)request;
- (void)setAutomaticReloadPaymentRequest:(id)request;
- (void)setDeferredPaymentRequest:(id)request;
- (void)setMultiTokenContexts:(id)contexts;
- (void)setCouponCodeErrors:(id)errors;
- (void)setShippingEmailError:(id)error;
- (BOOL)shouldUpdateContactDataItem;
- (void)refreshBillingAddressErrors;
- (id)_billingAddressKey;
- (void)updateBillingErrors;
- (void)setShippingAddressErrors:(id)errors;
- (void)setPaymentDateForPaymentRequest:(id)request;
- (id)automaticallyPresentedPassFromAcceptedPasses:(id)passes;
- (void)beginUpdates;
- (void)endUpdates;
- (id)itemForType:(long long)type;
- (void)_setDataItem:(id)item;
- (void)_setPaymentContentDataItems:(id)items;
- (unsigned long long)_insertionIndexForItem:(id)item;
- (long long)_displayOrderForDataType:(long long)type;
- (void)_ensureItems;
- (void)refreshPaymentMethods;
- (void)refreshPaymentMethodsAndNotifyFinancingController:(BOOL)controller;
- (void)_updatePeerPaymentPromotionAvailability;
- (void)updatePeerPaymentPromotionForPeerPaymentQuote:(BOOL)quote;
- (BOOL)shouldShowPeerPaymentBalanceToggle;
- (id)enhancedMerchantInfoForPass:(id)pass;
- (void)setEnhancedMerchantInfo:(id)info forPass:(id)pass;
- (void)_didSetItemForClass:(Class)class;
- (void)_ensureItemForClass:(Class)class;
- (void)_removeDataItem:(id)item;
- (void)_ensurePaymentContentItems;
- (void)_ensurePlaceholderItems;
- (void)_notifyModelChanged;
- (id)_inAppPaymentPassesForPaymentRequest:(id)request;
- (id)_inAppPrivateLabelPaymentPasses;
- (id)_filterAndProcessPaymentApplicationsUsingConfiguration:(id)configuration withPrimaryPaymentApplication:(id)application passHasAssociatedPeerPaymentAccount:(BOOL)account;
- (id)_filterAndProcessPaymentPassesUsingConfiguration:(id)configuration;
- (void)_populatePeerPaymentBalanceIfNecessaryForPasses:(id)passes;
- (id)_formatAddressContactIfNecessary:(id)necessary;
- (id)paymentErrorsFromLegacyStatus:(long long)status;
- (BOOL)isValidWithError:(id *)error;
- (BOOL)isValidWithError:(id *)error errorStatus:(long long *)status;
- (void)setPaymentPassWithPassTypeIdentifier:(id)identifier serialNumber:(id)number;
- (void)setPass:(id)pass withSelectedPaymentApplication:(id)application;
- (void)setRemotePaymentInstrument:(id)instrument withSelectedPaymentApplication:(id)application;
- (void)updateRemoteDevices:(id)devices;
- (void)updateRemoteDevices:(id)devices ignoreProximity:(BOOL)proximity;
- (id)paymentRequestSupportedRemoteQuery;
- (id)paymentRequestSupportedQuery;
- (long long)requestedMode;
- (id)acceptedPaymentApplicationsForPass:(id)pass;
- (id)unavailablePaymentApplicationsForPass:(id)pass;
- (id)defaultSelectedPaymentApplicationForPass:(id)pass;
- (id)defaultSelectedPaymentApplicationForRemoteInstrument:(id)instrument;
- (id)_defaultSelectedPaymentApplicationForPaymentApplications:(id)applications;
- (id)acceptedRemotePaymentInstrumentsForRemoteDevice:(id)device;
- (id)acceptedPaymentApplicationsForRemoteInstrument:(id)instrument;
- (id)unavailablePaymentApplicationsForRemoteInstrument:(id)instrument;
- (id)_simulatorPasses;
- (void)setStatus:(long long)status forItemWithType:(long long)type;
- (void)setStatus:(long long)status forItemWithType:(long long)type notify:(BOOL)notify;
- (void)_setStatus:(long long)status forPass:(id)pass;
- (long long)_statusForPass:(id)pass;
- (void)fallbackToBypassMode;
- (void)showPeerPaymentCardDataItem:(BOOL)item withCardDataItem:(BOOL)item;
- (BOOL)isShippingEditable;
@end

#endif /* PKPaymentAuthorizationDataModel_h */

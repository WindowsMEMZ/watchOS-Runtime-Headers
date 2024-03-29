//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentProvisioningController_h
#define PKPaymentProvisioningController_h
@import Foundation;

#include "CLLocationManagerDelegate-Protocol.h"
#include "OS_dispatch_source-Protocol.h"
#include "PKAccountService.h"
#include "PKAccountServiceObserver-Protocol.h"
#include "PKAddPaymentPassRequestConfiguration.h"
#include "PKCloudStoreCoordinatorDelegate-Protocol.h"
#include "PKPaymentCloudStoreZoneCreationManager.h"
#include "PKPaymentCredential.h"
#include "PKPaymentEligibilityResponse.h"
#include "PKPaymentPass.h"
#include "PKPaymentProvisioningControllerCredentialQueue.h"
#include "PKPaymentProvisioningResponse.h"
#include "PKPaymentRequirementsResponse.h"
#include "PKPaymentService.h"
#include "PKPaymentServiceDelegate-Protocol.h"
#include "PKPaymentSetupProduct.h"
#include "PKPaymentSetupProductModel.h"
#include "PKPaymentWebService.h"
#include "PKPaymentWebServiceDelegate-Protocol.h"
#include "PKProvisioningSEStorageSnapshot.h"
#include "PKProvisioningUtility.h"
#include "PKSecureElementProvisioningState.h"

@class CIDVUIProofingFlowManager, CLInUseAssertion, CLLocation, CLLocationManager, NSArray, NSData, NSExtension, NSHashTable, NSMutableArray, NSMutableOrderedSet, NSMutableSet, NSOrderedSet, NSSet, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface PKPaymentProvisioningController : NSObject<CLLocationManagerDelegate, PKPaymentServiceDelegate, PKAccountServiceObserver, PKPaymentWebServiceDelegate> {
  /* instance variables */
  PKPaymentService *_paymentService;
  PKProvisioningUtility *_utility;
  NSMutableSet *_tasks;
  NSTimer *_descriptionTimer;
  BOOL _provisioningUserInterfaceIsVisible;
  BOOL _proxyTargetDeviceWebServiceInUse;
  PKPaymentCredential *_currentCredential;
  PKAddPaymentPassRequestConfiguration *_currentAddPaymentPassRequestConfiguration;
  NSHashTable *_delegates;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _delegatesLock;
  NSSet *_supportedFeatureIdentifierStrings;
  NSSet *_supportedFeatureIdentifierStringsForAccountProvisioning;
  NSMutableSet *_analyticsFeaturesToReport;
  unsigned long long _targetDeviceSupportsTypeF;
  unsigned long long _backgroundTaskIdentifier;
  long long _provisioningStatusCount;
  NSObject<OS_dispatch_queue> *_updateQueue;
  NSSet *_featuresDidBeginReporting;
  NSData *_externalizedAuth;
  PKSecureElementProvisioningState *_provisioningState;
  CLLocationManager *_locationManager;
  NSObject<OS_dispatch_source> *_locationTimer;
  id /* block */ _locationCompletion;
  CLInUseAssertion *_locationInUseAssertion;
  PKAccountService *_accountService;
  NSMutableArray *_preflighUpdateHandlers;
  BOOL _isPreflighting;
  unsigned long long _isTargetUserUnder13;
  BOOL _preflightedAccounts;
  BOOL _preflightedApplications;
  NSArray *_accounts;
  BOOL _hasPayLaterPass;
  BOOL _queriedHasPayLaterPass;
  PKPaymentCloudStoreZoneCreationManager *_zoneCreationManager;
  NSArray *_paymentSetupFeatures;
  PKPaymentSetupProduct *_carKeyProduct;
  NSMutableArray *_pendingProvisionings;
}

@property (readonly, nonatomic) BOOL suppressDefaultCardholderNameField;
@property (retain, nonatomic) NSObject<PKCloudStoreCoordinatorDelegate> *cloudStoreCoordinator;
@property (readonly, nonatomic) BOOL hasExternalizedAuth;
@property (copy, nonatomic) NSString *referrerIdentifier;
@property (nonatomic) BOOL isProvisioningForAltAccount;
@property (readonly, nonatomic) unsigned long long isCurrentUserUnder13;
@property (readonly, nonatomic) PKPaymentWebService *webService;
@property (nonatomic) long long state;
@property (readonly, copy, nonatomic) NSString *localizedProgressDescription;
@property (readonly, nonatomic) unsigned long long preflightRequirements;
@property (readonly, copy, nonatomic) NSArray *associatedCredentials;
@property (readonly, copy, nonatomic) NSArray *purchaseCredentials;
@property (readonly, copy, nonatomic) NSArray *pendingCarKeyCredentials;
@property (readonly, nonatomic) PKProvisioningSEStorageSnapshot *storageSnapshot;
@property (readonly, nonatomic) NSExtension *provisioningExtension;
@property (readonly, copy, nonatomic) NSArray *provisioningExtensionCredentials;
@property (readonly, copy, nonatomic) NSArray *allCredentials;
@property (readonly, nonatomic) PKPaymentProvisioningControllerCredentialQueue *credentialProvisioningQueue;
@property (readonly, nonatomic) PKPaymentSetupProductModel *paymentSetupProductModel;
@property (readonly, nonatomic) BOOL passcodeUpgradeRequired;
@property (readonly, copy, nonatomic) NSString *productIdentifier;
@property (readonly, nonatomic) PKPaymentRequirementsResponse *requirementsResponse;
@property (readonly, nonatomic) PKPaymentEligibilityResponse *eligibilityResponse;
@property (readonly, nonatomic) PKPaymentProvisioningResponse *provisioningResponse;
@property (readonly, nonatomic) NSOrderedSet *provisionedPasses;
@property (readonly, nonatomic) PKPaymentPass *provisionedPass;
@property (readonly, nonatomic) NSArray *moreInfoItems;
@property (readonly, nonatomic) BOOL expressModeSetupOptional;
@property (readonly, nonatomic) NSSet *automaticExpressModes;
@property (readonly, nonatomic) BOOL AMPEnrollmentAvailable;
@property (retain, nonatomic) NSArray *allowedPaymentNetworks;
@property (retain, nonatomic) NSArray *allowedCardTypes;
@property (retain, nonatomic) NSSet *requiredTransitNetworkIdentifiers;
@property (retain, nonatomic) NSSet *allowedFeatureIdentifiers;
@property (retain, nonatomic) NSSet *allowedProductIdentifiers;
@property (nonatomic) BOOL preventsFeatureApplications;
@property (retain, nonatomic) CIDVUIProofingFlowManager *identityProofingManager;
@property (copy, nonatomic) id /* block */ identityProofingManagerCompletionHandler;
@property (readonly, nonatomic) CLLocation *cachedLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithWebService:(id)service;
- (id)initWithWebService:(id)service localPaymentService:(id)service;
- (id)initWithWebService:(id)service paymentSetupRequest:(id)request;
- (BOOL)isWatchSupportedForProduct:(id)product;
- (void)dealloc;
- (void)_endSessionIfNecessary;
- (void)_beginReportingIfNecessary;
- (long long)_defaultResetState;
- (void)reset;
- (void)resetForNewProvisioning;
- (void)resetForNewProvisioningForce:(BOOL)force;
- (void)_setState:(long long)state notify:(BOOL)notify;
- (void)validatePreconditions:(id /* block */)preconditions;
- (void)registerDevice:(id /* block */)device;
- (void)_registerDevice:(id /* block */)device;
- (void)validatePreconditionsAndRegister:(id /* block */)register;
- (void)preflightWithCompletion:(id /* block */)completion;
- (void)preflightWithRequirements:(unsigned long long)requirements completionRequirements:(unsigned long long)requirements completion:(id /* block */)completion;
- (void)preflightWithRequirements:(unsigned long long)requirements update:(id /* block */)update;
- (void)_updatePreflightRequirement:(unsigned long long)requirement displayableError:(id)error;
- (id)_doesDisplayableErrorConstitutePreflightFailure:(id)failure;
- (void)performDeviceCheckInIfNeeded:(id /* block */)needed;
- (void)retrieveRemoteCredentials:(id /* block */)credentials;
- (id)_supportedFeatureIdentifierStrings;
- (id)_supportedFeatureIdentifierStringsForAccountProvisioning;
- (void)retrieveAccountCredentials:(id /* block */)credentials;
- (id)_fetchOrCreateProductsForIdentifier:(unsigned long long)identifier;
- (void)_setupFeatureApplications:(id)applications;
- (void)_setupAccounts;
- (id)_accountsForFeatureIdentifier:(unsigned long long)identifier;
- (BOOL)_featureApplicationInValidStateToPresent:(id)present;
- (void)retrieveAllAvailableCredentials:(id /* block */)credentials;
- (void)_updateAllAssoicatedCredentialsMetadataWithCompletion:(id /* block */)completion;
- (void)updateRemoteCredentials:(id)credentials withCompletionHandler:(id /* block */)handler;
- (void)associateCredentials:(id)credentials withCompletionHandler:(id /* block */)handler;
- (void)_associateCredentials:(id)credentials withCompletionHandler:(id /* block */)handler;
- (BOOL)_hasSetupConfiguration;
- (BOOL)_credentialIsValidForSetupConfiguration:(id)configuration;
- (void)_associateCredential:(id)credential withCompletionHandler:(id /* block */)handler;
- (void)_updateCredentialWithPaymentPass:(id)pass completion:(id /* block */)completion;
- (void)_updateCredentialWithPaymentPassAssets:(id)assets completion:(id /* block */)completion;
- (void)_downloadRemoteAssetsForPaymentPass:(id)pass paymentCredential:(id)credential completion:(id /* block */)completion;
- (void)_informDelegatesOfPaymentPassUpdateOnCredential:(id)credential;
- (void)_metadataUpdatedOnCredentials;
- (void)_preflightRequirementsUpdated:(unsigned long long)updated displayableError:(id)error;
- (void)_informDelegatesOfAccountsUpdated;
- (void)cachedPaymentSetupProductModelWithCompletion:(id /* block */)completion;
- (void)updatePaymentSetupProductModelWithCompletionHandler:(id /* block */)handler;
- (void)updatePaymentSetupProductModelFromStaticProducts:(BOOL)products completion:(id /* block */)completion;
- (void)_updatePaymentSetupProductModelExtensionsWithCompletion:(id /* block */)completion;
- (void)_browsableBanksWithRequest:(id)request completion:(id /* block */)completion;
- (void)_retrievePendingCarKeys:(id /* block */)keys;
- (id)localCredentials;
- (BOOL)_isExtensionSupported:(id)supported usingUnsupportedProvisioningExtensions:(id)extensions;
- (void)provisioningExtensionProductsWithCompletionHandler:(id /* block */)handler;
- (id)_mockBrowseBanksResponse;
- (id)pendingProvisioningForCredential:(id)credential;
- (void)requestProvisioningMethodMetadataForProduct:(id)product completionHandler:(id /* block */)handler;
- (void)requestPurchasesForProduct:(id)product completionHandler:(id /* block */)handler;
- (void)setupProductForProvisioning:(id)provisioning includePurchases:(BOOL)purchases withCompletionHandler:(id /* block */)handler;
- (void)setupAccountCredentialForProvisioning:(id)provisioning completion:(id /* block */)completion;
- (void)_setupAccountCredentialForProvisioning:(id)provisioning completion:(id /* block */)completion;
- (id)_filteredPaymentSetupProductSections:(id)sections;
- (id)_filterPaymentSetupProducts:(id)products;
- (void)_queryRequirementsForCredential:(id)credential completion:(id /* block */)completion;
- (void)_queryEligibilityForCredential:(id)credential completion:(id /* block */)completion;
- (void)requestRequirements:(id)requirements withCompletionHandler:(id /* block */)handler;
- (void)_requestRequirements:(id)requirements withCompletionHandler:(id /* block */)handler;
- (void)resolveAmbiguousRequirementsWithProductIdentifier:(id)identifier;
- (void)resolveRequirementsUsingProduct:(id)product;
- (void)resolveRequirementsUsingProvisioningMethodMetadata:(id)metadata;
- (void)resolveRequirementsForShareableCredential:(id)credential;
- (void)resolveRequirementsForIssuerProvisioningExtensionCredential:(id)credential;
- (BOOL)setState:(long long)state forCredential:(id)credential;
- (void)resolveLocalEligibilityRequirementsForAppleBalanceCredential:(id)credential withCompletion:(id /* block */)completion;
- (void)requestEligibility:(id)eligibility withCompletionHandler:(id /* block */)handler;
- (void)acceptTerms;
- (void)declineTerms;
- (void)resolveProvisioningForCredential:(id)credential;
- (void)requestExternalizedAuthForWatchWithVisibleViewController:(id)controller completion:(id /* block */)completion;
- (void)storeExternalizedAuth:(id)auth;
- (id)retrieveExternalizedAuth;
- (void)requestProvisioning:(id)provisioning withCompletionHandler:(id /* block */)handler;
- (void)requestProvisioning:(id)provisioning withCompletion:(id /* block */)completion;
- (void)_noteProvisioningDidBegin;
- (void)_noteProvisioningDidEnd;
- (id)_localizedProgressDescriptionForEnablingCard;
- (void)ingestSecureElementPassForCredential:(id)credential completion:(id /* block */)completion;
- (void)_requestProvisioning:(id)provisioning withCompletionHandler:(id /* block */)handler;
- (void)_deletePaymentPass:(id)pass;
- (void)verifyPassIsSupportedForExpressInLocalMarket:(id)market completion:(id /* block */)completion;
- (void)provisionHomeKeyCredential:(id)credential completionHandler:(id /* block */)handler;
- (void)_startLocationSearchWithTimeout:(double)timeout completion:(id /* block */)completion;
- (BOOL)_isValidLocation:(id)location;
- (void)locationManager:(id)manager didUpdateLocations:(id)locations;
- (id)_eligibleMarketNames:(id)names;
- (void)_loadMoreInfoItemForMarket:(id)market eligibleMarkets:(id)markets completionHandler:(id /* block */)handler;
- (void)removeProvisionedPasses;
- (void)_passAlreadyProvisioned;
- (void)_handleProvisioningError:(id)error forRequest:(id)request pass:(id)pass;
- (void)_setLocalizedProgressDescription:(id)description;
- (BOOL)provisioningUserInterfaceIsVisible;
- (void)noteProvisioningUserInterfaceDidAppear;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (BOOL)_isProvisioningPaymentAccount;
- (void)addDelegate:(id)delegate;
- (void)removeDelegate:(id)delegate;
- (id)associatedCredentialsForDefaultBehaviour;
- (id)associatedCredentialsForProductIdentifier:(id)identifier;
- (BOOL)isPasscodeUpgradeRequired;
- (void)preflightPasscodeUpgradeWithCompletion:(id /* block */)completion;
- (void)passcodeUpgradeCompleted:(BOOL)completed;
- (void)_startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)policy;
- (void)_endRequiringUpgradedPasscodeIfNecessary;
- (long long)availableSecureElementPassSpaces;
- (id)watchWebServiceForIssuerProvisioning;
- (void)cleanupTransferredCredentialFromSourceDevice:(id)device completion:(id /* block */)completion;
- (void)triggerWatchProvisioningForAppleBalanceCredential:(id)credential;
- (void)updateStateAfterProvisioning:(id)provisioning credential:(id)credential passes:(id)passes moreInfoItems:(id)items;
- (id)_effectiveSessionIdentifier;
- (void)finishOptionalExpressModeSetupForPass:(id)pass withProvisioningTracker:(id)tracker completion:(id /* block */)completion;
- (void)handleOptionalExpressModeSetupDidFinishForPass:(id)pass withExpressModes:(id)modes provisioningTracker:(id)tracker completion:(id /* block */)completion;
- (id)provisioningTracker;
- (BOOL)hasPaymentPass;
- (BOOL)hasPayLaterPass;
- (BOOL)hasCreditPaymentPass;
- (BOOL)hasDebitPaymentPass;
- (id)passesWithPaymentMethodType:(unsigned long long)type;
- (id)_paymentPassWithPaymentMethodType:(unsigned long long)type;
- (id)_displayableErrorOverrideForUnderlyingError:(id)error;
- (id)displayableErrorForError:(id)error;
- (id)displayableErrorForProvisioningError:(id)error;
- (void)accountAdded:(id)added;
- (void)accountRemoved:(id)removed;
- (void)_reloadSetupProducts;
- (void)featureApplicationAdded:(id)added;
- (void)featureApplicationRemoved:(id)removed;
- (void)featureApplicationChanged:(id)changed;
- (void)didReceivePendingProvisioningUpdate:(id)update;
- (void)paymentWebService:(id)service didQueueTSMConnectionForTaskID:(unsigned long long)id;
- (void)paymentWebService:(id)service didCompleteTSMConnectionForTaskID:(unsigned long long)id;
- (void)_updateLocalizedProgressAndInvalidateTimer;
- (void)_addAssociatedCredential:(id)credential;
- (void)deleteCredential:(id)credential completionHandler:(id /* block */)handler;
- (void)_addOrUpdateProvisonedPassData:(id)data;
- (void)removeProvisionedPass;
- (BOOL)isExpressModeSetupOptional;
- (BOOL)isAMPEnrollmentAvailable;
@end

#endif /* PKPaymentProvisioningController_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPassDetailCardStatusSectionProvider_h
#define NPKPassDetailCardStatusSectionProvider_h
@import Foundation;

#include "NPKPassDetailSectionProvider.h"
#include "NPKExpressModeSettingsCoordinatorDelegate-Protocol.h"
#include "NPKIdentityCredentialSuspensionReasonManagerObserver-Protocol.h"
#include "NPKLowPowerModeMonitorObserver-Protocol.h"
#include "NPKVehicleConnectivityCoordinatorDelegate-Protocol.h"
#include "PKPaymentServiceDelegate-Protocol.h"

@class NPKExpressModeSettingsCoordinator, NPKPassAssociatedInfoManager, NPKVehicleConnectivityCoordinator, NSSet, NSString, PKAccount, PKAccountUserCollection, PKPaymentService, PKPeerPaymentAccount;

@interface NPKPassDetailCardStatusSectionProvider : NPKPassDetailSectionProvider<PKPaymentServiceDelegate, NPKExpressModeSettingsCoordinatorDelegate, NPKVehicleConnectivityCoordinatorDelegate, NPKIdentityCredentialSuspensionReasonManagerObserver, NPKLowPowerModeMonitorObserver>

@property (retain, nonatomic) PKAccount *appleCardAccount;
@property (retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;
@property (retain, nonatomic) PKAccount *appleBalanceAccount;
@property (nonatomic) unsigned long long biometricCredentialSuspensionReason;
@property (nonatomic) unsigned long long rangingSuspensionReason;
@property (nonatomic) BOOL passiveEntryRequired;
@property (nonatomic) BOOL peripheralConnected;
@property (nonatomic) BOOL passiveEntrySuspendedDueToLowPowerMode;
@property (retain, nonatomic) PKPaymentService *paymentService;
@property (retain, nonatomic) NPKExpressModeSettingsCoordinator *expressModeSettingsCoordinator;
@property (retain, nonatomic) NPKVehicleConnectivityCoordinator *vehicleConnectivityCoordinator;
@property (retain, nonatomic) NPKPassAssociatedInfoManager *passAssociatedInfoManager;
@property (retain, nonatomic) PKAccountUserCollection *accountUserCollection;
@property (retain, nonatomic) NSSet *physicalCards;
@property (readonly, nonatomic) unsigned long long nfcPayloadState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_defaultPassLibraryDataProvider;
+ (id)_defaultExpressModeSettingsCoordinator;
+ (id)_informationForPaymentPass:(id)pass peerPaymentAccount:(id)account appleCardAccount:(id)account appleBalanceAccount:(id)account biometricCredentialSuspensionReason:(unsigned long long)reason passiveEntrySuspendedDueToLowPowerMode:(BOOL)mode rangingSuspensionReason:(unsigned long long)reason passiveEntryRequired:(BOOL)required peripheralConnected:(BOOL)connected accountUserCollection:(id)collection contactResolverCreator:(id)creator physicalCards:(id)cards;
+ (id)_actionItemForPaymentPass:(id)pass;
+ (id)_dashboardInformationForPaymentPass:(id)pass;
+ (id)_paymentApplicationStateForPaymentPass:(id)pass;
+ (id)_issuerBindingInformationForPayloadState:(unsigned long long)state withOrganization:(id)organization;
+ (id)_titleForPaymentApplicationStateForPaymentPass:(id)pass;
+ (id)_messageForPaymentApplicationStateForPaymentPass:(id)pass;
+ (unsigned long long)_iconStyleForPaymentApplicationStateFromPaymentPass:(id)pass;
+ (BOOL)isPeerPaymentAccountLockedByAssociatedAccount:(id)account;
+ (id)_peerPaymentInformationForPaymentPass:(id)pass peerPaymentAccount:(id)account contactResolverCreator:(id)creator;
+ (id)_titleForPeerPaymentPass:(id)pass account:(id)account;
+ (id)_messageForPeerPaymentPass:(id)pass account:(id)account contactResolverCreator:(id)creator;
+ (unsigned long long)_iconStyleForPeerPaymentPass:(id)pass account:(id)account;
+ (BOOL)isParticipantAccountLocked:(id)locked;
+ (id)_appleCardInformationForAppleCardAccount:(id)account accountUserCollection:(id)collection physicalCards:(id)cards;
+ (id)_titleForAppleCardAccount:(id)account accountUserCollection:(id)collection;
+ (unsigned long long)_iconStyleForAppleCardAccount:(id)account accountUserCollection:(id)collection;
+ (id)_messageForAppleCardAccount:(id)account accountUserCollection:(id)collection physicalCards:(id)cards;
+ (id)_appleBalanceInformationForPass:(id)pass appleBalanceAccount:(id)account;
+ (id)_titleForAccount:(id)account accountUserCollection:(id)collection;
+ (id)_messageForAccount:(id)account accountUserCollection:(id)collection physicalCards:(id)cards;
+ (unsigned long long)_iconStyleForAccount:(id)account accountUserCollection:(id)collection;
+ (BOOL)_isExpressModeEnabledForPass:(id)pass withExpressSettingsCoordinator:(id)coordinator;
+ (id)_carKeyInformationForPaymentPass:(id)pass passiveEntrySuspendedDueToLowPowerMode:(BOOL)mode rangingSuspensionReason:(unsigned long long)reason passiveEntryRequired:(BOOL)required peripheralConnected:(BOOL)connected;
+ (id)_carKeyTitleForPaymentPass:(id)pass passiveEntrySuspendedDueToLowPowerMode:(BOOL)mode rangingSuspensionReason:(unsigned long long)reason passiveEntryRequired:(BOOL)required peripheralConnected:(BOOL)connected;
+ (id)_carKeyMessageForPaymentPass:(id)pass passiveEntrySuspendedDueToLowPowerMode:(BOOL)mode rangingSuspensionReason:(unsigned long long)reason passiveEntryRequired:(BOOL)required peripheralConnected:(BOOL)connected;
+ (unsigned long long)_iconStyleForCarKeyWithPaymentPass:(id)pass passiveEntrySuspendedDueToLowPowerMode:(BOOL)mode rangingSuspensionReason:(unsigned long long)reason passiveEntryRequired:(BOOL)required;
+ (id)_carKeyRevocationMessageForPaymentPass:(id)pass;
+ (id)_identityCardInformationForPaymentPass:(id)pass biometricCredentialSuspensionReason:(unsigned long long)reason;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (id)sectionIdentifiers;
- (id)itemsForSectionWithIdentifier:(id)identifier;
- (void)_updateWithConfiguration:(id)configuration previousConfiguration:(id)configuration;
- (void)_loadPeerPaymentAccountIfNecessary;
- (void)_updatePeerPaymentAccount;
- (void)_loadAppleCardAccountIfNecessary;
- (void)_updateAppleCardAccount;
- (void)_updateUserAccountsCollectionWithPass:(id)pass accountService:(id)service completion:(id /* block */)completion;
- (void)_updateAccountPhysicalCards;
- (void)_loadPassAssociatedAccountIfNecessary;
- (void)_startObservingAccountChanges;
- (void)_accountChanged:(id)changed;
- (void)_updateAccount;
- (id)_accountForPass:(id)pass;
- (void)_setAccount:(id)account forPass:(id)pass;
- (void)_loadRangingSuspensionReasonsIfNecessary;
- (void)_loadPassiveEntryRequiredStatusIfNecessary;
- (void)_loadPeripheralConnectedStatusIfNecessary;
- (void)_loadLowPowerModePassiveEntryStatusIfNecessary;
- (void)_loadIdentityCredentialStatusIfNecessary;
- (void)credential:(id)credential forPaymentApplication:(id)application didUpdateRangingSuspensionReasons:(unsigned long long)reasons;
- (void)expressModeSettingsCoordinator:(id)coordinator didEncounterConflictWhenEnablingExpressForPass:(id)pass conflictingExpressPasses:(id)passes conflictsWithGymKit:(BOOL)kit completion:(id /* block */)completion;
- (void)expressModeSettingsCoordinator:(id)coordinator requestsAuthorizationToEnableExpressForPass:(id)pass completion:(id /* block */)completion;
- (void)expressModeSettingsCoordinator:(id)coordinator didUpdateState:(unsigned long long)state forPassWithUniqueID:(id)id;
- (void)vehicleConnectivityCoordinator:(id)coordinator didBecomeConnectedToVehicleCorrespondingToPass:(id)pass;
- (void)vehicleConnectivityCoordinator:(id)coordinator didBecomeDisconnectedFromVehicleCorrespondingToPass:(id)pass;
- (void)lowPowerModeMonitor:(id)monitor didUpdateLowPowerModeEnabled:(BOOL)enabled;
- (void)identityCredentialSuspensionReasonManager:(id)manager didUpdateSuspensionReason:(unsigned long long)reason;
- (BOOL)isPassiveEntryRequired;
- (BOOL)isPeripheralConnected;
- (BOOL)isPassiveEntrySuspendedDueToLowPowerMode;
@end

#endif /* NPKPassDetailCardStatusSectionProvider_h */

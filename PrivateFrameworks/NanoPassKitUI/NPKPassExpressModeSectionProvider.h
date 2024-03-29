//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPassExpressModeSectionProvider_h
#define NPKPassExpressModeSectionProvider_h
@import Foundation;

#include "NPKCardInformationDetailCollectionViewSectionProvider.h"
#include "NPKExpressModeSettingsCoordinatorDelegate-Protocol.h"
#include "NPKLowPowerModeMonitorObserver-Protocol.h"

@class NPKExpressModeSettingsCoordinator, NSString, PKExpressPassController, PKGroupsController, PKPassLibraryDefaultDataProvider, PKPaymentDefaultDataProvider;

@interface NPKPassExpressModeSectionProvider : NPKCardInformationDetailCollectionViewSectionProvider<NPKExpressModeSettingsCoordinatorDelegate, NPKLowPowerModeMonitorObserver> {
  /* instance variables */
  PKExpressPassController *_expressPassController;
  PKPaymentDefaultDataProvider *_paymentDataProvider;
  PKPassLibraryDefaultDataProvider *_passLibraryDataProvider;
  NPKExpressModeSettingsCoordinator *_expressModeSettingsCoordinator;
  PKGroupsController *_groupsController;
}

@property (readonly, nonatomic) BOOL supportExpressMode;
@property (readonly, nonatomic) BOOL isExpressModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (BOOL)isExpressModeEnabledForPass:(id)pass;
- (BOOL)isInSessionExpressEnabled;
- (id)sectionIdentifiers;
- (id)itemsForSectionWithIdentifier:(id)identifier;
- (id)footerTextForSectionWithIdentifier:(id)identifier;
- (void)expressModeSettingsCoordinator:(id)coordinator didEncounterConflictWhenEnablingExpressForPass:(id)pass conflictingExpressPasses:(id)passes conflictsWithGymKit:(BOOL)kit completion:(id /* block */)completion;
- (void)expressModeSettingsCoordinator:(id)coordinator requestsAuthorizationToEnableExpressForPass:(id)pass completion:(id /* block */)completion;
- (void)expressModeSettingsCoordinator:(id)coordinator didUpdateState:(unsigned long long)state forPassWithUniqueID:(id)id;
- (void)lowPowerModeMonitor:(id)monitor didUpdateLowPowerModeEnabled:(BOOL)enabled;
- (void)_openExpressModePreferencesForPass:(id)pass;
- (void)_presentAlertWithTitle:(id)title message:(id)message actions:(id)actions;
- (void)_presentPassiveEntryDisablementAlertWithChangeBlock:(id /* block */)block;
- (void)_enableExpressModeWithChangeBlock:(id /* block */)block;
- (void)_disableExpressModeWithChangeBlock:(id /* block */)block;
- (BOOL)_isLowPowerModeEnabled;
- (BOOL)_showLowPowerModeNotice;
- (BOOL)_passSupportsGroupExpress;
- (BOOL)_passSupportsUWB;
- (BOOL)_passSupportsNFC;
- (BOOL)_isPassiveEntryEnabled;
- (unsigned long long)_effectiveCurrentExpressState;
- (id)_expressAppletIdentifiersForPass:(id)pass;
- (id)_eligibleExpressUpgradeRequestsForPass:(id)pass;
- (id)_expressCapablePaymentApplicationIdentifiersForPass:(id)pass;
@end

#endif /* NPKPassExpressModeSectionProvider_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 331.0.0.0.0
//
#ifndef ACUIDataclassConfigurationViewController_h
#define ACUIDataclassConfigurationViewController_h
@import Foundation;

#include "ACUIViewController.h"

@class ACAccount, NSArray, NSMutableDictionary, NSString, PSSpecifier;

@interface ACUIDataclassConfigurationViewController : ACUIViewController {
  /* instance variables */
  BOOL _forceMailSetup;
  NSString *_accountIdentifier;
  NSMutableDictionary *_allDesiredDataclassActions;
  BOOL _isMergingSyncData;
  PSSpecifier *_accountSummaryCellSpecifier;
  NSArray *_dataclassSpecifiers;
  NSArray *_otherSpecifiers;
  BOOL _didShowDataclassActionPickerDuringRemoval;
  NSArray *_specifiers;
}

@property BOOL isAccountModificationDisabled;
@property (nonatomic) BOOL firstTimeSetup;
@property (copy, nonatomic) NSArray *preEnabledDataclasses;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) PSSpecifier *dataclassGroupSpecifier;
@property (readonly, nonatomic) PSSpecifier *deleteButtonSpecifier;
@property (nonatomic) BOOL shouldShowDeleteAccountButton;
@property (nonatomic) BOOL shouldEnableDeleteAccountButton;
@property (nonatomic) BOOL shouldEnableAccountSummaryCell;
@property (nonatomic) BOOL shouldEnableDataclassSwitches;
@property (nonatomic) BOOL isMailSetupForced;
@property (copy, nonatomic) id /* block */ configurationCompletion;

/* class methods */
+ (BOOL)shouldPresentAsModalSheet;

/* instance methods */
- (id)init;
- (void)forceMailSetup;
- (id)displayedAccountTypeString;
- (Class)accountInfoControllerClass;
- (id)displayedShortAccountTypeString;
- (id)valueForAccountSummaryCell;
- (long long)deleteButtonIndex;
- (id)titleForDeleteButton;
- (id)messageForAccountDeletionWarning;
- (id)messageForAccountDeletionProgressUI;
- (BOOL)shouldShowOtherSpecifiersDuringFirstSetup;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (id)_navigationTitle;
- (void)doneButtonTapped:(id)tapped;
- (void)cancelButtonTapped:(id)tapped;
- (BOOL)shouldVerifyBeforeAccountSave;
- (void)reloadSpecifiers;
- (id)specifiers;
- (id)specifierForAccountSummaryCell;
- (id)_specifiersForDataclasses:(id)dataclasses;
- (BOOL)shouldShowSpecifierForDataclass:(id)dataclass;
- (id)specifierForDataclass:(id)dataclass;
- (BOOL)_isUserOverridableForDataclass:(id)dataclass;
- (id)otherSpecifiers;
- (void)reloadDynamicSpecifiersWithAnimation:(BOOL)animation;
- (id)dataclassSwitchStateForSpecifier:(id)specifier;
- (void)dataclassSwitchStateDidChange:(id)change withSpecifier:(id)specifier;
- (void)_enableAllProvisionedDataclassesWithoutRequringUserInteraction;
- (BOOL)shouldAutomaticallyTryEnablingDataclassDuringSetup:(id)setup;
- (void)setDataclass:(id)dataclass enabled:(BOOL)enabled;
- (void)_setDataclass:(id)dataclass enabled:(BOOL)enabled onAccount:(id)account completion:(id /* block */)completion;
- (void)_presentUndoAlert:(id)alert reason:(id)reason;
- (id)_orderDataclassList:(id)list;
- (id)_accountIdentifier;
- (void)operationsHelper:(id)helper willSaveAccount:(id)account;
- (id)operationsHelper:(id)helper desiredDataclassActionFromPicker:(id)picker;
- (void)operationsHelper:(id)helper didSaveAccount:(id)account withSuccess:(BOOL)success error:(id)error;
- (void)_notifyOfAccountSetupCompletion;
- (BOOL)_isShowingDeleteAccountButton;
- (void)appendDeleteAccountButton;
- (void)deleteButtonTapped:(id)tapped;
- (BOOL)operationsHelper:(id)helper shouldRemoveAccount:(id)account;
- (long long)operationsHelper:(id)helper shouldRemoveOrDisableAccount:(id)account;
- (BOOL)_promptUserToConfirmAccountDeletion;
- (long long)_promptUserToConfirmAccountSyncDeletion;
- (id)deviceMessage;
- (BOOL)isAppleMailAccount:(id)account;
- (void)operationsHelper:(id)helper didRemoveAccount:(id)account withSuccess:(BOOL)success error:(id)error;
- (BOOL)_confirmKeepLocalDataForDataclasses:(id)dataclasses;
- (BOOL)_confirmDeleteLocalDataForDataclasses:(id)dataclasses;
- (BOOL)_confirmSyncDelete;
- (BOOL)isUserEnrollment;
- (BOOL)isFirstTimeSetup;
@end

#endif /* ACUIDataclassConfigurationViewController_h */

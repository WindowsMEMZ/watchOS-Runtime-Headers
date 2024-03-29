//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountBankAccountsViewController_h
#define PKAccountBankAccountsViewController_h
@import Foundation;

#include "PKSectionTableViewController.h"
#include "PKAddBankAccountInformationViewControllerDelegate-Protocol.h"
#include "PKApplyController.h"
#include "PKPaymentSetupViewControllerDelegate-Protocol.h"
#include "PKSecureElementPassContactIssuerHelper.h"
#include "PKSecureElementPassContactIssuerHelperDelegate-Protocol.h"

@class NSMutableArray, NSString, PKAccount, PKAccountPaymentFundingSource, PKAccountUserInfo, PKPaymentWebService;

@interface PKAccountBankAccountsViewController : PKSectionTableViewController<PKAddBankAccountInformationViewControllerDelegate, PKSecureElementPassContactIssuerHelperDelegate, PKPaymentSetupViewControllerDelegate> {
  /* instance variables */
  PKAccount *_account;
  PKAccount *_associatedAccount;
  PKAccountUserInfo *_userInfo;
  PKPaymentWebService *_paymentWebService;
  unsigned long long _accountFeatureIdentifier;
  NSMutableArray *_availableFundingSources;
  NSMutableArray *_unavailableFundingSourcesWithVerification;
  NSMutableArray *_unavailableFundingSourcesWithoutVerification;
  long long _context;
  NSMutableArray *_deletingFundingSources;
  PKAccountPaymentFundingSource *_lastAddedFundingSource;
  PKSecureElementPassContactIssuerHelper *_contactIssuerHelper;
  PKApplyController *_applyController;
  BOOL _loadingFundingSources;
  BOOL _loadingAccountUserInfo;
  BOOL _loadingLinkAccountFlow;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account paymentWebService:(id)service context:(long long)context;
- (void)viewDidLoad;
- (void)_updateContentUnavailableConfigurationUsingState:(id)state;
- (void)_reloadFundingSources;
- (void)_editButtonPressed:(id)pressed;
- (void)_toggleEditingMode;
- (void)_updateEditButtonIfNecessary;
- (BOOL)_isBankAccountIndexPath:(id)path;
- (void)_didSelectDeleteBankAccountAtIndexPath:(id)path;
- (void)preflightWithCompletion:(id /* block */)completion;
- (id)_addBankAccountInformationViewController;
- (void)_presentAddBankAccount;
- (void)_presentContactSupport;
- (void)_presentLinkAccountForFundingSource:(id)source;
- (BOOL)_hasBankAccounts;
- (void)_fetchAccountUserInfo:(id /* block */)info;
- (id)_fundingSourceForIndexPath:(id)path;
- (id)_indexPathForFundingSourceIdentifier:(id)identifier;
- (unsigned long long)_sectionTypeForSection:(unsigned long long)section;
- (BOOL)shouldMapSection:(unsigned long long)section;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (id)_bankAccountCellForRowAtIndexPath:(id)path;
- (void)_configureBankAccountCell:(id)cell withFundingSource:(id)source;
- (BOOL)tableView:(id)view canEditRowAtIndexPath:(id)path;
- (void)tableView:(id)view commitEditingStyle:(long long)style forRowAtIndexPath:(id)path;
- (id)tableView:(id)view trailingSwipeActionsConfigurationForRowAtIndexPath:(id)path;
- (id)tableView:(id)view titleForHeaderInSection:(long long)section;
- (id)tableView:(id)view titleForFooterInSection:(long long)section;
- (id)tableView:(id)view viewForFooterInSection:(long long)section;
- (BOOL)tableView:(id)view shouldHighlightRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)information;
- (void)addBankAccountInformationViewController:(id)controller didAddFundingSource:(id)source;
- (void)addBankAccountInformationViewControllerDidFinish:(id)finish;
- (void)addBankAccountInformationViewController:(id)controller didFailWithError:(id)error;
- (void)contactIssuerHelper:(id)helper didRequestPresentViewController:(id)controller animated:(BOOL)animated completion:(id /* block */)completion;
- (void)contactIssuerHelper:(id)helper didRequestDismissViewControllerAnimated:(BOOL)animated completion:(id /* block */)completion;
- (void)viewControllerDidTerminateSetupFlow:(id)flow;
@end

#endif /* PKAccountBankAccountsViewController_h */

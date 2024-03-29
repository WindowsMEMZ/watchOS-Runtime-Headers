//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassShareDetailsViewController_h
#define PKPassShareDetailsViewController_h
@import Foundation;

#include "PKPaymentSetupOptionsViewController.h"
#include "PKPassEntitlementSelectionSectionController.h"
#include "PKPassSharesListSectionController.h"
#include "PKPassSharesListSectionControllerDelegate-Protocol.h"
#include "PKShareAuthorizationSession.h"
#include "PKSharePreviewAdditionalSecuritySectionController.h"
#include "PKSharePreviewAdditionalSecuritySectionControllerDelegate-Protocol.h"
#include "PKSharePreviewOverviewSectionController.h"
#include "PKSharePreviewOverviewSectionControllerDelegate-Protocol.h"

@class NSString, PKPassEntitlementsComposer, PKPassShare, PKSharedPassSharesController, UIBarButtonItem;

@interface PKPassShareDetailsViewController : PKPaymentSetupOptionsViewController<PKPassSharesListSectionControllerDelegate, PKSharePreviewOverviewSectionControllerDelegate, PKSharePreviewAdditionalSecuritySectionControllerDelegate> {
  /* instance variables */
  PKPassShare *_share;
  PKPassShare *_senderShare;
  PKSharedPassSharesController *_sharesController;
  PKShareAuthorizationSession *_authorizer;
  PKPassEntitlementsComposer *_entitlementComposer;
  PKSharePreviewOverviewSectionController *_overviewSectionController;
  PKPassEntitlementSelectionSectionController *_entitlementSectionController;
  PKSharePreviewAdditionalSecuritySectionController *_additionalSecuritySectionController;
  PKPassSharesListSectionController *_sharesSectionController;
  UIBarButtonItem *_saveButton;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithShare:(id)share sharesController:(id)controller authorizer:(id)authorizer;
- (void)loadView;
- (void)viewWillAppear:(BOOL)appear;
- (void)_setSender:(id)sender;
- (void)_setRecipient:(id)recipient;
- (void)_saveTapped;
- (void)_updateShareToShare:(id)share;
- (void)_setIsLoading:(BOOL)loading;
- (void)_showDisplayableError:(id)error;
- (void)_donePressed;
- (id)avatarView;
- (void)showSaveButtonIfNecessary;
- (void)passSharesListSectionController:(id)controller didSelectShare:(id)share;
- (void)passSharesListSectionController:(id)controller setIsLoading:(BOOL)loading;
- (void)passSharesListSectionControllerDidSelectAddShare:(id)share;
- (void)passSharesListSectionControllerDidFinishRevokingShares:(id)shares;
- (void)passSharesListSectionController:(id)controller presentAlert:(id)alert;
- (void)sharePreviewSectionControllerDidSelectEntitlements:(id)entitlements;
- (void)sharePreviewSectionControllerDidUpdateEntitlements:(id)entitlements;
@end

#endif /* PKPassShareDetailsViewController_h */

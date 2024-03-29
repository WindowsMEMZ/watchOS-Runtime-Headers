//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentAutoReloadSectionController_h
#define PKPeerPaymentAutoReloadSectionController_h
@import Foundation;

#include "PKPaymentPassDetailSectionController.h"
#include "PKPeerPaymentServiceObserver-Protocol.h"
#include "PKPeerPaymentThresholdTopUpController.h"
#include "PKPeerPaymentThresholdTopUpControllerDelegate-Protocol.h"

@class NSString, PKPeerPaymentAccount, PKPeerPaymentRecurringPayment;
@protocol UIViewController<PKPaymentPassDetailWrapperSectionControllerDelegate;

@interface PKPeerPaymentAutoReloadSectionController : PKPaymentPassDetailSectionController<PKPeerPaymentServiceObserver, PKPeerPaymentThresholdTopUpControllerDelegate> {
  /* instance variables */
  PKPeerPaymentRecurringPayment *_autoReloadPayment;
  PKPeerPaymentAccount *_account;
  UIViewController<PKPaymentPassDetailWrapperSectionControllerDelegate> *_delegate;
  PKPeerPaymentThresholdTopUpController *_controller;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)validForPaymentPass:(id)pass;

/* instance methods */
- (id)initWithDelegate:(id)delegate pass:(id)pass context:(long long)context passLibraryDataProvider:(id)provider;
- (id)allSectionIdentifiers;
- (id)sectionIdentifiers;
- (void)preflight:(id /* block */)preflight;
- (void)_updateRecurringPaymentsWithCompletion:(id /* block */)completion;
- (BOOL)_sectionAvailable;
- (long long)tableView:(id)view numberOfRowsInSectionIdentifier:(id)identifier;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path sectionIdentifier:(id)identifier;
- (id)titleForFooterInSectionIdentifier:(id)identifier;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path sectionIdentifier:(id)identifier;
- (void)presentAutoReload;
- (void)recurringPaymentsChanged;
- (void)thresholdTopUpController:(id)controller requestsDismissViewController:(id)controller;
- (void)thresholdTopUpController:(id)controller requestsPresentViewController:(id)controller;
- (void)thresholdTopUpController:(id)controller requestsPushViewController:(id)controller;
- (void)thresholdTopUpControllerCompletedSetup:(id)setup;
- (id)presentationSceneIdentifierForTopUpController:(id)controller;
- (void)thresholdTopUpController:(id)controller requestsPopViewController:(id)controller;
@end

#endif /* PKPeerPaymentAutoReloadSectionController_h */

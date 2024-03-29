//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupProductsViewController_h
#define PKPaymentSetupProductsViewController_h
@import Foundation;

#include "PKPaymentSetupOptionsViewController.h"
#include "PKLoadingUIProviding-Protocol.h"
#include "PKPaymentProvisioningControllerDelegate-Protocol.h"
#include "PKPaymentSetupActivitySpinnerProtocol-Protocol.h"
#include "PKPaymentSetupPresentationProtocol-Protocol.h"
#include "PKPaymentSetupProductsSectionController.h"
#include "PKPaymentSetupProductsSectionControllerDelegate-Protocol.h"
#include "PKPaymentSetupProductsViewControllerFlowDelegate-Protocol.h"

@class NSArray, NSString, PKPaymentSetupProduct, PKPaymentSetupProductCategory;

@interface PKPaymentSetupProductsViewController : PKPaymentSetupOptionsViewController<PKPaymentSetupProductsSectionControllerDelegate, PKPaymentSetupActivitySpinnerProtocol, PKPaymentProvisioningControllerDelegate, PKLoadingUIProviding, PKPaymentSetupPresentationProtocol> {
  /* instance variables */
  PKPaymentSetupProductCategory *_category;
  NSArray *_paymentSetupProducts;
  PKPaymentSetupProductsSectionController *_primaryProductSectionController;
  PKPaymentSetupProduct *_currentlyLoadingProduct;
}

@property (weak, nonatomic) NSObject<PKPaymentSetupProductsViewControllerFlowDelegate> *flowDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProvisioningController:(id)controller context:(long long)context delegate:(id)delegate category:(id)category paymentSetupProducts:(id)products;
- (void)dealloc;
- (void)viewDidLoad;
- (void)provisioningControllerUpdatedProducts:(id)products;
- (void)searchTextDidChangeTo:(id)to;
- (void)searchBarCancelButtonClicked;
- (void)displayNoResultsViewWithSubtitle:(id)subtitle needsManualEntryButton:(BOOL)button;
- (void)hideNoResultsView;
- (BOOL)didSelectProduct:(id)product completion:(id /* block */)completion;
- (BOOL)didSelectManualEntryWithCompletion:(id /* block */)completion;
- (void)reloadSectionsRequired;
- (void)reloadSectionIdentifier:(id)identifier animated:(BOOL)animated;
- (void)reloadData;
- (void)_didSelectAddADifferentCard;
- (void)_didSelectAddADifferentCardWithCompletion:(id /* block */)completion;
- (unsigned long long)paymentSetupMarker;
- (void)showLoadingUI:(BOOL)ui animated:(BOOL)animated;
@end

#endif /* PKPaymentSetupProductsViewController_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupBankAppDisambiguationController_h
#define PKPaymentSetupBankAppDisambiguationController_h
@import Foundation;

#include "PKPaymentSetupListSectionController.h"
#include "PKPaymentSetupBankAppDisambiguationControllerDelegate-Protocol.h"

@class NSMutableArray, PKPaymentSetupProduct;

@interface PKPaymentSetupBankAppDisambiguationController : PKPaymentSetupListSectionController {
  /* instance variables */
  PKPaymentSetupProduct *_paymentSetupProduct;
  NSMutableArray *_inAppItemIdentifierToItemMapping;
  NSMutableArray *_cameraItemIdentifierToItemMapping;
}

@property (weak) NSObject<PKPaymentSetupBankAppDisambiguationControllerDelegate> *delegate;

/* instance methods */
- (id)initWithPaymentSetupProduct:(id)product;
- (id)snapshotWithPreviousSnapshot:(id)snapshot forSectionIdentifier:(id)identifier;
- (id)identifiers;
- (void)didSelectItem:(id)item;
- (id)_listItemWithName:(id)name;
- (void)_updateItemWithIdentifier:(id)identifier loadingIndicatorVisibility:(BOOL)visibility;
@end

#endif /* PKPaymentSetupBankAppDisambiguationController_h */

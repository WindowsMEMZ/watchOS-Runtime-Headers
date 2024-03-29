//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupProductsSectionController_h
#define PKPaymentSetupProductsSectionController_h
@import Foundation;

#include "PKPaymentSetupListSectionController.h"
#include "PKPaymentSetupProductsSectionControllerDelegate-Protocol.h"
#include "PKPaymentSetupProductsSectionListItem.h"

@class BOOL *, CLLocation, NSArray, NSCharacterSet, NSDictionary, NSLocale, NSMutableDictionary, NSString, PKPaymentProvisioningController;
@protocol OS_dispatch_queue;

@interface PKPaymentSetupProductsSectionController : PKPaymentSetupListSectionController {
  /* instance variables */
  PKPaymentProvisioningController *_provisioningController;
  PKPaymentSetupProductsSectionListItem *_addADifferentCardListItem;
  NSMutableDictionary *_itemIdentifierToItemMapping;
  NSDictionary *_sectionIdentifierToItemIdentifierMapping;
  NSArray *_orderedSectionIdentifiers;
  NSObject<OS_dispatch_queue> *_searchQueue;
  NSCharacterSet *_tokenizerCharacterSet;
  struct CGSize { double width; double height; } _iconSize;
  CLLocation *_cachedLocation;
  NSLocale *_currentLocale;
  NSString *_primaryRegion;
  NSString *_primaryCountryName;
  NSString *_secondaryRegion;
  NSString *_secondaryCountryName;
  BOOL _showSectionHeaders;
  BOOL _didHideLoadingIndicators;
}

@property (weak, nonatomic) NSObject<PKPaymentSetupProductsSectionControllerDelegate> *delegate;

/* instance methods */
- (id)initWithProvisoningController:(id)controller;
- (id)snapshotWithPreviousSnapshot:(id)snapshot forSectionIdentifier:(id)identifier;
- (id)identifiers;
- (id)layoutWithLayoutEnvironment:(id)environment sectionIdentifier:(id)identifier;
- (void)configureSupplementaryRegistration:(id)registration elementKind:(id)kind sectionIdentifier:(id)identifier;
- (id)decoratePaymentSetListCell:(id)cell forItem:(id)item;
- (void)didSelectItem:(id)item;
- (void)_updateItemWithIdentifier:(id)identifier loadingIndicatorVisibility:(BOOL)visibility animated:(BOOL)animated;
- (void)hideLoadingIndicatorsAnimated:(BOOL)animated;
- (void)applySearchString:(id)string;
- (BOOL)_needsManualEntryButton;
- (id)_sectionIdentifierForProduct:(id)product alwaysWantsHeaders:(BOOL *)headers wantsAddAdifferentCardButton:(BOOL *)button;
- (void)updateWithPaymentSetupProducts:(id)products;
- (id)_cleanedSearchTermsFromString:(id)string;
- (id)_listItemFromProduct:(id)product sectionIdentifier:(id)identifier;
@end

#endif /* PKPaymentSetupProductsSectionController_h */

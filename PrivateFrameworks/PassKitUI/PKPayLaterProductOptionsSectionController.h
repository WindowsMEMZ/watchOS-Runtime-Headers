//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPayLaterProductOptionsSectionController_h
#define PKPayLaterProductOptionsSectionController_h
@import Foundation;

#include "PKPayLaterSectionController.h"
#include "PKPayLaterProductOptionsSectionControllerDelegate-Protocol.h"
#include "PKPayLaterSetupFlowController.h"

@class NSArray, NSDictionary, NSNumberFormatter;

@interface PKPayLaterProductOptionsSectionController : PKPayLaterSectionController {
  /* instance variables */
  PKPayLaterSetupFlowController *_setupController;
  NSObject<PKPayLaterProductOptionsSectionControllerDelegate> *_delegate;
  NSNumberFormatter *_numberFormatter;
  BOOL _showAllOptions;
  NSArray *_sortedProductTypeSections;
  NSDictionary *_formattedIdentifiersByProductType;
}

/* instance methods */
- (id)initWithSetupFlowController:(id)controller dynamicContentPage:(id)page delegate:(id)delegate;
- (void)configureCellForRegistration:(id)registration item:(id)item;
- (id)layoutWithLayoutEnvironment:(id)environment sectionIdentifier:(id)identifier;
- (id)identifiers;
- (id)headerAttributedStringForIdentifier:(id)identifier;
- (id)footerContentForSectionIdentifier:(id)identifier;
- (id)snapshotWithPreviousSnapshot:(id)snapshot forSectionIdentifier:(id)identifier;
- (void)_configureProductSectionWithSectionIdentifier:(id)identifier snapshot:(id)snapshot;
- (void)_configureShowMoreOptionsButtonSectionWithSnapshot:(id)snapshot;
- (id)_productTileDetailRowForProductAssessment:(id)assessment installmentIndex:(long long)index;
- (id)_tileDetailRowWithTitle:(id)title subtitle:(id)subtitle text:(id)text detailText:(id)text textSubtitle:(id)subtitle customView:(id)view financingOption:(id)option preliminaryAssessment:(id)assessment;
- (long long)_productAssessmentInstallmentCount:(id)count;
- (id)_productAssessmentForSectionIdentifier:(id)identifier outIndex:(long long *)index;
@end

#endif /* PKPayLaterProductOptionsSectionController_h */

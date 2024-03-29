//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKCombinedSelectActionViewControllerListSectionController_h
#define PKCombinedSelectActionViewControllerListSectionController_h
@import Foundation;

#include "PKDynamicListSectionController.h"
#include "PKCombinedSelectActionViewControllerListSectionControllerDelegate-Protocol.h"

@class NSArray, PKPaymentPass, UICollectionViewCellRegistration;

@interface PKCombinedSelectActionViewControllerListSectionController : PKDynamicListSectionController {
  /* instance variables */
  NSArray *_actionViewModels;
  PKPaymentPass *_pass;
}

@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;
@property (weak, nonatomic) NSObject<PKCombinedSelectActionViewControllerListSectionControllerDelegate> *delegate;

/* instance methods */
- (id)initWithIdentifier:(id)identifier pass:(id)pass actions:(id)actions;
- (id)snapshotWithPreviousSnapshot:(id)snapshot forSectionIdentifier:(id)identifier;
- (void)didSelectItem:(id)item;
- (id)defaultListLayout;
- (id)layoutWithLayoutEnvironment:(id)environment sectionIdentifier:(id)identifier;
@end

#endif /* PKCombinedSelectActionViewControllerListSectionController_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDynamicListSectionController_h
#define PKDynamicListSectionController_h
@import Foundation;

#include "PKDynamicSectionController-Protocol.h"

@class NSArray, NSAttributedString, NSString, UICollectionViewCellRegistration;

@interface PKDynamicListSectionController : NSObject<PKDynamicSectionController>

@property (copy, nonatomic) NSArray *identifiers;
@property (copy, nonatomic) NSString *headerText;
@property (copy, nonatomic) NSString *footerText;
@property (copy, nonatomic) NSAttributedString *attributedHeaderText;
@property (copy, nonatomic) NSAttributedString *attributedFooterText;
@property (copy, nonatomic) id /* block */ leadingSwipeActionsConfigurationProvider;
@property (copy, nonatomic) id /* block */ trailingSwipeActionsConfigurationProvider;
@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)snapshotWithPreviousSnapshot:(id)snapshot forSectionIdentifier:(id)identifier;
- (id)layoutWithLayoutEnvironment:(id)environment sectionIdentifier:(id)identifier;
- (void)configureSupplementaryRegistration:(id)registration elementKind:(id)kind sectionIdentifier:(id)identifier;
@end

#endif /* PKDynamicListSectionController_h */

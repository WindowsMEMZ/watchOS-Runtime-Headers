//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPaymentApplicationDetailCollectionViewSectionProvider_h
#define NPKPaymentApplicationDetailCollectionViewSectionProvider_h
@import Foundation;

#include "NPKCardInformationDetailCollectionViewSectionProvider.h"

@interface NPKPaymentApplicationDetailCollectionViewSectionProvider : NPKCardInformationDetailCollectionViewSectionProvider
/* instance methods */
- (id)sectionIdentifiers;
- (id)itemsForSectionWithIdentifier:(id)identifier;
- (id)titleForSectionWithIdentifier:(id)identifier;
- (id)footerTextForSectionWithIdentifier:(id)identifier;
- (void)_updateWithConfiguration:(id)configuration previousConfiguration:(id)configuration;
@end

#endif /* NPKPaymentApplicationDetailCollectionViewSectionProvider_h */

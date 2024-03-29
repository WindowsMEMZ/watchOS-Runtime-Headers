//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupCategoriesListItem_h
#define PKPaymentSetupCategoriesListItem_h
@import Foundation;

#include "PKPaymentSetupListItem.h"
#include "NSCopying-Protocol.h"

@class NSString, PKPaymentSetupProductCategory;

@interface PKPaymentSetupCategoriesListItem : PKPaymentSetupListItem<NSCopying>

@property (retain, nonatomic) PKPaymentSetupProductCategory *category;
@property (nonatomic) unsigned long long isLoadingIcon;
@property (retain, nonatomic) NSString *sectionIdentifier;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* PKPaymentSetupCategoriesListItem_h */

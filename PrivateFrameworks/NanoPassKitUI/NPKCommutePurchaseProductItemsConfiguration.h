//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKCommutePurchaseProductItemsConfiguration_h
#define NPKCommutePurchaseProductItemsConfiguration_h
@import Foundation;

#include "NPKPassDetailSectionProviderConfiguration.h"

@class NSArray, PKPaymentPassAction;

@interface NPKCommutePurchaseProductItemsConfiguration : NPKPassDetailSectionProviderConfiguration

@property (weak, nonatomic) PKPaymentPassAction *action;
@property (weak, nonatomic) NSArray *productItems;

/* instance methods */
- (id)initWithPass:(id)pass action:(id)action productItems:(id)items;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)configurationByApplyingConfiguration:(id)configuration;
@end

#endif /* NPKCommutePurchaseProductItemsConfiguration_h */

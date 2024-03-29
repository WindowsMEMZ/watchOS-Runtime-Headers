//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKCommutePurchaseProductViewController_h
#define NPKCommutePurchaseProductViewController_h
@import Foundation;

#include "NPKListCollectionViewController.h"
#include "NPKCommutePurchaseProductSectionProviderProtocol-Protocol.h"
#include "NPKSpinnerView.h"

@class NSString;

@interface NPKCommutePurchaseProductViewController : NPKListCollectionViewController<NPKCommutePurchaseProductSectionProviderProtocol> {
  /* instance variables */
  NPKSpinnerView *_spinnerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)sectionProviderConfigurationClass;
+ (id)sectionProviderClassesWithConfiguration:(id)configuration;

/* instance methods */
- (void)viewDidLoad;
- (void)_addSubviews;
- (void)_addConstraints;
- (void)sectionProviderDidLoadProducts:(id)products;
@end

#endif /* NPKCommutePurchaseProductViewController_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupProductModel_h
#define PKPaymentSetupProductModel_h
@import Foundation;

@class NSMutableArray, NSMutableDictionary, NSString;

@interface PKPaymentSetupProductModel : NSObject {
  /* instance variables */
  NSMutableDictionary *_paymentSetupProducts;
  NSMutableArray *_allSections;
}

@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;

/* instance methods */
- (id)init;
- (id)allSections;
- (void)setAllSections:(id)sections;
- (void)updatePaymentSetupProducts:(id)products;
- (void)removePaymentSetupProducts:(id)products;
- (void)setPaymentSetupProducts:(id)products;
- (id)allSetupProducts;
- (id)productForProductIdentifier:(id)identifier;
- (id)setupProductsOfType:(unsigned long long)type;
- (id)productsForProductIdentifiers:(id)identifiers;
- (id)availableProductsForProductIdentifiers:(id)identifiers;
- (id)productsForFeatureIdentifier:(unsigned long long)identifier;
- (id)availableProductsForFeatureIdentifier:(unsigned long long)identifier;
- (void)updateWithPaymentSetupProductsResponse:(id)response productsFilter:(id /* block */)filter sectionsFilter:(id /* block */)filter;
- (void)addManualEntrySection:(id /* block */)section;
- (void)addCarKeyCategory;
- (void)removeCarKeyCategory;
- (id)filteredPaymentSetupProductModel:(id)model mobileCarrierRegion:(id)region deviceRegion:(id)region cardOnFiles:(id)files;
- (id)_paymentSetupProductsWithPartners:(id)partners products:(id)products existingPaymentSetupProducts:(id)products;
- (void)_updatePaymentSetupProduct:(id)product displayName:(id)name localizedDescription:(id)description partnerDictionary:(id)dictionary productIdentifier:(id)identifier paymentOptions:(id)options termsURL:(id)url provisioningMethods:(id)methods readerModeMetadata:(id)metadata requiredFields:(id)fields imageAssets:(id)assets minimumOSVersion:(id)osversion region:(id)region regionData:(id)data hsa2Requirement:(id)requirement suppressPendingPurchases:(id)purchases supportedTransitNetworkIdentifiers:(id)identifiers onboardingItems:(id)items actionBaseURL:(id)url productState:(id)state minimumProductAge:(id)age maximumProductAge:(id)age minimumTargetUserSupportedAge:(id)age associatedStoreIdentifiers:(id)identifiers appLaunchURL:(id)url regionIdentifier:(id)identifier type:(id)type localizedNotificationTitle:(id)title localizedNotificationMessage:(id)message discoveryCardIdentifier:(id)identifier clientInfo:(id)info searchTerms:(id)terms featureIdentifier:(id)identifier;
- (id)description;
@end

#endif /* PKPaymentSetupProductModel_h */

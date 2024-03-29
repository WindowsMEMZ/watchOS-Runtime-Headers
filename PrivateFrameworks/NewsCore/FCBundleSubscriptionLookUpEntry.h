//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCBundleSubscriptionLookUpEntry_h
#define FCBundleSubscriptionLookUpEntry_h
@import Foundation;

@class NSArray, NSDate, NSNumber, NSString;

@interface FCBundleSubscriptionLookUpEntry : NSObject

@property (nonatomic) unsigned long long purchaseValidationState;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *bundleChannelIDs;
@property (copy, nonatomic) NSString *bundleChannelIDsVersion;
@property (copy, nonatomic) NSString *purchaseID;
@property (copy, nonatomic) NSString *servicesBundlePurchaseID;
@property (copy, nonatomic) NSDate *dateOfExpiration;
@property (copy, nonatomic) NSNumber *initialPurchaseTimestamp;
@property (nonatomic) BOOL hasShownRenewalNotice;
@property (nonatomic) BOOL inTrialPeriod;
@property (nonatomic) BOOL isPurchaser;
@property (nonatomic) BOOL isAmplifyUser;
@property (nonatomic) BOOL isPaidBundleViaOfferActivated;

/* instance methods */
- (id)initWithEntryID:(id)id bundleChannelIDs:(id)ids bundleChannelIDsVersion:(id)version purchaseID:(id)id purchaseValidationState:(unsigned long long)state dateOfExpiration:(id)expiration hasShownRenewalNotice:(BOOL)notice inTrialPeriod:(BOOL)period isPurchaser:(BOOL)purchaser servicesBundlePurchaseID:(id)id isAmplifyUser:(BOOL)user isPaidBundleViaOfferActivated:(BOOL)activated initialPurchaseTimestamp:(id)timestamp;
- (id)initWithEntryID:(id)id dictionaryRepresentation:(id)representation;
- (id)dictionaryRepresentation;
- (id)bundleSubscription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* FCBundleSubscriptionLookUpEntry_h */

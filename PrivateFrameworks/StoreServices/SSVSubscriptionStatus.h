//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSVSubscriptionStatus_h
#define SSVSubscriptionStatus_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "SSXPCCoding-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface SSVSubscriptionStatus : NSObject<SSXPCCoding, NSCopying> {
  /* instance variables */
  double _subscriptionExpirationTime;
}

@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSArray *accountPermissions;
@property (nonatomic) long long accountStatus;
@property (nonatomic) unsigned long long acceptedStoreTermsVersion;
@property (nonatomic) long long carrierBundlingStatus;
@property (nonatomic) long long carrierBundlingErrorCode;
@property (copy, nonatomic) NSString *cellularOperatorName;
@property (nonatomic) BOOL discoveryModeEligible;
@property (nonatomic) BOOL familyOrganizer;
@property (nonatomic) BOOL familySubscription;
@property (nonatomic) BOOL freeTrialIneligible;
@property (nonatomic) BOOL hasFamily;
@property (nonatomic) BOOL hasFamilyMembers;
@property (nonatomic) BOOL hasOfflineSlots;
@property (nonatomic) unsigned long long latestStoreTermsVersion;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSDictionary *rawResponseData;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (nonatomic) BOOL subscribed;
@property (copy, nonatomic) NSDate *subscriptionExpirationDate;
@property (nonatomic) BOOL subscriptionPurchaser;
@property (readonly, nonatomic) BOOL hasOfflineSlot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)isSubscribed;
- (id)initWithUserDefaultsRepresentation:(id)representation;
- (id)copyUserDefaultsRepresentation;
- (void)resetAccountBasedProperties;
- (void)resetCarrierBundlingProperties;
- (void)setValuesUsingStatusDictionary:(id)dictionary;
- (BOOL)isEqualToStatus:(id)status;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithXPCEncoding:(id)xpcencoding;
- (id)copyXPCEncoding;
- (void)_setSubscribed:(BOOL)subscribed;
- (BOOL)isDiscoveryModeEligible;
- (BOOL)isFamilyOrganizer;
- (BOOL)isFamilySubscription;
- (BOOL)isFreeTrialIneligible;
- (BOOL)isSubscriptionPurchaser;
@end

#endif /* SSVSubscriptionStatus_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef EDAMUser_h
#define EDAMUser_h
@import Foundation;

#include "FATObject.h"
#include "EDAMAccountLimits.h"
#include "EDAMAccounting.h"
#include "EDAMBusinessUserInfo.h"
#include "EDAMPremiumInfo.h"
#include "EDAMPricingModel.h"
#include "EDAMSubscriptionInfo.h"
#include "EDAMUserAttributes.h"

@class NSNumber, NSString;

@interface EDAMUser : FATObject

@property (retain, nonatomic) NSNumber *id;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *timezone;
@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) NSNumber *serviceLevel;
@property (retain, nonatomic) NSNumber *created;
@property (retain, nonatomic) NSNumber *updated;
@property (retain, nonatomic) NSNumber *deleted;
@property (retain, nonatomic) NSNumber *active;
@property (retain, nonatomic) NSString *shardId;
@property (retain, nonatomic) EDAMUserAttributes *attributes;
@property (retain, nonatomic) EDAMAccounting *accounting;
@property (retain, nonatomic) EDAMPremiumInfo *premiumInfo;
@property (retain, nonatomic) EDAMBusinessUserInfo *businessUserInfo;
@property (retain, nonatomic) NSString *photoUrl;
@property (retain, nonatomic) NSNumber *photoLastUpdated;
@property (retain, nonatomic) EDAMAccountLimits *accountLimits;
@property (retain, nonatomic) EDAMSubscriptionInfo *subscriptionInfo;
@property (retain, nonatomic) EDAMPricingModel *pricingModel;

/* class methods */
+ (id)structName;
+ (id)structFields;

/* instance methods */
@end

#endif /* EDAMUser_h */

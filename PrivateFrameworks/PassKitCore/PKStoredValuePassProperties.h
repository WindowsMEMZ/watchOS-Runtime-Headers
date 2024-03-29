//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKStoredValuePassProperties_h
#define PKStoredValuePassProperties_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PKCurrencyAmount.h"

@class NSArray, NSDate, NSDecimalNumber, NSString;

@interface PKStoredValuePassProperties : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSString *appletFormat;
@property (readonly, copy, nonatomic) NSDecimalNumber *balance;
@property (copy, nonatomic) PKCurrencyAmount *balanceAmount;
@property (copy, nonatomic) NSArray *balances;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) BOOL blocked;
@property (nonatomic) BOOL inStation;
@property (readonly, nonatomic) NSString *displayableBalance;
@property (readonly, nonatomic) NSString *displayableTransitBalance;
@property (readonly, nonatomic) NSDecimalNumber *decimalTransitBalance;
@property (readonly, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSArray *enrouteTransitTypes;
@property (readonly, nonatomic) BOOL isEnRoute;
@property (readonly, nonatomic) BOOL blacklisted;

/* class methods */
+ (id)passPropertiesForPass:(id)pass;
+ (Class)equalityClass;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTransitAppletState:(id)state paymentApplication:(id)application fieldCollection:(id)collection;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)decimalBalance;
- (BOOL)isInStation;
- (BOOL)isBlacklisted;
- (id)balanceWithIdentifier:(id)identifier;
- (id)primaryCashBalance;
- (BOOL)isBlocked;
@end

#endif /* PKStoredValuePassProperties_h */

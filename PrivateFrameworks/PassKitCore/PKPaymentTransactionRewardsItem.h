//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentTransactionRewardsItem_h
#define PKPaymentTransactionRewardsItem_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PKCurrencyAmount.h"

@class NSDecimalNumber, NSString;

@interface PKPaymentTransactionRewardsItem : NSObject<NSSecureCoding, NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) PKCurrencyAmount *currencyAmount;
@property (retain, nonatomic) NSDecimalNumber *eligibleValue;
@property (nonatomic) unsigned long long eligibleValueUnit;
@property (retain, nonatomic) NSString *promotionName;
@property (retain, nonatomic) NSString *promotionIdentifier;
@property (retain, nonatomic) NSString *programIdentifier;
@property (nonatomic) BOOL hasEnhancedMerchantProgramIdentifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (void)_initWithRewardsDictionary:(id)dictionary;
- (id)jsonDictionaryRepresentation;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToRewardsItem:(id)item;
- (id)description;
@end

#endif /* PKPaymentTransactionRewardsItem_h */

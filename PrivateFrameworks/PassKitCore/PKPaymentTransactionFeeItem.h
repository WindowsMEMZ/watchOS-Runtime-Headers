//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentTransactionFeeItem_h
#define PKPaymentTransactionFeeItem_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PKCurrencyAmount.h"

@class NSString;

@interface PKPaymentTransactionFeeItem : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) PKCurrencyAmount *currencyAmount;
@property (copy, nonatomic) NSString *localizedDisplayName;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithFeeDictionary:(id)dictionary;
- (void)_initWithFeeDictionary:(id)dictionary;
- (id)jsonDictionaryRepresentation;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToFeeItem:(id)item;
- (id)description;
@end

#endif /* PKPaymentTransactionFeeItem_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentInstallmentItem_h
#define PKPaymentInstallmentItem_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDecimalNumber, NSString;

@interface PKPaymentInstallmentItem : NSObject<NSSecureCoding>

@property (nonatomic) long long installmentItemType;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSString *programIdentifier;
@property (copy, nonatomic) NSDecimalNumber *apr;
@property (copy, nonatomic) NSString *programTerms;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToInstallmentItem:(id)item;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* PKPaymentInstallmentItem_h */

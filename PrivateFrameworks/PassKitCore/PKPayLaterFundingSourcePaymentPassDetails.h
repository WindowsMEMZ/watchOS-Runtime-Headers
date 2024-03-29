//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPayLaterFundingSourcePaymentPassDetails_h
#define PKPayLaterFundingSourcePaymentPassDetails_h
@import Foundation;

#include "PKPayLaterFundingSourceDetails-Protocol.h"

@class NSString;

@interface PKPayLaterFundingSourcePaymentPassDetails : NSObject<PKPayLaterFundingSourceDetails>

@property (copy, nonatomic) NSString *dpanIdentifier;
@property (copy, nonatomic) NSString *fpanIdentifier;
@property (nonatomic) long long cardNetwork;
@property (nonatomic) unsigned long long cardType;
@property (copy, nonatomic) NSString *cardName;
@property (copy, nonatomic) NSString *cardSuffix;
@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary type:(unsigned long long)type;
- (id)initWithPaymentPass:(id)pass paymentApplication:(id)application;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToDetails:(id)details;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* PKPayLaterFundingSourcePaymentPassDetails_h */

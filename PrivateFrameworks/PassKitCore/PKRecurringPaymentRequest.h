//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKRecurringPaymentRequest_h
#define PKRecurringPaymentRequest_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PKRecurringPaymentSummaryItem.h"

@class NSString, NSURL;

@interface PKRecurringPaymentRequest : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSString *paymentDescription;
@property (retain, nonatomic) PKRecurringPaymentSummaryItem *regularBilling;
@property (retain, nonatomic) PKRecurringPaymentSummaryItem *trialBilling;
@property (copy, nonatomic) NSString *billingAgreement;
@property (retain, nonatomic) NSURL *managementURL;
@property (retain, nonatomic) NSURL *tokenNotificationURL;

/* class methods */
+ (id)recurringPaymentRequestWithProtobuf:(id)protobuf;
+ (long long)version;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)protobuf;
- (id)initWithPaymentDescription:(id)description regularBilling:(id)billing managementURL:(id)url;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToRecurringPaymentRequest:(id)request;
- (void)sanitize;
- (id)initWithDictionary:(id)dictionary error:(id *)error;
- (id)dictionaryRepresentation;
@end

#endif /* PKRecurringPaymentRequest_h */

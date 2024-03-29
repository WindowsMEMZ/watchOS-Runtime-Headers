//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDeferredPaymentRequest_h
#define PKDeferredPaymentRequest_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PKDeferredPaymentSummaryItem.h"

@class NSDate, NSString, NSTimeZone, NSURL;

@interface PKDeferredPaymentRequest : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSString *paymentDescription;
@property (retain, nonatomic) PKDeferredPaymentSummaryItem *deferredBilling;
@property (copy, nonatomic) NSString *billingAgreement;
@property (retain, nonatomic) NSURL *managementURL;
@property (retain, nonatomic) NSURL *tokenNotificationURL;
@property (retain, nonatomic) NSDate *freeCancellationDate;
@property (retain, nonatomic) NSTimeZone *freeCancellationDateTimeZone;

/* class methods */
+ (id)deferredPaymentRequestWithProtobuf:(id)protobuf;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)protobuf;
- (id)initWithPaymentDescription:(id)description deferredBilling:(id)billing managementURL:(id)url;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToDeferredPaymentRequest:(id)request;
- (void)sanitize;
@end

#endif /* PKDeferredPaymentRequest_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentClientUpdate_h
#define PKPaymentClientUpdate_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PKAutomaticReloadPaymentRequest.h"
#include "PKDeferredPaymentRequest.h"
#include "PKRecurringPaymentRequest.h"
#include "PKShippingMethods.h"

@class NSArray, NSString;

@interface PKPaymentClientUpdate : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSArray *paymentSummaryItems;
@property (readonly, copy, nonatomic) PKShippingMethods *shippingMethods;
@property (readonly, copy, nonatomic) NSArray *multiTokenContexts;
@property (readonly, nonatomic) PKRecurringPaymentRequest *recurringPaymentRequest;
@property (readonly, nonatomic) PKAutomaticReloadPaymentRequest *automaticReloadPaymentRequest;
@property (readonly, nonatomic) PKDeferredPaymentRequest *deferredPaymentRequest;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSString *selectedAID;
@property (readonly, nonatomic) unsigned long long selectedPaymentMethodType;

/* class methods */
+ (id)paymentUpdateResponseWithProtobuf:(id)protobuf;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)protobuf;
- (id)initWithPaymentSummaryItems:(id)items shippingMethods:(id)methods multiTokenContexts:(id)contexts recurringPaymentRequest:(id)request automaticReloadPaymentRequest:(id)request deferredPaymentRequest:(id)request status:(long long)status selectedAID:(id)aid selectedPaymentMethodType:(unsigned long long)type;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* PKPaymentClientUpdate_h */

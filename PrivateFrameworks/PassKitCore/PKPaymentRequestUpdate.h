//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentRequestUpdate_h
#define PKPaymentRequestUpdate_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PKAutomaticReloadPaymentRequest.h"
#include "PKDeferredPaymentRequest.h"
#include "PKRecurringPaymentRequest.h"
#include "PKShippingMethods.h"

@class NSArray;

@interface PKPaymentRequestUpdate : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSArray *contentItems;
@property (copy, nonatomic) PKShippingMethods *availableShippingMethods;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSArray *paymentSummaryItems;
@property (copy, nonatomic) NSArray *shippingMethods;
@property (copy, nonatomic) NSArray *multiTokenContexts;
@property (retain, nonatomic) PKRecurringPaymentRequest *recurringPaymentRequest;
@property (retain, nonatomic) PKAutomaticReloadPaymentRequest *automaticReloadPaymentRequest;
@property (retain, nonatomic) PKDeferredPaymentRequest *deferredPaymentRequest;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPaymentSummaryItems:(id)items;
- (id)initWithCoder:(id)coder;
- (id)init;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* PKPaymentRequestUpdate_h */

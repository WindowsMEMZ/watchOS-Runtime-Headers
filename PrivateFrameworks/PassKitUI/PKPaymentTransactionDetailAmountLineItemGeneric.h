//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentTransactionDetailAmountLineItemGeneric_h
#define PKPaymentTransactionDetailAmountLineItemGeneric_h
@import Foundation;

#include "PKPaymentTransactionDetailAmountLineItem-Protocol.h"

@class NSString;

@interface PKPaymentTransactionDetailAmountLineItemGeneric : NSObject<PKPaymentTransactionDetailAmountLineItem>

@property (nonatomic) BOOL hasTrailingLineSeperator;
@property (nonatomic) BOOL isEmphasized;
@property (readonly, nonatomic) unsigned long long lineItemType;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLabel:(id)label value:(id)value;
@end

#endif /* PKPaymentTransactionDetailAmountLineItemGeneric_h */

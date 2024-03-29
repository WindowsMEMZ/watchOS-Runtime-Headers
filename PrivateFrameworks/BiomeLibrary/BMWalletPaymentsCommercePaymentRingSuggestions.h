//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMWalletPaymentsCommercePaymentRingSuggestions_h
#define BMWalletPaymentsCommercePaymentRingSuggestions_h
@import Foundation;

#include "BMEventBase.h"
#include "BMStoreData-Protocol.h"

@class NSString;

@interface BMWalletPaymentsCommercePaymentRingSuggestions : BMEventBase<BMStoreData>

@property (readonly, nonatomic) int accountState;
@property (readonly, nonatomic) int paidUsingRing;
@property (readonly, nonatomic) int lastPaymentCategory;
@property (readonly, nonatomic) int paymentAction;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eventWithData:(id)data dataVersion:(unsigned int)version;
+ (id)columns;
+ (id)validKeyPaths;

/* instance methods */
- (id)initWithAccountState:(int)state paidUsingRing:(int)ring lastPaymentCategory:(int)category paymentAction:(int)action;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMWalletPaymentsCommercePaymentRingSuggestions_h */

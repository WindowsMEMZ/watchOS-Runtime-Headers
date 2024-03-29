//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentAuthorizationRewrapStateParam_h
#define PKPaymentAuthorizationRewrapStateParam_h
@import Foundation;

#include "PKPaymentAuthorizationStateParam.h"
#include "PKWrappedPayment.h"

@class NSData;

@interface PKPaymentAuthorizationRewrapStateParam : PKPaymentAuthorizationStateParam

@property (retain, nonatomic) PKWrappedPayment *wrappedPayment;
@property (retain, nonatomic) NSData *nonceData;
@property (retain, nonatomic) NSData *credential;
@property (nonatomic) long long cryptogramType;

/* class methods */
+ (id)paramWithWrappedPayment:(id)payment nonce:(id)nonce credential:(id)credential cryptogramType:(long long)type;

/* instance methods */
- (id)description;
@end

#endif /* PKPaymentAuthorizationRewrapStateParam_h */

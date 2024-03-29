//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentAuthorizationNonceStateParam_h
#define PKPaymentAuthorizationNonceStateParam_h
@import Foundation;

#include "PKPaymentAuthorizationStateParam.h"
#include "PKAuthenticatorEvaluationResponse.h"

@class NSData;

@interface PKPaymentAuthorizationNonceStateParam : PKPaymentAuthorizationStateParam

@property (retain, nonatomic) NSData *credential;
@property (retain, nonatomic) PKAuthenticatorEvaluationResponse *evaluationResponse;

/* class methods */
+ (id)paramWithCredential:(id)credential;
+ (id)paramWithAuthenticatorEvaluationResponse:(id)response;

/* instance methods */
- (id)description;
@end

#endif /* PKPaymentAuthorizationNonceStateParam_h */

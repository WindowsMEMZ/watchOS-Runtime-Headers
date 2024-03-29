//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef _PaymentSheetState_h
#define _PaymentSheetState_h
@import Foundation;

#include "AMSBiometricsSignatureResult.h"

@class NSError, NSString;

@interface _PaymentSheetState : NSObject

@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL didAuthorizePayment;
@property (nonatomic) BOOL didBiometricsLockout;
@property (nonatomic) unsigned long long cancellationType;
@property (nonatomic) BOOL didPresent;
@property (retain, nonatomic) NSString *passwordEquivalentToken;
@property (retain, nonatomic) NSString *paymentToken;
@property (retain, nonatomic) AMSBiometricsSignatureResult *signatureResult;

/* instance methods */
- (id)init;
@end

#endif /* _PaymentSheetState_h */

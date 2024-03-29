//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPayLaterPassPaymentSource_h
#define PKPayLaterPassPaymentSource_h
@import Foundation;

#include "PKPayLaterPaymentSource.h"
#include "NSSecureCoding-Protocol.h"
#include "PKPaymentApplication.h"
#include "PKPaymentPass.h"

@interface PKPayLaterPassPaymentSource : PKPayLaterPaymentSource<NSSecureCoding>

@property (readonly, nonatomic) PKPaymentPass *paymentPass;
@property (readonly, nonatomic) PKPaymentApplication *paymentApplication;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPaymentPass:(id)pass paymentApplication:(id)application;
- (unsigned long long)type;
- (id)identifier;
- (id)name;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* PKPayLaterPassPaymentSource_h */

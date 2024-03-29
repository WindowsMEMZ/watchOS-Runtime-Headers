//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPayLaterBankPaymentSource_h
#define PKPayLaterBankPaymentSource_h
@import Foundation;

#include "PKPayLaterPaymentSource.h"
#include "NSSecureCoding-Protocol.h"
#include "PKAccountPaymentFundingSource.h"

@interface PKPayLaterBankPaymentSource : PKPayLaterPaymentSource<NSSecureCoding>

@property (readonly, nonatomic) PKAccountPaymentFundingSource *accountPaymentFundingSource;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAccountPaymentFundingSource:(id)source;
- (unsigned long long)type;
- (id)identifier;
- (id)name;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* PKPayLaterBankPaymentSource_h */

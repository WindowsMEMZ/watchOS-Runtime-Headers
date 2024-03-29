//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupRequest_h
#define PKPaymentSetupRequest_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PKPaymentSetupConfiguration.h"

@class NSArray;

@interface PKPaymentSetupRequest : NSObject<NSSecureCoding>

@property (retain, nonatomic) PKPaymentSetupConfiguration *configuration;
@property (retain, nonatomic) NSArray *paymentSetupFeatures;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* PKPaymentSetupRequest_h */

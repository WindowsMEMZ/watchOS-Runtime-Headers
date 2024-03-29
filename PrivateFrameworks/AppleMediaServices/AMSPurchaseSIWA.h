//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSPurchaseSIWA_h
#define AMSPurchaseSIWA_h
@import Foundation;

#include "AMSPurchase.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class AKAppleIDAuthenticationContext, NSString;

@interface AMSPurchaseSIWA : AMSPurchase<NSCopying, NSSecureCoding>

@property (retain, nonatomic) AKAppleIDAuthenticationContext *authenticationContext;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *teamID;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPurchaseType:(long long)type buyParams:(id)params;
- (id)authenticationContextForRequest:(id)request;
- (id)appProvidedData;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* AMSPurchaseSIWA_h */

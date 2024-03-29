//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 320.100.1.0.0
//
#ifndef TPSSetCallForwardingRequest_h
#define TPSSetCallForwardingRequest_h
@import Foundation;

#include "TPSRequest.h"

@class CTCallForwardingValue;

@interface TPSSetCallForwardingRequest : TPSRequest

@property (readonly, nonatomic) CTCallForwardingValue *value;

/* class methods */
+ (id)unarchivedObjectClasses;

/* instance methods */
- (id)initWithSubscriptionContext:(id)context;
- (id)initWithSubscriptionContext:(id)context value:(id)value;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToRequest:(id)request;
@end

#endif /* TPSSetCallForwardingRequest_h */

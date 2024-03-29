//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICDelegationConsumerServiceRequest_h
#define ICDelegationConsumerServiceRequest_h
@import Foundation;

#include "ICRequestContext.h"

@class NSDictionary;

@interface ICDelegationConsumerServiceRequest : NSObject

@property (readonly, copy, nonatomic) ICRequestContext *requestContext;
@property (readonly, nonatomic) double timeoutInterval;
@property (readonly, copy, nonatomic) NSDictionary *userIdentityDelegationAccountUUIDs;

/* instance methods */
- (id)initWithUserIdentityDelegationAccountUUIDs:(id)uuids requestContext:(id)context timeoutInterval:(double)interval;
@end

#endif /* ICDelegationConsumerServiceRequest_h */

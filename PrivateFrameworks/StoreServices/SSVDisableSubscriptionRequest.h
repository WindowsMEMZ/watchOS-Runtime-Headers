//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSVDisableSubscriptionRequest_h
#define SSVDisableSubscriptionRequest_h
@import Foundation;

#include "SSRequest.h"
#include "SSAuthenticationContext.h"
#include "SSXPCCoding-Protocol.h"

@class NSString;

@interface SSVDisableSubscriptionRequest : SSRequest<SSXPCCoding>

@property (copy, nonatomic) SSAuthenticationContext *authenticationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)startWithCompletionBlock:(id /* block */)block;
- (id)initWithXPCEncoding:(id)xpcencoding;
- (id)copyXPCEncoding;
@end

#endif /* SSVDisableSubscriptionRequest_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentNonceResponse_h
#define PKPaymentNonceResponse_h
@import Foundation;

#include "PKPaymentAugmentBaseResponse.h"

@class NSData;

@interface PKPaymentNonceResponse : PKPaymentAugmentBaseResponse

@property (copy, nonatomic) NSData *nonceData;

/* instance methods */
- (id)initWithData:(id)data;
@end

#endif /* PKPaymentNonceResponse_h */

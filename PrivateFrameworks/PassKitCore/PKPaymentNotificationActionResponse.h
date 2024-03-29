//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentNotificationActionResponse_h
#define PKPaymentNotificationActionResponse_h
@import Foundation;

#include "PKPaymentWebServiceResponse.h"

@class NSDictionary, NSString;

@interface PKPaymentNotificationActionResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSDictionary *aps;
@property (readonly, copy, nonatomic) NSString *action;
@property (readonly, copy, nonatomic) NSString *requestID;

/* instance methods */
- (id)initWithData:(id)data;
@end

#endif /* PKPaymentNotificationActionResponse_h */

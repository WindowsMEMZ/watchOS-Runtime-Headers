//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentDeleteRequest_h
#define PKPaymentDeleteRequest_h
@import Foundation;

#include "PKPaymentWebServiceRequest.h"
#include "PKPaymentPass.h"

@interface PKPaymentDeleteRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKPaymentPass *pass;

/* instance methods */
- (id)initWithPaymentPass:(id)pass;
- (id)_urlRequestWithServiceURL:(id)url appleAccountInformation:(id)information;
@end

#endif /* PKPaymentDeleteRequest_h */

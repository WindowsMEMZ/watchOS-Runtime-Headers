//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentWebServicePaginatedRequest_h
#define PKPaymentWebServicePaginatedRequest_h
@import Foundation;

#include "PKPaymentWebServiceRequest.h"
#include "PKPaginatedWebServiceResponse.h"

@class NSDate, NSNumber;

@interface PKPaymentWebServicePaginatedRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKPaginatedWebServiceResponse *lastPageResponse;
@property (copy, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSNumber *limit;

/* instance methods */
@end

#endif /* PKPaymentWebServicePaginatedRequest_h */

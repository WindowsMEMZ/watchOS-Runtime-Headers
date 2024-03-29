//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountWebServiceAccountsResponse_h
#define PKAccountWebServiceAccountsResponse_h
@import Foundation;

#include "PKAccountWebServiceResponse.h"
#include "PKFeatureFailureCollection.h"

@class NSArray, NSString;

@interface PKAccountWebServiceAccountsResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *accounts;
@property (readonly, nonatomic) PKFeatureFailureCollection *featureFailures;
@property (readonly, copy, nonatomic) NSString *lastUpdated;

/* instance methods */
- (id)initWithData:(id)data;
@end

#endif /* PKAccountWebServiceAccountsResponse_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountWebServiceAddFundingSourceResponse_h
#define PKAccountWebServiceAddFundingSourceResponse_h
@import Foundation;

#include "PKAccountWebServiceResponse.h"
#include "PKAccountPaymentFundingSource.h"
#include "PKApplyVerificationPage.h"

@interface PKAccountWebServiceAddFundingSourceResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) PKAccountPaymentFundingSource *fundingSource;
@property (readonly, copy, nonatomic) PKApplyVerificationPage *confirmationPage;

/* instance methods */
- (id)initWithData:(id)data;
@end

#endif /* PKAccountWebServiceAddFundingSourceResponse_h */

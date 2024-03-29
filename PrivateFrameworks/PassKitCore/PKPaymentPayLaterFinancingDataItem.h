//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentPayLaterFinancingDataItem_h
#define PKPaymentPayLaterFinancingDataItem_h
@import Foundation;

#include "PKPaymentDataItem.h"
#include "PKPayLaterFinancingOption.h"
#include "PKPayLaterProductAssessmentCollection.h"

@interface PKPaymentPayLaterFinancingDataItem : PKPaymentDataItem

@property (readonly, nonatomic) PKPayLaterFinancingOption *selectedFinancingOption;
@property (readonly, nonatomic) PKPayLaterFinancingOption *previouslySelectedFinancingOption;
@property (readonly, nonatomic) PKPayLaterProductAssessmentCollection *assessmentCollection;

/* class methods */
+ (long long)dataType;

/* instance methods */
- (long long)context;
- (BOOL)isValidWithError:(id *)error;
- (BOOL)isValidWithError:(id *)error errorStatus:(long long *)status;
- (BOOL)requiresBillingAddress;
- (id)billingAddress;
- (id)errors;
- (id)paymentContactFormatErrors;
@end

#endif /* PKPaymentPayLaterFinancingDataItem_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSCardEnrollmentEligibilityTask_h
#define AMSCardEnrollmentEligibilityTask_h
@import Foundation;

#include "AMSTask.h"
#include "AMSBagProtocol-Protocol.h"

@class NSString;

@interface AMSCardEnrollmentEligibilityTask : AMSTask

@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag;
@property (readonly, copy, nonatomic) NSString *countryCode;

/* instance methods */
- (id)init;
- (id)initWithBag:(id)bag;
- (id)initWithCountryCode:(id)code;
- (id)initWithBag:(id)bag countryCode:(id)code;
- (void)canWriteBillingInfoWithPassTypeIdentifier:(id)identifier serialNumber:(id)number completion:(id /* block */)completion;
- (id)performCanWriteBillingInfoQueryWithPassTypeIdentifier:(id)identifier serialNumber:(id)number;
- (unsigned long long)_cardTypeForPassTypeIdentifier:(id)identifier serialNumber:(id)number;
- (id)_performSilentEnrollmentCheckWithRequest:(id)request;
@end

#endif /* AMSCardEnrollmentEligibilityTask_h */

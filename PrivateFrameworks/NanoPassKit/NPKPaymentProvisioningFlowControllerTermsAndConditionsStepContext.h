//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPaymentProvisioningFlowControllerTermsAndConditionsStepContext_h
#define NPKPaymentProvisioningFlowControllerTermsAndConditionsStepContext_h
@import Foundation;

#include "NPKPaymentProvisioningFlowStepContext.h"

@class NSURL, PKPaymentSetupProduct;

@interface NPKPaymentProvisioningFlowControllerTermsAndConditionsStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) PKPaymentSetupProduct *product;
@property (retain, nonatomic) NSURL *termsURL;
@property (nonatomic) BOOL allowNonSecureHTTP;

/* instance methods */
- (id)initWithRequestContext:(id)context;
- (id)description;
@end

#endif /* NPKPaymentProvisioningFlowControllerTermsAndConditionsStepContext_h */

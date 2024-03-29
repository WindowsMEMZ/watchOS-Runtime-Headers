//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPaymentProvisioningFlowControllerReaderModeEntryStepContext_h
#define NPKPaymentProvisioningFlowControllerReaderModeEntryStepContext_h
@import Foundation;

#include "NPKPaymentProvisioningFlowStepContext.h"

@class NSArray, NSString, PKPaymentSetupProduct;

@interface NPKPaymentProvisioningFlowControllerReaderModeEntryStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSArray *setupFields;
@property (retain, nonatomic) PKPaymentSetupProduct *product;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithRequestContext:(id)context;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* NPKPaymentProvisioningFlowControllerReaderModeEntryStepContext_h */

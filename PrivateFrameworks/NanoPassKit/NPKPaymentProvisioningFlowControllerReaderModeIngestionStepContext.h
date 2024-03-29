//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPaymentProvisioningFlowControllerReaderModeIngestionStepContext_h
#define NPKPaymentProvisioningFlowControllerReaderModeIngestionStepContext_h
@import Foundation;

#include "NPKPaymentProvisioningFlowStepContext.h"

@class NSString, NSURL;

@interface NPKPaymentProvisioningFlowControllerReaderModeIngestionStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) NSURL *physicalCardImageURL;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) unsigned long long ingestionState;
@property (nonatomic) double ingestionProgress;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithRequestContext:(id)context;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* NPKPaymentProvisioningFlowControllerReaderModeIngestionStepContext_h */

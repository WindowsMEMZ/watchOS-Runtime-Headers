//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKApplyWebServiceVerificationSubmissionRequest_h
#define PKApplyWebServiceVerificationSubmissionRequest_h
@import Foundation;

#include "PKApplyWebServiceRequest.h"
#include "PKApplyVerificationInformation.h"

@class NSString, NSURL;

@interface PKApplyWebServiceVerificationSubmissionRequest : PKApplyWebServiceRequest

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (nonatomic) unsigned long long featureIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) PKApplyVerificationInformation *verificationInfo;
@property (nonatomic) unsigned long long verificationType;
@property (copy, nonatomic) NSString *odiAssessment;
@property (nonatomic) long long channel;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)_urlRequestWithAppleAccountInformation:(id)information;
@end

#endif /* PKApplyWebServiceVerificationSubmissionRequest_h */

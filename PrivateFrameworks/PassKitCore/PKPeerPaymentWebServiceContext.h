//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentWebServiceContext_h
#define PKPeerPaymentWebServiceContext_h
@import Foundation;

#include "PKWebServiceContext.h"

@class NSData, NSString, NSURL;

@interface PKPeerPaymentWebServiceContext : PKWebServiceContext

@property (readonly, copy, nonatomic) NSURL *serviceURL;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, copy, nonatomic) NSString *pushTopic;
@property (copy, nonatomic) NSString *pushToken;
@property (nonatomic) BOOL devSigned;
@property (readonly, copy, nonatomic) NSString *companionSerialNumber;
@property (copy, nonatomic) NSData *signedEnrollmentDataSignature;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)contextWithArchive:(id)archive;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)updateContextWithDeviceRegistrationData:(id)data registrationResponse:(id)response;
@end

#endif /* PKPeerPaymentWebServiceContext_h */

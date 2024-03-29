//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentDeviceRegistrationData_h
#define PKPeerPaymentDeviceRegistrationData_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSData, NSDictionary, NSString;

@interface PKPeerPaymentDeviceRegistrationData : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSString *authorizationHeader;
@property (copy, nonatomic) NSString *signedAuthToken;
@property (copy, nonatomic) NSDictionary *enrollmentData;
@property (copy, nonatomic) NSData *signedEnrollmentDataSignature;
@property (nonatomic) BOOL devSigned;
@property (copy, nonatomic) NSString *companionSerialNumber;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToPeerPaymentDeviceRegistrationData:(id)data;
@end

#endif /* PKPeerPaymentDeviceRegistrationData_h */

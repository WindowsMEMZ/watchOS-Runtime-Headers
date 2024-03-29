//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMCertificateIdentityCredentialsDeclaration_h
#define CEMCertificateIdentityCredentialsDeclaration_h
@import Foundation;

#include "CEMPayloadBase.h"

@class NSData;

@interface CEMCertificateIdentityCredentialsDeclaration : CEMPayloadBase

@property (copy, nonatomic) NSData *payloadCertificate;

/* class methods */
+ (id)allowedPayloadKeys;
+ (id)buildWithCertificate:(id)certificate;
+ (id)buildRequiredOnlyWithCertificate:(id)certificate;

/* instance methods */
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayload;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMCertificateIdentityCredentialsDeclaration_h */

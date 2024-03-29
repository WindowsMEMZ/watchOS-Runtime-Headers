//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMSecretCredentialsDeclaration_h
#define CEMSecretCredentialsDeclaration_h
@import Foundation;

#include "CEMPayloadBase.h"

@class NSString;

@interface CEMSecretCredentialsDeclaration : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadSecret;

/* class methods */
+ (id)allowedPayloadKeys;
+ (id)buildWithSecret:(id)secret;
+ (id)buildRequiredOnlyWithSecret:(id)secret;

/* instance methods */
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayload;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMSecretCredentialsDeclaration_h */

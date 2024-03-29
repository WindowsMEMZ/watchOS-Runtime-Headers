//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMNetworkVPNDeclaration_IPv4_h
#define CEMNetworkVPNDeclaration_IPv4_h
@import Foundation;

#include "CEMPayloadBase.h"

@class NSNumber;

@interface CEMNetworkVPNDeclaration_IPv4 : CEMPayloadBase

@property (copy, nonatomic) NSNumber *payloadOverridePrimary;

/* class methods */
+ (id)allowedPayloadKeys;
+ (id)buildWithOverridePrimary:(id)primary;
+ (id)buildRequiredOnly;

/* instance methods */
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayloadWithAssetProviders:(id)providers;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMNetworkVPNDeclaration_IPv4_h */

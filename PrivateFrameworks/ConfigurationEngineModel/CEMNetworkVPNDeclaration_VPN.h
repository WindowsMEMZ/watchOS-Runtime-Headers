//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMNetworkVPNDeclaration_VPN_h
#define CEMNetworkVPNDeclaration_VPN_h
@import Foundation;

#include "CEMPayloadBase.h"

@class NSArray, NSNumber, NSString;

@interface CEMNetworkVPNDeclaration_VPN : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadAuthName;
@property (copy, nonatomic) NSString *payloadAuthPassword;
@property (copy, nonatomic) NSString *payloadAuthenticationMethod;
@property (copy, nonatomic) NSString *payloadPayloadCertificateUUID;
@property (copy, nonatomic) NSNumber *payloadOnDemandEnabled;
@property (copy, nonatomic) NSArray *payloadOnDemandMatchDomainsAlways;
@property (copy, nonatomic) NSArray *payloadOnDemandMatchDomainsNever;
@property (copy, nonatomic) NSArray *payloadOnDemandMatchDomainsOnRetry;
@property (copy, nonatomic) NSArray *payloadOnDemandRules;
@property (copy, nonatomic) NSNumber *payloadDisconnectOnIdle;
@property (copy, nonatomic) NSNumber *payloadDisconnectOnIdleTimer;
@property (copy, nonatomic) NSString *payloadRemoteAddress;
@property (copy, nonatomic) NSString *payloadPassword;
@property (copy, nonatomic) NSString *payloadProviderBundleIdentifier;

/* class methods */
+ (id)allowedPayloadKeys;
+ (id)buildWithAuthName:(id)name withAuthPassword:(id)password withAuthenticationMethod:(id)method withPayloadCertificateUUID:(id)uuid withOnDemandEnabled:(id)enabled withOnDemandMatchDomainsAlways:(id)always withOnDemandMatchDomainsNever:(id)never withOnDemandMatchDomainsOnRetry:(id)retry withOnDemandRules:(id)rules withDisconnectOnIdle:(id)idle withDisconnectOnIdleTimer:(id)timer withRemoteAddress:(id)address withPassword:(id)password withProviderBundleIdentifier:(id)identifier;
+ (id)buildRequiredOnly;

/* instance methods */
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayloadWithAssetProviders:(id)providers;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMNetworkVPNDeclaration_VPN_h */

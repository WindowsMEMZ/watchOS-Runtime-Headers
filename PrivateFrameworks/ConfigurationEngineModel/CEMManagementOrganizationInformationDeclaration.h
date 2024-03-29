//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMManagementOrganizationInformationDeclaration_h
#define CEMManagementOrganizationInformationDeclaration_h
@import Foundation;

#include "CEMConfigurationBase.h"
#include "CEMRegisteredTypeProtocol-Protocol.h"

@class NSString;

@interface CEMManagementOrganizationInformationDeclaration : CEMConfigurationBase<CEMRegisteredTypeProtocol>

@property (copy, nonatomic) NSString *payloadOrganizationName;
@property (copy, nonatomic) NSString *payloadOrganizationAddress;
@property (copy, nonatomic) NSString *payloadOrganizationPhone;
@property (copy, nonatomic) NSString *payloadOrganizationEmail;
@property (copy, nonatomic) NSString *payloadOrganizationMagic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)identifier withOrganizationName:(id)name withOrganizationAddress:(id)address withOrganizationPhone:(id)phone withOrganizationEmail:(id)email withOrganizationMagic:(id)magic;
+ (id)buildRequiredOnlyWithIdentifier:(id)identifier withOrganizationName:(id)name;

/* instance methods */
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayloadWithAssetProviders:(id)providers;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMManagementOrganizationInformationDeclaration_h */

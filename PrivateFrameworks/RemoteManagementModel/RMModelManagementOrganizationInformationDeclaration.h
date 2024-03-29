//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMModelManagementOrganizationInformationDeclaration_h
#define RMModelManagementOrganizationInformationDeclaration_h
@import Foundation;

#include "RMModelManagementBase.h"
#include "RMModelManagementOrganizationInformationDeclaration_Proof.h"
#include "RMModelRegisteredTypeProtocol-Protocol.h"

@class NSString;

@interface RMModelManagementOrganizationInformationDeclaration : RMModelManagementBase<RMModelRegisteredTypeProtocol>

@property (copy, nonatomic) NSString *payloadName;
@property (copy, nonatomic) NSString *payloadEmail;
@property (copy, nonatomic) NSString *payloadURL;
@property (copy, nonatomic) RMModelManagementOrganizationInformationDeclaration_Proof *payloadProof;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:(id)identifier name:(id)name email:(id)email URL:(id)url proof:(id)proof;
+ (id)buildRequiredOnlyWithIdentifier:(id)identifier name:(id)name;
+ (id)supportedOS;

/* instance methods */
- (BOOL)loadPayloadFromDictionary:(id)dictionary serializationType:(short)type error:(id *)error;
- (id)serializePayloadWithType:(short)type;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* RMModelManagementOrganizationInformationDeclaration_h */

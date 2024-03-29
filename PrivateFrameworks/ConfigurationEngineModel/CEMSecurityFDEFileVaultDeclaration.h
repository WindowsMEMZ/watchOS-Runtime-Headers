//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMSecurityFDEFileVaultDeclaration_h
#define CEMSecurityFDEFileVaultDeclaration_h
@import Foundation;

#include "CEMConfigurationBase.h"
#include "CEMRegisteredTypeProtocol-Protocol.h"

@class NSNumber, NSString;

@interface CEMSecurityFDEFileVaultDeclaration : CEMConfigurationBase<CEMRegisteredTypeProtocol>

@property (copy, nonatomic) NSString *payloadEnable;
@property (copy, nonatomic) NSNumber *payloadDefer;
@property (copy, nonatomic) NSNumber *payloadUserEntersMissingInfo;
@property (copy, nonatomic) NSNumber *payloadUseRecoveryKey;
@property (copy, nonatomic) NSNumber *payloadShowRecoveryKey;
@property (copy, nonatomic) NSString *payloadOutputPath;
@property (copy, nonatomic) NSString *payloadUsername;
@property (copy, nonatomic) NSString *payloadPassword;
@property (copy, nonatomic) NSNumber *payloadUseKeychain;
@property (copy, nonatomic) NSNumber *payloadDeferForceAtUserLoginMaxBypassAttempts;
@property (copy, nonatomic) NSNumber *payloadDeferDontAskAtUserLogout;
@property (copy, nonatomic) NSString *payloadCertificateIdentifier;
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
+ (id)buildWithIdentifier:(id)identifier withEnable:(id)enable withDefer:(id)defer withUserEntersMissingInfo:(id)info withUseRecoveryKey:(id)key withShowRecoveryKey:(id)key withOutputPath:(id)path withUsername:(id)username withPassword:(id)password withUseKeychain:(id)keychain withDeferForceAtUserLoginMaxBypassAttempts:(id)attempts withDeferDontAskAtUserLogout:(id)logout withCertificateIdentifier:(id)identifier;
+ (id)buildRequiredOnlyWithIdentifier:(id)identifier withEnable:(id)enable;

/* instance methods */
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayloadWithAssetProviders:(id)providers;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMSecurityFDEFileVaultDeclaration_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMAccountSubscribedCalendarDeclaration_h
#define CEMAccountSubscribedCalendarDeclaration_h
@import Foundation;

#include "CEMConfigurationBase.h"
#include "CEMRegisteredTypeProtocol-Protocol.h"

@class NSNumber, NSString;

@interface CEMAccountSubscribedCalendarDeclaration : CEMConfigurationBase<CEMRegisteredTypeProtocol>

@property (copy, nonatomic) NSString *payloadSubCalAccountDescription;
@property (copy, nonatomic) NSString *payloadSubCalAccountHostName;
@property (copy, nonatomic) NSNumber *payloadSubCalAccountUseSSL;
@property (copy, nonatomic) NSString *payloadSubCalAccountCredentials;
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
+ (id)buildWithIdentifier:(id)identifier withSubCalAccountDescription:(id)description withSubCalAccountHostName:(id)name withSubCalAccountUseSSL:(id)ssl withSubCalAccountCredentials:(id)credentials;
+ (id)buildRequiredOnlyWithIdentifier:(id)identifier withSubCalAccountHostName:(id)name;

/* instance methods */
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayloadWithAssetProviders:(id)providers;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMAccountSubscribedCalendarDeclaration_h */

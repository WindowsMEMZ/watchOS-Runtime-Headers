//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMManagementUpdateEnrollmentCommand_h
#define CEMManagementUpdateEnrollmentCommand_h
@import Foundation;

#include "CEMCommandBase.h"
#include "CEMRegisteredTypeProtocol-Protocol.h"

@class NSData, NSString;

@interface CEMManagementUpdateEnrollmentCommand : CEMCommandBase<CEMRegisteredTypeProtocol>

@property (copy, nonatomic) NSData *payloadProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:(id)identifier withProfile:(id)profile;
+ (id)buildRequiredOnlyWithIdentifier:(id)identifier withProfile:(id)profile;

/* instance methods */
- (BOOL)mustBeSupervised;
- (int)executionLevel;
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayloadWithAssetProviders:(id)providers;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMManagementUpdateEnrollmentCommand_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMApplicationAutonomousSingleAppModeDeclaration_AllowedApplicationsItem_h
#define CEMApplicationAutonomousSingleAppModeDeclaration_AllowedApplicationsItem_h
@import Foundation;

#include "CEMPayloadBase.h"

@class NSString;

@interface CEMApplicationAutonomousSingleAppModeDeclaration_AllowedApplicationsItem : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadBundleIdentifier;
@property (copy, nonatomic) NSString *payloadTeamIdentifier;

/* class methods */
+ (id)allowedPayloadKeys;
+ (id)buildWithBundleIdentifier:(id)identifier withTeamIdentifier:(id)identifier;
+ (id)buildRequiredOnlyWithBundleIdentifier:(id)identifier withTeamIdentifier:(id)identifier;

/* instance methods */
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayloadWithAssetProviders:(id)providers;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMApplicationAutonomousSingleAppModeDeclaration_AllowedApplicationsItem_h */

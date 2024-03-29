//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMActivationAdvancedDeclaration_ConfigurationsItem_h
#define CEMActivationAdvancedDeclaration_ConfigurationsItem_h
@import Foundation;

#include "CEMPayloadBase.h"
#include "CEMAnyPayload.h"

@class NSString;

@interface CEMActivationAdvancedDeclaration_ConfigurationsItem : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadIdentifier;
@property (copy, nonatomic) CEMAnyPayload *payloadOverrides;

/* class methods */
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:(id)identifier withOverrides:(id)overrides;
+ (id)buildRequiredOnlyWithIdentifier:(id)identifier;

/* instance methods */
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayloadWithAssetProviders:(id)providers;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMActivationAdvancedDeclaration_ConfigurationsItem_h */

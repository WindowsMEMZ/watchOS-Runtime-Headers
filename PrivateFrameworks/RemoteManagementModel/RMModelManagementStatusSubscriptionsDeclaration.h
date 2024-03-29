//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMModelManagementStatusSubscriptionsDeclaration_h
#define RMModelManagementStatusSubscriptionsDeclaration_h
@import Foundation;

#include "RMModelConfigurationBase.h"
#include "RMModelRegisteredTypeProtocol-Protocol.h"

@class NSArray, NSString;

@interface RMModelManagementStatusSubscriptionsDeclaration : RMModelConfigurationBase<RMModelRegisteredTypeProtocol>

@property (copy, nonatomic) NSArray *payloadStatusItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)assetTypes;
+ (id)buildWithIdentifier:(id)identifier statusItems:(id)items;
+ (id)buildRequiredOnlyWithIdentifier:(id)identifier statusItems:(id)items;
+ (id)combineConfigurations:(id)configurations;
+ (id)supportedOS;

/* instance methods */
- (id)assetReferences;
- (BOOL)loadPayloadFromDictionary:(id)dictionary serializationType:(short)type error:(id *)error;
- (id)serializePayloadWithType:(short)type;
- (void)combineWithOther:(id)other;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* RMModelManagementStatusSubscriptionsDeclaration_h */

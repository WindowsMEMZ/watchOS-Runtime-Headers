//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMModelStatusManagementClientCapabilities_SupportedPayloadsDeclarations_h
#define RMModelStatusManagementClientCapabilities_SupportedPayloadsDeclarations_h
@import Foundation;

#include "RMModelPayloadBase.h"

@class NSArray;

@interface RMModelStatusManagementClientCapabilities_SupportedPayloadsDeclarations : RMModelPayloadBase

@property (copy, nonatomic) NSArray *statusActivations;
@property (copy, nonatomic) NSArray *statusAssets;
@property (copy, nonatomic) NSArray *statusConfigurations;
@property (copy, nonatomic) NSArray *statusManagement;

/* class methods */
+ (id)allowedStatusKeys;
+ (id)buildWithActivations:(id)activations assets:(id)assets configurations:(id)configurations management:(id)management;
+ (id)buildRequiredOnly;

/* instance methods */
- (BOOL)loadFromDictionary:(id)dictionary serializationType:(short)type error:(id *)error;
- (id)serializeWithType:(short)type;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* RMModelStatusManagementClientCapabilities_SupportedPayloadsDeclarations_h */

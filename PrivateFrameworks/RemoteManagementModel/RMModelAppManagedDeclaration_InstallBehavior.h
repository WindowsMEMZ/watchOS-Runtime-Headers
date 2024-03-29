//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMModelAppManagedDeclaration_InstallBehavior_h
#define RMModelAppManagedDeclaration_InstallBehavior_h
@import Foundation;

#include "RMModelPayloadBase.h"
#include "RMModelAppManagedDeclaration_InstallBehaviorLicense.h"

@class NSString;

@interface RMModelAppManagedDeclaration_InstallBehavior : RMModelPayloadBase

@property (copy, nonatomic) NSString *payloadInstall;
@property (copy, nonatomic) RMModelAppManagedDeclaration_InstallBehaviorLicense *payloadLicense;

/* class methods */
+ (id)allowedPayloadKeys;
+ (id)buildWithInstall:(id)install license:(id)license;
+ (id)buildRequiredOnly;

/* instance methods */
- (BOOL)loadFromDictionary:(id)dictionary serializationType:(short)type error:(id *)error;
- (id)serializeWithType:(short)type;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* RMModelAppManagedDeclaration_InstallBehavior_h */

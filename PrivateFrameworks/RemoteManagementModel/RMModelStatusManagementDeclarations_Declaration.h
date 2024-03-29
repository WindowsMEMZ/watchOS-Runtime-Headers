//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMModelStatusManagementDeclarations_Declaration_h
#define RMModelStatusManagementDeclarations_Declaration_h
@import Foundation;

#include "RMModelPayloadBase.h"

@class NSArray, NSNumber, NSString;

@interface RMModelStatusManagementDeclarations_Declaration : RMModelPayloadBase

@property (copy, nonatomic) NSString *statusIdentifier;
@property (copy, nonatomic) NSString *statusServerToken;
@property (copy, nonatomic) NSNumber *statusActive;
@property (copy, nonatomic) NSString *statusValid;
@property (copy, nonatomic) NSArray *statusReasons;

/* class methods */
+ (id)allowedStatusKeys;
+ (id)buildWithIdentifier:(id)identifier serverToken:(id)token active:(id)active valid:(id)valid reasons:(id)reasons;
+ (id)buildRequiredOnlyWithIdentifier:(id)identifier serverToken:(id)token active:(id)active valid:(id)valid;

/* instance methods */
- (BOOL)loadFromDictionary:(id)dictionary serializationType:(short)type error:(id *)error;
- (id)serializeWithType:(short)type;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* RMModelStatusManagementDeclarations_Declaration_h */

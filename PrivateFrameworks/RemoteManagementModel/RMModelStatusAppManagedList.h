//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMModelStatusAppManagedList_h
#define RMModelStatusAppManagedList_h
@import Foundation;

#include "RMModelStatusBase.h"

@class NSArray, NSNumber, NSString;

@interface RMModelStatusAppManagedList : RMModelStatusBase

@property (copy, nonatomic) NSString *statusIdentifier;
@property (copy, nonatomic) NSNumber *statusRemoved;
@property (copy, nonatomic) NSString *statusDeclarationIdentifier;
@property (copy, nonatomic) NSString *statusName;
@property (copy, nonatomic) NSNumber *statusExternalVersionId;
@property (copy, nonatomic) NSString *statusVersion;
@property (copy, nonatomic) NSString *statusShortVersion;
@property (copy, nonatomic) NSString *statusState;
@property (copy, nonatomic) NSString *statusUpdateState;
@property (copy, nonatomic) NSArray *statusReasons;

/* class methods */
+ (id)allowedStatusKeys;
+ (id)statusItemType;
+ (BOOL)isArrayValue;
+ (id)buildWithIdentifier:(id)identifier removed:(id)removed declarationIdentifier:(id)identifier name:(id)name externalVersionId:(id)id version:(id)version shortVersion:(id)version state:(id)state updateState:(id)state reasons:(id)reasons;
+ (id)buildRequiredOnlyWithIdentifier:(id)identifier;
+ (id)supportedOS;

/* instance methods */
- (BOOL)loadPayloadFromDictionary:(id)dictionary serializationType:(short)type error:(id *)error;
- (id)serializePayloadWithType:(short)type;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* RMModelStatusAppManagedList_h */

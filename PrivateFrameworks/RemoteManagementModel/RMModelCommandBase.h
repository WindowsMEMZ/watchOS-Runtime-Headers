//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMModelCommandBase_h
#define RMModelCommandBase_h
@import Foundation;

#include "RMModelPayloadBase.h"
#include "RMModelAnyPayload.h"

@class NSString;

@interface RMModelCommandBase : RMModelPayloadBase

@property (copy, nonatomic) NSString *commandType;
@property (copy, nonatomic) NSString *commandIdentifier;
@property (copy, nonatomic) RMModelAnyPayload *commandPayload;

/* class methods */
+ (id)load:(id)load serializationType:(short)type error:(id *)error;

/* instance methods */
- (BOOL)mustBeSupervised;
- (BOOL)loadFromDictionary:(id)dictionary serializationType:(short)type error:(id *)error;
- (BOOL)loadPayloadFromDictionary:(id)dictionary serializationType:(short)type error:(id *)error;
- (id)serializeWithType:(short)type;
- (id)serializePayloadWithType:(short)type;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* RMModelCommandBase_h */

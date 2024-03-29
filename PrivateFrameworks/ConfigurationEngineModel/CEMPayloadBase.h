//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMPayloadBase_h
#define CEMPayloadBase_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSSet;

@interface CEMPayloadBase : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy) NSSet *unknownPayloadKeys;

/* class methods */
+ (id)load:(id)load error:(id *)error;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)mergeUnknownKeysFrom:(id)from withParentKey:(id)key;
- (id)createNestedObjectWithClass:(Class)class withParentKey:(id)key withPayload:(id)payload error:(id *)error;
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)_loadObjectOfClass:(Class)class fromDictionary:(id)dictionary withKey:(id)key isRequired:(BOOL)required defaultValue:(id)value error:(id *)error;
- (id)loadStringFromDictionary:(id)dictionary withKey:(id)key isRequired:(BOOL)required defaultValue:(id)value error:(id *)error;
- (id)loadIntegerFromDictionary:(id)dictionary withKey:(id)key isRequired:(BOOL)required defaultValue:(id)value error:(id *)error;
- (id)loadFloatFromDictionary:(id)dictionary withKey:(id)key isRequired:(BOOL)required defaultValue:(id)value error:(id *)error;
- (id)loadBooleanFromDictionary:(id)dictionary withKey:(id)key isRequired:(BOOL)required defaultValue:(id)value error:(id *)error;
- (id)loadDateFromDictionary:(id)dictionary withKey:(id)key isRequired:(BOOL)required defaultValue:(id)value error:(id *)error;
- (id)loadDataFromDictionary:(id)dictionary withKey:(id)key isRequired:(BOOL)required defaultValue:(id)value error:(id *)error;
- (id)loadArrayFromDictionary:(id)dictionary withKey:(id)key validator:(id /* block */)validator isRequired:(BOOL)required defaultValue:(id)value error:(id *)error;
- (id)loadArrayFromDictionary:(id)dictionary withKey:(id)key classType:(Class)type nested:(BOOL)nested isRequired:(BOOL)required defaultValue:(id)value error:(id *)error;
- (id)loadDictionaryFromDictionary:(id)dictionary withKey:(id)key classType:(Class)type isRequired:(BOOL)required defaultValue:(id)value error:(id *)error;
- (id)serializePayload;
- (id)serializePayloadWithAssetProviders:(id)providers;
- (void)_serializeItemIntoDictionary:(id)dictionary withKey:(id)key withValue:(id)value isRequired:(BOOL)required isDefaultValue:(BOOL)value;
- (void)serializeStringIntoDictionary:(id)dictionary withKey:(id)key withValue:(id)value isRequired:(BOOL)required defaultValue:(id)value;
- (void)serializeIntegerIntoDictionary:(id)dictionary withKey:(id)key withValue:(id)value isRequired:(BOOL)required defaultValue:(id)value;
- (void)serializeFloatIntoDictionary:(id)dictionary withKey:(id)key withValue:(id)value isRequired:(BOOL)required defaultValue:(id)value;
- (void)serializeBooleanIntoDictionary:(id)dictionary withKey:(id)key withValue:(id)value isRequired:(BOOL)required defaultValue:(id)value;
- (void)serializeDateIntoDictionary:(id)dictionary withKey:(id)key withValue:(id)value isRequired:(BOOL)required defaultValue:(id)value;
- (void)serializeDataIntoDictionary:(id)dictionary withKey:(id)key withValue:(id)value isRequired:(BOOL)required defaultValue:(id)value;
- (void)serializeArrayIntoDictionary:(id)dictionary withKey:(id)key withValue:(id)value itemSerializer:(id /* block */)serializer isRequired:(BOOL)required defaultValue:(id)value;
- (void)serializeDictionaryIntoDictionary:(id)dictionary withKey:(id)key withValue:(id)value dictSerializer:(id /* block */)serializer isRequired:(BOOL)required defaultValue:(id)value;
- (void)serializeAssetIntoDictionary:(id)dictionary withKey:(id)key withValue:(id)value assetProvider:(id)provider transformType:(id)type isRequired:(BOOL)required defaultValue:(id)value;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMPayloadBase_h */

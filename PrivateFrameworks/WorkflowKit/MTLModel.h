//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef MTLModel_h
#define MTLModel_h
@import Foundation;

#include "MTLModel-Protocol.h"
#include "NSCoding-Protocol.h"

@class NSDictionary, NSString;

@interface MTLModel : NSObject<NSCoding, MTLModel>

@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)dictionaryValueFromArchivedExternalRepresentation:(id)representation version:(unsigned long long)version;
+ (unsigned long long)modelVersion;
+ (id)encodingBehaviorsByPropertyKey;
+ (id)allowedSecureCodingClassesByPropertyKey;
+ (BOOL)supportsSecureCoding;
+ (void)generateAndCacheStorageBehaviors;
+ (id)modelWithDictionary:(id)dictionary error:(id *)error;
+ (void)enumeratePropertiesUsingBlock:(id /* block */)block;
+ (id)propertyKeys;
+ (id)transitoryPropertyKeys;
+ (id)permanentPropertyKeys;
+ (unsigned long long)storageBehaviorForPropertyWithKey:(id)key;

/* instance methods */
- (id)decodeValueForKey:(id)key withCoder:(id)coder modelVersion:(unsigned long long)version;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)init;
- (id)initWithDictionary:(id)dictionary error:(id *)error;
- (void)mergeValueForKey:(id)key fromModel:(id)model;
- (void)mergeValuesForKeysFromModel:(id)model;
- (BOOL)validate:(id *)validate;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* MTLModel_h */

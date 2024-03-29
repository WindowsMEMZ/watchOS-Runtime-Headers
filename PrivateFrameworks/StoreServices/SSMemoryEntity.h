//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSMemoryEntity_h
#define SSMemoryEntity_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSDictionary, NSMutableDictionary;

@interface SSMemoryEntity : NSObject<NSCopying>

@property (nonatomic) long long databaseID;
@property (readonly, copy, nonatomic) NSDictionary *propertyValues;
@property (readonly, copy, nonatomic) NSDictionary *externalPropertyValues;

/* class methods */
+ (id)anyInDatabase:(id)database predicate:(id)predicate;
+ (id)queryWithDatabase:(id)database predicate:(id)predicate;
+ (id)queryWithDatabase:(id)database predicate:(id)predicate orderingProperties:(id)properties;
+ (Class)databaseEntityClass;
+ (id)defaultProperties;

/* instance methods */
- (id)init;
- (id)initWithDatabaseEntity:(id)entity properties:(id)properties;
- (void)dealloc;
- (void)reloadFromDatabaseEntity:(id)entity properties:(id)properties;
- (void)setExternalValuesWithDictionary:(id)dictionary;
- (void)setValue:(id)value forProperty:(id)property;
- (void)setValues:(id *)values forProperties:(const id *)properties count:(long long)count;
- (void)setValuesWithDictionary:(id)dictionary;
- (void)setValue:(id)value forExternalProperty:(id)property;
- (void)setValues:(id *)values forExternalProperties:(const id *)properties count:(long long)count;
- (id)valueForProperty:(id)property;
- (id)valueForExternalProperty:(id)property;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* SSMemoryEntity_h */

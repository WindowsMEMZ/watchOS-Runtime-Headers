//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPConcreteMediaItemCollection_h
#define MPConcreteMediaItemCollection_h
@import Foundation;

#include "MPMediaItemCollection.h"
#include "MPCacheableConcreteMediaEntity-Protocol.h"
#include "MPConcreteMediaEntityPropertiesCache.h"
#include "MPMediaItem.h"
#include "MPMediaQuery.h"
#include "NSCopying-Protocol.h"

@interface MPConcreteMediaItemCollection : MPMediaItemCollection<NSCopying, MPCacheableConcreteMediaEntity> {
  /* instance variables */
  long long _identifier;
  MPMediaQuery *_itemsQuery;
  long long _grouping;
  MPMediaItem *_representativeItem;
  MPConcreteMediaEntityPropertiesCache *_propertiesCache;
}

@property (readonly, retain, nonatomic) MPConcreteMediaEntityPropertiesCache *cachedPropertyValues;

/* class methods */
+ (id)createUncachedMediaItemCollectionWithIdentifier:(long long)identifier valuesForProperties:(id)properties itemsQuery:(id)query grouping:(long long)grouping representativeItemIdentifier:(long long)identifier;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_initWithIdentifier:(long long)identifier valuesForProperties:(id)properties itemsQuery:(id)query grouping:(long long)grouping representativeItemIdentifier:(long long)identifier propertiesCache:(id)cache;
- (id)initWithIdentifier:(long long)identifier valuesForProperties:(id)properties itemsQuery:(id)query grouping:(long long)grouping representativeItemIdentifier:(long long)identifier;
- (id)initWithIdentifier:(long long)identifier itemsQuery:(id)query grouping:(long long)grouping;
- (id)initWithMultiverseIdentifier:(id)identifier library:(id)library;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)dealloc;
- (long long)groupingType;
- (void)invalidateCachedProperties;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)mediaLibrary;
- (unsigned long long)persistentID;
- (id)_tokenBinaryIdentifierAsString;
- (void)enumerateValuesForProperties:(id)properties usingBlock:(id /* block */)block;
- (id)valueForProperty:(id)property;
- (id)valuesForProperties:(id)properties;
- (BOOL)setValue:(id)value forProperty:(id)property;
- (void)setValue:(id)value forProperty:(id)property withCompletionBlock:(id /* block */)block;
- (id)itemsQuery;
- (id)items;
- (id)representativeItem;
- (unsigned long long)count;
- (void)_enumerateItemPersistentIDsUsingBlock:(id /* block */)block;
@end

#endif /* MPConcreteMediaItemCollection_h */

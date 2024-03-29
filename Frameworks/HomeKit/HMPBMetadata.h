//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMPBMetadata_h
#define HMPBMetadata_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface HMPBMetadata : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 version; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int version;
@property (retain, nonatomic) NSMutableArray *hapCharacteristics;
@property (retain, nonatomic) NSMutableArray *hapServices;
@property (retain, nonatomic) NSMutableArray *hapCategories;

/* class methods */
+ (Class)hapCharacteristicsType;
+ (Class)hapServicesType;
+ (Class)hapCategoriesType;

/* instance methods */
- (void)clearHapCharacteristics;
- (void)addHapCharacteristics:(id)characteristics;
- (unsigned long long)hapCharacteristicsCount;
- (id)hapCharacteristicsAtIndex:(unsigned long long)index;
- (void)clearHapServices;
- (void)addHapServices:(id)services;
- (unsigned long long)hapServicesCount;
- (id)hapServicesAtIndex:(unsigned long long)index;
- (void)clearHapCategories;
- (void)addHapCategories:(id)categories;
- (unsigned long long)hapCategoriesCount;
- (id)hapCategoriesAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* HMPBMetadata_h */

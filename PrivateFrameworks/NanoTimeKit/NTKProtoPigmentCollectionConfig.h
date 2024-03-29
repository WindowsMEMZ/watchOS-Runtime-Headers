//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKProtoPigmentCollectionConfig_h
#define NTKProtoPigmentCollectionConfig_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface NTKProtoPigmentCollectionConfig : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 excludesDuotone; unsigned int x :1 isAddable; unsigned int x :1 sensitivity; unsigned int x :1 sortedByHue; unsigned int x :1 supportsSlider; } _has;
}

@property (readonly, nonatomic) BOOL hasDefaultColorOptionName;
@property (retain, nonatomic) NSString *defaultColorOptionName;
@property (readonly, nonatomic) BOOL hasFallbackDefaultColorOptionName;
@property (retain, nonatomic) NSString *fallbackDefaultColorOptionName;
@property (readonly, nonatomic) BOOL hasDefaultConfigAttributeName;
@property (retain, nonatomic) NSString *defaultConfigAttributeName;
@property (retain, nonatomic) NSMutableArray *defaultGalleryColorNames;
@property (nonatomic) BOOL hasSensitivity;
@property (nonatomic) BOOL sensitivity;
@property (nonatomic) BOOL hasIsAddable;
@property (nonatomic) BOOL isAddable;
@property (nonatomic) BOOL hasSortedByHue;
@property (nonatomic) BOOL sortedByHue;
@property (nonatomic) BOOL hasSupportsSlider;
@property (nonatomic) BOOL supportsSlider;
@property (readonly, nonatomic) BOOL hasFeatureFlag;
@property (retain, nonatomic) NSString *featureFlag;
@property (nonatomic) BOOL hasExcludesDuotone;
@property (nonatomic) BOOL excludesDuotone;
@property (retain, nonatomic) NSMutableArray *exclusions;
@property (retain, nonatomic) NSMutableArray *migrations;
@property (readonly, nonatomic) BOOL hasCollectionOverride;
@property (retain, nonatomic) NSString *collectionOverride;

/* class methods */
+ (Class)defaultGalleryColorNamesType;
+ (Class)exclusionsType;
+ (Class)migrationType;

/* instance methods */
- (void)clearDefaultGalleryColorNames;
- (void)addDefaultGalleryColorNames:(id)names;
- (unsigned long long)defaultGalleryColorNamesCount;
- (id)defaultGalleryColorNamesAtIndex:(unsigned long long)index;
- (void)clearExclusions;
- (void)addExclusions:(id)exclusions;
- (unsigned long long)exclusionsCount;
- (id)exclusionsAtIndex:(unsigned long long)index;
- (void)clearMigrations;
- (void)addMigration:(id)migration;
- (unsigned long long)migrationsCount;
- (id)migrationAtIndex:(unsigned long long)index;
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

#endif /* NTKProtoPigmentCollectionConfig_h */

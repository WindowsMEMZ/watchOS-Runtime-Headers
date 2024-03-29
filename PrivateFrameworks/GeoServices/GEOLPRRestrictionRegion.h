//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOLPRRestrictionRegion_h
#define GEOLPRRestrictionRegion_h
@import Foundation;

#include "PBCodable.h"
#include "GEOMapRegionE7.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString, PBDataReader;

@interface GEOLPRRestrictionRegion : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 read_convertRules; unsigned int x :1 read_definedPlateTypes; unsigned int x :1 read_identifier; unsigned int x :1 read_mapRegion; unsigned int x :1 read_name; unsigned int x :1 wrote_anyField; } _flags;
}

@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (retain, nonatomic) GEOMapRegionE7 *mapRegion;
@property (retain, nonatomic) NSMutableArray *definedPlateTypes;
@property (retain, nonatomic) NSMutableArray *convertRules;

/* class methods */
+ (Class)definedPlateTypesType;
+ (Class)convertRuleType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (void)clearDefinedPlateTypes;
- (void)addDefinedPlateTypes:(id)types;
- (unsigned long long)definedPlateTypesCount;
- (id)definedPlateTypesAtIndex:(unsigned long long)index;
- (void)clearConvertRules;
- (void)addConvertRule:(id)rule;
- (unsigned long long)convertRulesCount;
- (id)convertRuleAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* GEOLPRRestrictionRegion_h */

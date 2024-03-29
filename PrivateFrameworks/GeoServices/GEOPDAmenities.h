//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDAmenities_h
#define GEOPDAmenities_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOPDAmenities : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 read_unknownFields; unsigned int x :1 read_amenityV2s; unsigned int x :1 read_amenitys; unsigned int x :1 wrote_anyField; } _flags;
}

@property (retain, nonatomic) NSMutableArray *amenitys;
@property (retain, nonatomic) NSMutableArray *amenityV2s;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (id)stringBasedAmenityValuesForPlaceData:(id)data;
+ (id)enumBasedAmenityValuesForPlaceData:(id)data;
+ (id)amentiesForPlaceData:(id)data;
+ (Class)amenityType;
+ (Class)amenityV2Type;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (void)clearAmenitys;
- (void)addAmenity:(id)amenity;
- (unsigned long long)amenitysCount;
- (id)amenityAtIndex:(unsigned long long)index;
- (void)clearAmenityV2s;
- (void)addAmenityV2:(id)v2;
- (unsigned long long)amenityV2sCount;
- (id)amenityV2AtIndex:(unsigned long long)index;
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
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEOPDAmenities_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDShardedId_h
#define GEOPDShardedId_h
@import Foundation;

#include "PBCodable.h"
#include "GEOLatLng.h"
#include "NSCopying-Protocol.h"

@class PBUnknownFields;

@interface GEOPDShardedId : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 has_basemapId; unsigned int x :1 has_muid; unsigned int x :1 has_mapsResultType; unsigned int x :1 has_resultProviderId; } _flags;
}

@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid;
@property (readonly, nonatomic) BOOL hasCenter;
@property (retain, nonatomic) GEOLatLng *center;
@property (nonatomic) BOOL hasResultProviderId;
@property (nonatomic) int resultProviderId;
@property (nonatomic) BOOL hasBasemapId;
@property (nonatomic) unsigned long long basemapId;
@property (nonatomic) BOOL hasMapsResultType;
@property (nonatomic) int mapsResultType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)mapsResultTypeAsString:(int)string;
- (int)StringAsMapsResultType:(id)type;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)hasGreenTeaWithValue:(BOOL)value;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEOPDShardedId_h */

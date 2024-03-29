//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOElevationSegmentDescription_h
#define GEOElevationSegmentDescription_h
@import Foundation;

#include "PBCodable.h"
#include "GEOFormattedString.h"
#include "NSCopying-Protocol.h"

@class PBUnknownFields;

@interface GEOElevationSegmentDescription : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 has_endOffsetM; unsigned int x :1 has_startOffsetM; } _flags;
}

@property (nonatomic) BOOL hasStartOffsetM;
@property (nonatomic) unsigned int startOffsetM;
@property (nonatomic) BOOL hasEndOffsetM;
@property (nonatomic) unsigned int endOffsetM;
@property (readonly, nonatomic) BOOL hasFormattedDescription;
@property (retain, nonatomic) GEOFormattedString *formattedDescription;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
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

#endif /* GEOElevationSegmentDescription_h */

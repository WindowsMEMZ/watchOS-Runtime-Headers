//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOOriginalWaypointRoute_h
#define GEOOriginalWaypointRoute_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, PBUnknownFields;

@interface GEOOriginalWaypointRoute : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 has_identifier; unsigned int x :1 has_purpose; } _flags;
}

@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) unsigned int identifier;
@property (retain, nonatomic) NSMutableArray *routeLegs;
@property (nonatomic) BOOL hasPurpose;
@property (nonatomic) int purpose;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (Class)routeLegType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (void)clearRouteLegs;
- (void)addRouteLeg:(id)leg;
- (unsigned long long)routeLegsCount;
- (id)routeLegAtIndex:(unsigned long long)index;
- (id)purposeAsString:(int)string;
- (int)StringAsPurpose:(id)purpose;
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

#endif /* GEOOriginalWaypointRoute_h */

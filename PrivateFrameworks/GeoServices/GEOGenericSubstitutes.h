//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOGenericSubstitutes_h
#define GEOGenericSubstitutes_h
@import Foundation;

#include "PBCodable.h"
#include "GEOFormattedString.h"
#include "NSCopying-Protocol.h"

@class PBUnknownFields;

@interface GEOGenericSubstitutes : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 has_waypointCategory; } _flags;
}

@property (readonly, nonatomic) BOOL hasSubstitute;
@property (retain, nonatomic) GEOFormattedString *substitute;
@property (nonatomic) BOOL hasWaypointCategory;
@property (nonatomic) int waypointCategory;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)waypointCategoryAsString:(int)string;
- (int)StringAsWaypointCategory:(id)category;
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

#endif /* GEOGenericSubstitutes_h */

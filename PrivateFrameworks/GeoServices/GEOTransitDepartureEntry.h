//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOTransitDepartureEntry_h
#define GEOTransitDepartureEntry_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class PBUnknownFields;

@interface GEOTransitDepartureEntry : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 has_tripMuid; unsigned int x :1 has_departureTime; } _flags;
}

@property (nonatomic) BOOL hasTripMuid;
@property (nonatomic) unsigned long long tripMuid;
@property (nonatomic) BOOL hasDepartureTime;
@property (nonatomic) unsigned int departureTime;
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

#endif /* GEOTransitDepartureEntry_h */

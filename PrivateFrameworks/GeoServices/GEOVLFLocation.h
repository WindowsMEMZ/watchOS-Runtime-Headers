//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOVLFLocation_h
#define GEOVLFLocation_h
@import Foundation;

#include "PBCodable.h"
#include "GEOLatLng.h"
#include "NSCopying-Protocol.h"

@interface GEOVLFLocation : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 has_ecefLocation; unsigned int x :1 has_heading; unsigned int x :1 has_horizontalAccuracy; unsigned int x :1 has_verticalAccuracy; unsigned int x :1 has_type; unsigned int x :1 has_isFused; } _flags;
}

@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) BOOL hasEcefLocation;
@property (nonatomic) struct GEOECEFCoordinate { double x0; double x1; double x2; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; } x3; } ecefLocation;
@property (nonatomic) BOOL hasHorizontalAccuracy;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) BOOL hasVerticalAccuracy;
@property (nonatomic) double verticalAccuracy;
@property (nonatomic) BOOL hasHeading;
@property (nonatomic) double heading;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasIsFused;
@property (nonatomic) BOOL isFused;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)typeAsString:(int)string;
- (int)StringAsType:(id)type;
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
@end

#endif /* GEOVLFLocation_h */

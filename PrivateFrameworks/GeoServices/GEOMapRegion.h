//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOMapRegion_h
#define GEOMapRegion_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, PBUnknownFields;

@interface GEOMapRegion : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 has_eastLng; unsigned int x :1 has_northLat; unsigned int x :1 has_southLat; unsigned int x :1 has_westLng; unsigned int x :1 has_mapRegionSourceType; } _flags;
}

@property (readonly, nonatomic) double centerLat;
@property (readonly, nonatomic) double centerLng;
@property (readonly, nonatomic) double spanLat;
@property (readonly, nonatomic) double spanLng;
@property (readonly, nonatomic) BOOL hasRectangleVertices;
@property (nonatomic) BOOL hasSouthLat;
@property (nonatomic) double southLat;
@property (nonatomic) BOOL hasWestLng;
@property (nonatomic) double westLng;
@property (nonatomic) BOOL hasNorthLat;
@property (nonatomic) double northLat;
@property (nonatomic) BOOL hasEastLng;
@property (nonatomic) double eastLng;
@property (retain, nonatomic) NSMutableArray *vertexs;
@property (nonatomic) BOOL hasMapRegionSourceType;
@property (nonatomic) int mapRegionSourceType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (id)_geo_mapRegionForGEOCoordinateRegion:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })region;
+ (Class)vertexType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (BOOL)containsRegion:(id)region;
- (BOOL)intersectsRegion:(id)region;
- (BOOL)containsCoordinate:(struct { double x0; double x1; })coordinate;
- (BOOL)containsCoordinate:(struct { double x0; double x1; })coordinate radius:(double)radius;
- (BOOL)containsMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })rect;
- (BOOL)intersectsMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })rect;
- (id)intersectionsOnPolyline:(id)polyline;
- (id)initWithLatitude:(double)latitude longitude:(double)longitude;
- (id)initWithCoordinateRegion:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })region;
- (id)initWithMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })rect;
- (id)initWithRadialPlace:(id)place;
- (void)setMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })rect;
- (BOOL)isValid;
- (id)coordinates;
- (void)clearVertexs;
- (void)addVertex:(id)vertex;
- (unsigned long long)vertexsCount;
- (id)vertexAtIndex:(unsigned long long)index;
- (id)mapRegionSourceTypeAsString:(int)string;
- (int)StringAsMapRegionSourceType:(id)type;
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

#endif /* GEOMapRegion_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPBTransitVehiclePosition_h
#define GEOPBTransitVehiclePosition_h
@import Foundation;

#include "PBCodable.h"
#include "GEOLatLng.h"
#include "GEOPBTransitArtwork.h"
#include "GEOPBTransitShield.h"
#include "GEOStyleAttributes.h"
#include "GEOTransitArtworkDataSource-Protocol.h"
#include "GEOTransitVehiclePosition-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSDate, NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitVehiclePosition : PBCodable<GEOTransitVehiclePosition, NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_time; unsigned int x :1 has_tripId; unsigned int x :1 has_bearing; unsigned int x :1 has_speed; unsigned int x :1 read_unknownFields; unsigned int x :1 read_artwork; unsigned int x :1 read_color; unsigned int x :1 read_directionName; unsigned int x :1 read_headsign; unsigned int x :1 read_latLng; unsigned int x :1 read_modeShield; unsigned int x :1 read_styleAttributes; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) unsigned long long tripID;
@property (readonly, nonatomic) struct { double x0; double x1; } coordinate;
@property (readonly, nonatomic) double heading;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, copy, nonatomic) NSString *direction;
@property (readonly, copy, @dynamic, nonatomic) NSString *headsign;
@property (readonly, copy, nonatomic) NSString *colorHexString;
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *artworkDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasTripId;
@property (nonatomic) unsigned long long tripId;
@property (readonly, nonatomic) BOOL hasLatLng;
@property (retain, nonatomic) GEOLatLng *latLng;
@property (nonatomic) BOOL hasTime;
@property (nonatomic) unsigned long long time;
@property (nonatomic) BOOL hasBearing;
@property (nonatomic) float bearing;
@property (nonatomic) BOOL hasSpeed;
@property (nonatomic) float speed;
@property (readonly, nonatomic) BOOL hasDirectionName;
@property (retain, nonatomic) NSString *directionName;
@property (readonly, nonatomic) BOOL hasHeadsign;
@property (retain, nonatomic) NSString *headsign;
@property (readonly, nonatomic) BOOL hasModeShield;
@property (retain, nonatomic) GEOPBTransitShield *modeShield;
@property (readonly, nonatomic) BOOL hasColor;
@property (retain, nonatomic) NSString *color;
@property (readonly, nonatomic) BOOL hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly, nonatomic) BOOL hasArtwork;
@property (retain, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (id)transitVehiclePositionForPlaceData:(id)data;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
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
- (void)mergeFrom:(id)from;
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEOPBTransitVehiclePosition_h */

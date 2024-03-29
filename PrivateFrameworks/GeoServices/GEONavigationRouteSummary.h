//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEONavigationRouteSummary_h
#define GEONavigationRouteSummary_h
@import Foundation;

#include "PBCodable.h"
#include "GEOComposedWaypoint.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString, PBDataReader;

@interface GEONavigationRouteSummary : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_travelTime; unsigned int x :1 has_transportType; unsigned int x :1 read_destinationName; unsigned int x :1 read_destination; unsigned int x :1 read_nextDestinationName; unsigned int x :1 read_origin; unsigned int x :1 read_waypoints; unsigned int x :1 wrote_anyField; } _flags;
}

@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) BOOL hasDestinationName;
@property (retain, nonatomic) NSString *destinationName;
@property (nonatomic) BOOL hasTravelTime;
@property (nonatomic) double travelTime;
@property (retain, nonatomic) NSMutableArray *waypoints;
@property (readonly, nonatomic) BOOL hasNextDestinationName;
@property (retain, nonatomic) NSString *nextDestinationName;
@property (readonly, nonatomic) BOOL hasOrigin;
@property (retain, nonatomic) GEOComposedWaypoint *origin;
@property (readonly, nonatomic) BOOL hasDestination;
@property (retain, nonatomic) GEOComposedWaypoint *destination;

/* class methods */
+ (Class)waypointsType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (void)updateRoute:(id)route destinationName:(id)name;
- (id)init;
- (id)initWithData:(id)data;
- (id)transportTypeAsString:(int)string;
- (int)StringAsTransportType:(id)type;
- (void)clearWaypoints;
- (void)addWaypoints:(id)waypoints;
- (unsigned long long)waypointsCount;
- (id)waypointsAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)clearSensitiveFields:(unsigned long long)fields;
- (BOOL)hasGreenTeaWithValue:(BOOL)value;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* GEONavigationRouteSummary_h */

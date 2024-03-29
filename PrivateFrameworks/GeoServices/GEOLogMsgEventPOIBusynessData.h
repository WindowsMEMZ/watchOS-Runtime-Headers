//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOLogMsgEventPOIBusynessData_h
#define GEOLogMsgEventPOIBusynessData_h
@import Foundation;

#include "PBCodable.h"
#include "GEOLatLng.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, PBDataReader;

@interface GEOLogMsgEventPOIBusynessData : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_altitude; unsigned int x :1 has_horizontalAccuracy; unsigned int x :1 has_timestamp; unsigned int x :1 has_verticalAccuracy; unsigned int x :1 read_location; unsigned int x :1 read_poiPredictions; unsigned int x :1 wrote_anyField; } _flags;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) BOOL hasHorizontalAccuracy;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) BOOL hasVerticalAccuracy;
@property (nonatomic) double verticalAccuracy;
@property (nonatomic) BOOL hasAltitude;
@property (nonatomic) double altitude;
@property (retain, nonatomic) NSMutableArray *poiPredictions;

/* class methods */
+ (Class)poiPredictionsType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (void)clearPoiPredictions;
- (void)addPoiPredictions:(id)predictions;
- (unsigned long long)poiPredictionsCount;
- (id)poiPredictionsAtIndex:(unsigned long long)index;
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

#endif /* GEOLogMsgEventPOIBusynessData_h */

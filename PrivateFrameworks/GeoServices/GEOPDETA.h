//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDETA_h
#define GEOPDETA_h
@import Foundation;

#include "PBCodable.h"
#include "GEORouteTrafficDetail.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOPDETA : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  PBUnknownFields *_unknownFields;
  NSMutableArray *_etaRouteIncidents;
  GEORouteTrafficDetail *_routeTrafficDetail;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  unsigned int _distance;
  unsigned int _historicTravelTime;
  int _licensePlateRestrictionImpact;
  unsigned int _time;
  int _transportType;
  struct { unsigned int x :1 has_distance; unsigned int x :1 has_historicTravelTime; unsigned int x :1 has_licensePlateRestrictionImpact; unsigned int x :1 has_time; unsigned int x :1 has_transportType; unsigned int x :1 read_unknownFields; unsigned int x :1 read_etaRouteIncidents; unsigned int x :1 read_routeTrafficDetail; unsigned int x :1 wrote_anyField; } _flags;
}

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* GEOPDETA_h */

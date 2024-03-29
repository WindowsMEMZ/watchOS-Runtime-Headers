//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDSearchLocationScope_h
#define GEOPDSearchLocationScope_h
@import Foundation;

#include "PBCodable.h"
#include "GEOLatLng.h"
#include "GEOMapRegion.h"
#include "GEOPDSearchMultiMapRegion.h"
#include "NSCopying-Protocol.h"

@class NSString, PBDataReader;

@interface GEOPDSearchLocationScope : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  GEOLatLng *_center;
  double _displayRegionLimitKm;
  GEOMapRegion *_mapRegion;
  GEOPDSearchMultiMapRegion *_multiMapRegion;
  double _scopeDistanceLimitKm;
  NSString *_winDistanceGeohash4;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  int _locationScopeType;
  int _scopeDistanceType;
  float _winDistanceKmMean;
  float _winDistanceKmP50;
  float _winDistanceKmP80;
  float _winDistanceKmP90;
  float _winDistanceKmP95;
  float _winDistanceKmP99;
  BOOL _hasBelowStreetGeo;
  BOOL _isBlendingScope;
  BOOL _isMixedIntent;
  struct { unsigned int x :1 has_displayRegionLimitKm; unsigned int x :1 has_scopeDistanceLimitKm; unsigned int x :1 has_locationScopeType; unsigned int x :1 has_scopeDistanceType; unsigned int x :1 has_winDistanceKmMean; unsigned int x :1 has_winDistanceKmP50; unsigned int x :1 has_winDistanceKmP80; unsigned int x :1 has_winDistanceKmP90; unsigned int x :1 has_winDistanceKmP95; unsigned int x :1 has_winDistanceKmP99; unsigned int x :1 has_hasBelowStreetGeo; unsigned int x :1 has_isBlendingScope; unsigned int x :1 has_isMixedIntent; unsigned int x :1 read_center; unsigned int x :1 read_mapRegion; unsigned int x :1 read_multiMapRegion; unsigned int x :1 read_winDistanceGeohash4; unsigned int x :1 wrote_anyField; } _flags;
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

#endif /* GEOPDSearchLocationScope_h */

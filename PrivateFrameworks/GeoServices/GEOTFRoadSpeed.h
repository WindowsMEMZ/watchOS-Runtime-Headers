//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOTFRoadSpeed_h
#define GEOTFRoadSpeed_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableArray, PBDataReader;

@interface GEOTFRoadSpeed : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  struct { long long *list; unsigned long long count; unsigned long long size; } _geoIds;
  struct { float *list; unsigned long long count; unsigned long long size; } _latitudeCoordinates;
  struct { float *list; unsigned long long count; unsigned long long size; } _longitudeCoordinates;
  long long _geoid;
  NSData *_openlr;
  NSMutableArray *_predictedSpeeds;
  NSData *_zilch;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  int _color;
  float _confidence;
  unsigned int _decayTimeWindowInMinutes;
  float _endOffset;
  unsigned int _speedKph;
  float _startOffset;
  BOOL _hidden;
  struct { unsigned int x :1 has_color; unsigned int x :1 has_confidence; unsigned int x :1 has_decayTimeWindowInMinutes; unsigned int x :1 has_endOffset; unsigned int x :1 has_speedKph; unsigned int x :1 has_startOffset; unsigned int x :1 has_hidden; unsigned int x :1 read_geoIds; unsigned int x :1 read_latitudeCoordinates; unsigned int x :1 read_longitudeCoordinates; unsigned int x :1 read_openlr; unsigned int x :1 read_predictedSpeeds; unsigned int x :1 read_zilch; unsigned int x :1 wrote_anyField; } _flags;
}

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* GEOTFRoadSpeed_h */

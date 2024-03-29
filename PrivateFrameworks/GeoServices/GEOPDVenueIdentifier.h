//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDVenueIdentifier_h
#define GEOPDVenueIdentifier_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class PBDataReader, PBUnknownFields;

@interface GEOPDVenueIdentifier : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  PBUnknownFields *_unknownFields;
  struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _containedBys;
  struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _sectionIds;
  unsigned long long _buildingId;
  unsigned long long _featureId;
  unsigned long long _fixtureId;
  unsigned long long _geminiId;
  unsigned long long _levelId;
  unsigned long long _unitId;
  unsigned long long _venueGeminiId;
  unsigned long long _venueId;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  int _levelOrdinal;
  struct { unsigned int x :1 has_buildingId; unsigned int x :1 has_featureId; unsigned int x :1 has_fixtureId; unsigned int x :1 has_geminiId; unsigned int x :1 has_levelId; unsigned int x :1 has_unitId; unsigned int x :1 has_venueGeminiId; unsigned int x :1 has_venueId; unsigned int x :1 has_levelOrdinal; unsigned int x :1 read_unknownFields; unsigned int x :1 read_containedBys; unsigned int x :1 read_sectionIds; unsigned int x :1 wrote_anyField; } _flags;
}

/* instance methods */
- (id)initWithVenueID:(unsigned long long)id featureID:(unsigned long long)id businessID:(unsigned long long)id;
- (id)initWithVenueID:(unsigned long long)id featureID:(unsigned long long)id businessID:(unsigned long long)id componentIdentifier:(id)identifier;
- (id)initWithIdentifier:(id)identifier;
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

#endif /* GEOPDVenueIdentifier_h */

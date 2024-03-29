//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDResultRefinementGuidesHome_h
#define GEOPDResultRefinementGuidesHome_h
@import Foundation;

#include "PBCodable.h"
#include "GEOLatLng.h"
#include "GEOMapRegion.h"
#include "GEOPDMapsIdentifier.h"
#include "GEOPDRelatedSearchSuggestion.h"
#include "GEOPDResultRefinementMetadata.h"
#include "NSCopying-Protocol.h"

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPDResultRefinementGuidesHome : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  PBUnknownFields *_unknownFields;
  GEOLatLng *_center;
  NSString *_displayName;
  GEOPDRelatedSearchSuggestion *_hint;
  GEOMapRegion *_mapRegion;
  GEOPDResultRefinementMetadata *_metadata;
  GEOPDMapsIdentifier *_placeId;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  int _type;
  struct { unsigned int x :1 has_type; unsigned int x :1 read_unknownFields; unsigned int x :1 read_center; unsigned int x :1 read_displayName; unsigned int x :1 read_hint; unsigned int x :1 read_mapRegion; unsigned int x :1 read_metadata; unsigned int x :1 read_placeId; unsigned int x :1 wrote_anyField; } _flags;
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

#endif /* GEOPDResultRefinementGuidesHome_h */

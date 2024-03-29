//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOURLItem_h
#define GEOURLItem_h
@import Foundation;

#include "PBCodable.h"
#include "GEOMapItemStorage.h"
#include "GEOPlace.h"
#include "NSCopying-Protocol.h"

@class PBDataReader;

@interface GEOURLItem : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  GEOMapItemStorage *_mapItemStorage;
  GEOPlace *_place;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  BOOL _currentLocation;
  struct { unsigned int x :1 has_currentLocation; unsigned int x :1 read_mapItemStorage; unsigned int x :1 read_place; unsigned int x :1 wrote_anyField; } _flags;
}

/* instance methods */
- (id)mapItem;
- (void)setMapItem:(id)item;
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

#endif /* GEOURLItem_h */

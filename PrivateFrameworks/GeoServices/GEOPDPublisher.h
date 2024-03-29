//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDPublisher_h
#define GEOPDPublisher_h
@import Foundation;

#include "PBCodable.h"
#include "GEOLocalizedString.h"
#include "GEOPDCaptionedPhoto.h"
#include "GEOPDMapsIdentifier.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOPDPublisher : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  PBUnknownFields *_unknownFields;
  NSMutableArray *_collectionIds;
  GEOLocalizedString *_name;
  GEOPDCaptionedPhoto *_photo;
  NSMutableArray *_publisherDescriptions;
  GEOPDMapsIdentifier *_publisherId;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  int _errorState;
  unsigned int _numCollections;
  struct { unsigned int x :1 has_errorState; unsigned int x :1 has_numCollections; unsigned int x :1 read_unknownFields; unsigned int x :1 read_collectionIds; unsigned int x :1 read_name; unsigned int x :1 read_photo; unsigned int x :1 read_publisherDescriptions; unsigned int x :1 read_publisherId; unsigned int x :1 wrote_anyField; } _flags;
}

/* instance methods */
- (id)publisherDescription;
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

#endif /* GEOPDPublisher_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDMediaLinkPositionMetaData_h
#define GEOPDMediaLinkPositionMetaData_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class PBUnknownFields;

@interface GEOPDMediaLinkPositionMetaData : PBCodable<NSCopying> {
  /* instance variables */
  PBUnknownFields *_unknownFields;
  int _collectionItemIndex;
  int _mediaLinkPosition;
  struct { unsigned int x :1 has_collectionItemIndex; unsigned int x :1 has_mediaLinkPosition; } _flags;
}

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* GEOPDMediaLinkPositionMetaData_h */

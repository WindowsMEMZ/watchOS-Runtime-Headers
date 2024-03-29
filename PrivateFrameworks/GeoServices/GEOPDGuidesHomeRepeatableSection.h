//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDGuidesHomeRepeatableSection_h
#define GEOPDGuidesHomeRepeatableSection_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDGuidesHomeRepeatableSection : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  PBUnknownFields *_unknownFields;
  NSMutableArray *_carouselGuideIds;
  NSMutableArray *_guidesLocationEntrys;
  NSString *_name;
  NSMutableArray *_publisherIds;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  int _contentType;
  int _sectionType;
  struct { unsigned int x :1 has_contentType; unsigned int x :1 has_sectionType; unsigned int x :1 read_unknownFields; unsigned int x :1 read_carouselGuideIds; unsigned int x :1 read_guidesLocationEntrys; unsigned int x :1 read_name; unsigned int x :1 read_publisherIds; unsigned int x :1 wrote_anyField; } _flags;
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

#endif /* GEOPDGuidesHomeRepeatableSection_h */

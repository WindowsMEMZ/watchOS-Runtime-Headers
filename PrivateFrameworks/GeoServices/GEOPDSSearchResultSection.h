//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDSSearchResultSection_h
#define GEOPDSSearchResultSection_h
@import Foundation;

#include "PBCodable.h"
#include "GEOStyleAttributes.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDSSearchResultSection : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  PBUnknownFields *_unknownFields;
  NSMutableArray *_resolvedItems;
  NSString *_sectionHeaderDisplayName;
  NSString *_sectionSubHeaderDisplayNameWithEnrichment;
  NSString *_sectionSubHeaderDisplayName;
  GEOStyleAttributes *_styleAttributes;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  int _searchResultSectionCellType;
  int _searchResultSectionType;
  struct { unsigned int x :1 has_searchResultSectionCellType; unsigned int x :1 has_searchResultSectionType; unsigned int x :1 read_unknownFields; unsigned int x :1 read_resolvedItems; unsigned int x :1 read_sectionHeaderDisplayName; unsigned int x :1 read_sectionSubHeaderDisplayNameWithEnrichment; unsigned int x :1 read_sectionSubHeaderDisplayName; unsigned int x :1 read_styleAttributes; unsigned int x :1 wrote_anyField; } _flags;
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

#endif /* GEOPDSSearchResultSection_h */

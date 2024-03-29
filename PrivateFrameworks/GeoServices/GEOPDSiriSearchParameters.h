//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDSiriSearchParameters_h
#define GEOPDSiriSearchParameters_h
@import Foundation;

#include "PBCodable.h"
#include "GEOAddress.h"
#include "GEOPDIndexQueryNode.h"
#include "GEOPDRecentRouteInfo.h"
#include "GEOPDViewportInfo.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDSiriSearchParameters : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  PBUnknownFields *_unknownFields;
  GEOAddress *_address;
  NSMutableArray *_businessCategoryFilters;
  GEOPDIndexQueryNode *_indexFilter;
  GEOPDRecentRouteInfo *_recentRouteInfo;
  NSString *_searchString;
  NSMutableArray *_searchSubstringDescriptors;
  GEOPDViewportInfo *_viewportInfo;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  unsigned int _maxResultCount;
  int _sortOrder;
  BOOL _isStrictMapRegion;
  BOOL _structuredSearch;
  struct { unsigned int x :1 has_maxResultCount; unsigned int x :1 has_sortOrder; unsigned int x :1 has_isStrictMapRegion; unsigned int x :1 has_structuredSearch; unsigned int x :1 read_unknownFields; unsigned int x :1 read_address; unsigned int x :1 read_businessCategoryFilters; unsigned int x :1 read_indexFilter; unsigned int x :1 read_recentRouteInfo; unsigned int x :1 read_searchString; unsigned int x :1 read_searchSubstringDescriptors; unsigned int x :1 read_viewportInfo; unsigned int x :1 wrote_anyField; } _flags;
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

#endif /* GEOPDSiriSearchParameters_h */

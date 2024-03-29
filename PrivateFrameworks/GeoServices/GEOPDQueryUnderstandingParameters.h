//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDQueryUnderstandingParameters_h
#define GEOPDQueryUnderstandingParameters_h
@import Foundation;

#include "PBCodable.h"
#include "GEOPDQueryUnderstandingTaxonomyLookupParameters.h"
#include "GEOPDQueryUnderstandingTaxonomySearchParameters.h"
#include "GEOPDViewportInfo.h"
#include "NSCopying-Protocol.h"

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPDQueryUnderstandingParameters : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  PBUnknownFields *_unknownFields;
  NSString *_searchString;
  GEOPDQueryUnderstandingTaxonomyLookupParameters *_taxonomyLookupParameters;
  GEOPDQueryUnderstandingTaxonomySearchParameters *_taxonomySearchParameters;
  GEOPDViewportInfo *_viewportInfo;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  int _type;
  int _workflow;
  struct { unsigned int x :1 has_type; unsigned int x :1 has_workflow; unsigned int x :1 read_unknownFields; unsigned int x :1 read_searchString; unsigned int x :1 read_taxonomyLookupParameters; unsigned int x :1 read_taxonomySearchParameters; unsigned int x :1 read_viewportInfo; unsigned int x :1 wrote_anyField; } _flags;
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

#endif /* GEOPDQueryUnderstandingParameters_h */

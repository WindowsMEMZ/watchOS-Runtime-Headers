//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDSearchQueryIntent_h
#define GEOPDSearchQueryIntent_h
@import Foundation;

#include "PBCodable.h"
#include "GEOPDSearchQueryIntentMetadata.h"
#include "GEOPDSearchRewrittenQueryNonPayloadField.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, PBDataReader;

@interface GEOPDSearchQueryIntent : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  NSMutableArray *_globalFeatureMaps;
  NSMutableArray *_globalStringFeatureMaps;
  GEOPDSearchQueryIntentMetadata *_queryIntentMetadata;
  GEOPDSearchRewrittenQueryNonPayloadField *_rewrittenQueryNonPayloadField;
  NSMutableArray *_whatIntents;
  NSMutableArray *_whereIntents;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 read_globalFeatureMaps; unsigned int x :1 read_globalStringFeatureMaps; unsigned int x :1 read_queryIntentMetadata; unsigned int x :1 read_rewrittenQueryNonPayloadField; unsigned int x :1 read_whatIntents; unsigned int x :1 read_whereIntents; unsigned int x :1 wrote_anyField; } _flags;
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

#endif /* GEOPDSearchQueryIntent_h */

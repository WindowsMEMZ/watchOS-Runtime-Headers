//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDSearchRewrittenQueryNonPayloadField_h
#define GEOPDSearchRewrittenQueryNonPayloadField_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface GEOPDSearchRewrittenQueryNonPayloadField : PBCodable<NSCopying> {
  /* instance variables */
  NSString *_rewrittenQuery;
  int _pipelineType;
  BOOL _hasCamelCase;
  BOOL _hasDirectionsIntent;
  BOOL _hasEmojiRewrite;
  BOOL _hasNumericSplit;
  BOOL _hasSynonymCounterpart;
  struct { unsigned int x :1 has_pipelineType; unsigned int x :1 has_hasCamelCase; unsigned int x :1 has_hasDirectionsIntent; unsigned int x :1 has_hasEmojiRewrite; unsigned int x :1 has_hasNumericSplit; unsigned int x :1 has_hasSynonymCounterpart; } _flags;
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

#endif /* GEOPDSearchRewrittenQueryNonPayloadField_h */

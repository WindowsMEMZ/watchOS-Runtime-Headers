//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOVLFSuccessDetails_h
#define GEOVLFSuccessDetails_h
@import Foundation;

#include "PBCodable.h"
#include "GEOVLFCorrection.h"
#include "NSCopying-Protocol.h"

@class PBDataReader;

@interface GEOVLFSuccessDetails : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_poseConfidence; unsigned int x :1 read_inlierSuccessIndices; unsigned int x :1 read_correction; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) BOOL hasCorrection;
@property (retain, nonatomic) GEOVLFCorrection *correction;
@property (nonatomic) BOOL hasPoseConfidence;
@property (nonatomic) double poseConfidence;
@property (readonly, nonatomic) unsigned long long inlierSuccessIndicesCount;
@property (readonly, nonatomic) unsigned int * inlierSuccessIndices;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (void)dealloc;
- (void)clearInlierSuccessIndices;
- (void)addInlierSuccessIndices:(unsigned int)indices;
- (unsigned int)inlierSuccessIndicesAtIndex:(unsigned long long)index;
- (void)setInlierSuccessIndices:(unsigned int *)indices count:(unsigned long long)count;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* GEOVLFSuccessDetails_h */

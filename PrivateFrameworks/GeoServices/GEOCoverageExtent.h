//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOCoverageExtent_h
#define GEOCoverageExtent_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class PBUnknownFields;

@interface GEOCoverageExtent : PBCodable<NSCopying> {
  /* instance variables */
  unsigned long long _coverageExceptionsSpace;
  struct { unsigned int x :1 has_maxX; unsigned int x :1 has_maxY; unsigned int x :1 has_minX; unsigned int x :1 has_minY; unsigned int x :1 has_zoom; } _flags;
}

@property (nonatomic) BOOL hasMinX;
@property (nonatomic) unsigned int minX;
@property (nonatomic) BOOL hasMinY;
@property (nonatomic) unsigned int minY;
@property (nonatomic) BOOL hasMaxX;
@property (nonatomic) unsigned int maxX;
@property (nonatomic) BOOL hasMaxY;
@property (nonatomic) unsigned int maxY;
@property (nonatomic) BOOL hasZoom;
@property (nonatomic) unsigned int zoom;
@property (readonly, nonatomic) unsigned long long coverageExceptionsCount;
@property (readonly, nonatomic) struct GEOCoverageException { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; } x5; } * coverageExceptions;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (void)dealloc;
- (void)clearCoverageExceptions;
- (void)addCoverageException:(struct GEOCoverageException { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; } x5; })exception;
- (struct GEOCoverageException { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; } x5; })coverageExceptionAtIndex:(unsigned long long)index;
- (void)setCoverageExceptions:(struct GEOCoverageException { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; } x5; } *)exceptions count:(unsigned long long)count;
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
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEOCoverageExtent_h */

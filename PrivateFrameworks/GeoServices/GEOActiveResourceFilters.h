//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOActiveResourceFilters_h
#define GEOActiveResourceFilters_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class PBUnknownFields;

@interface GEOActiveResourceFilters : PBCodable<NSCopying> {
  /* instance variables */
  unsigned long long _filtersSpace;
}

@property (readonly, nonatomic) unsigned long long filtersCount;
@property (readonly, nonatomic) struct GEOActiveResourceFilter { double x0; int x1; int x2; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; } x3; } * filters;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (void)dealloc;
- (void)clearFilters;
- (void)addFilter:(struct GEOActiveResourceFilter { double x0; int x1; int x2; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; } x3; })filter;
- (struct GEOActiveResourceFilter { double x0; int x1; int x2; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; } x3; })filterAtIndex:(unsigned long long)index;
- (void)setFilters:(struct GEOActiveResourceFilter { double x0; int x1; int x2; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; } x3; } *)filters count:(unsigned long long)count;
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

#endif /* GEOActiveResourceFilters_h */

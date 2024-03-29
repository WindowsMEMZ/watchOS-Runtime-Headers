//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOARGuidance_h
#define GEOARGuidance_h
@import Foundation;

#include "PBCodable.h"
#include "GEOFormattedString.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOARGuidance : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_type; unsigned int x :1 read_unknownFields; unsigned int x :1 read_arrowLabel; unsigned int x :1 read_gapRanges; unsigned int x :1 read_instruction; unsigned int x :1 wrote_anyField; } _flags;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasInstruction;
@property (retain, nonatomic) GEOFormattedString *instruction;
@property (readonly, nonatomic) BOOL hasArrowLabel;
@property (retain, nonatomic) NSString *arrowLabel;
@property (retain, nonatomic) NSMutableArray *gapRanges;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (Class)gapRangeType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (id)typeAsString:(int)string;
- (int)StringAsType:(id)type;
- (void)clearGapRanges;
- (void)addGapRange:(id)range;
- (unsigned long long)gapRangesCount;
- (id)gapRangeAtIndex:(unsigned long long)index;
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

#endif /* GEOARGuidance_h */

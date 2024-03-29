//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOLogMsgEventHardStop_h
#define GEOLogMsgEventHardStop_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, PBDataReader;

@interface GEOLogMsgEventHardStop : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_score; unsigned int x :1 read_digits; unsigned int x :1 read_cities; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) unsigned long long digitsCount;
@property (readonly, nonatomic) unsigned int * digits;
@property (retain, nonatomic) NSMutableArray *cities;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;

/* class methods */
+ (Class)citiesType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (void)dealloc;
- (void)clearDigits;
- (void)addDigits:(unsigned int)digits;
- (unsigned int)digitsAtIndex:(unsigned long long)index;
- (void)setDigits:(unsigned int *)digits count:(unsigned long long)count;
- (void)clearCities;
- (void)addCities:(id)cities;
- (unsigned long long)citiesCount;
- (id)citiesAtIndex:(unsigned long long)index;
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

#endif /* GEOLogMsgEventHardStop_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOCacheMiss_h
#define GEOCacheMiss_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface GEOCacheMiss : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 has_bytes; unsigned int x :1 has_count; unsigned int x :1 has_httpStatus; unsigned int x :1 has_missType; unsigned int x :1 has_requestorType; } _flags;
}

@property (nonatomic) BOOL hasRequestorType;
@property (nonatomic) int requestorType;
@property (nonatomic) BOOL hasMissType;
@property (nonatomic) int missType;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasBytes;
@property (nonatomic) unsigned int bytes;
@property (retain, nonatomic) NSMutableArray *errors;
@property (nonatomic) BOOL hasHttpStatus;
@property (nonatomic) unsigned int httpStatus;

/* class methods */
+ (Class)errorsType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)requestorTypeAsString:(int)string;
- (int)StringAsRequestorType:(id)type;
- (id)missTypeAsString:(int)string;
- (int)StringAsMissType:(id)type;
- (void)clearErrors;
- (void)addErrors:(id)errors;
- (unsigned long long)errorsCount;
- (id)errorsAtIndex:(unsigned long long)index;
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

#endif /* GEOCacheMiss_h */

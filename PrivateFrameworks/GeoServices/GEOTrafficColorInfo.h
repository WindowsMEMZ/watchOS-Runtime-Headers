//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOTrafficColorInfo_h
#define GEOTrafficColorInfo_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, PBUnknownFields;

@interface GEOTrafficColorInfo : PBCodable<NSCopying>

@property (retain, nonatomic) NSMutableArray *trafficColorAndOffsets;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (Class)trafficColorAndOffsetType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (void)clearTrafficColorAndOffsets;
- (void)addTrafficColorAndOffset:(id)offset;
- (unsigned long long)trafficColorAndOffsetsCount;
- (id)trafficColorAndOffsetAtIndex:(unsigned long long)index;
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

#endif /* GEOTrafficColorInfo_h */

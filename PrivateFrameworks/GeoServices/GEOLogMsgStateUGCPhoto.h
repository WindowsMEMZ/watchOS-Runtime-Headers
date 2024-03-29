//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOLogMsgStateUGCPhoto_h
#define GEOLogMsgStateUGCPhoto_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface GEOLogMsgStateUGCPhoto : PBCodable<NSCopying>

@property (readonly, nonatomic) unsigned long long photoSourcesCount;
@property (readonly, nonatomic) int * photoSources;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (void)dealloc;
- (void)clearPhotoSources;
- (void)addPhotoSource:(int)source;
- (int)photoSourceAtIndex:(unsigned long long)index;
- (void)setPhotoSources:(int *)sources count:(unsigned long long)count;
- (id)photoSourcesAsString:(int)string;
- (int)StringAsPhotoSources:(id)sources;
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

#endif /* GEOLogMsgStateUGCPhoto_h */

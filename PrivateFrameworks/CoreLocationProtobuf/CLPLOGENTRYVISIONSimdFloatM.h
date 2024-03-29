//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 160.0.2.0.0
//
#ifndef CLPLOGENTRYVISIONSimdFloatM_h
#define CLPLOGENTRYVISIONSimdFloatM_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface CLPLOGENTRYVISIONSimdFloatM : PBCodable<NSCopying>

@property (readonly, nonatomic) unsigned long long valuesCount;
@property (readonly, nonatomic) float * values;

/* instance methods */
- (void)dealloc;
- (void)clearValues;
- (void)addValues:(float)values;
- (float)valuesAtIndex:(unsigned long long)index;
- (void)setValues:(float *)values count:(unsigned long long)count;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* CLPLOGENTRYVISIONSimdFloatM_h */

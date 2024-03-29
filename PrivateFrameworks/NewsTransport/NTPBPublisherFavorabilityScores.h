//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBPublisherFavorabilityScores_h
#define NTPBPublisherFavorabilityScores_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface NTPBPublisherFavorabilityScores : PBCodable<NSCopying>

@property (retain, nonatomic) NSMutableArray *scores;

/* class methods */
+ (Class)scoresType;

/* instance methods */
- (void)clearScores;
- (void)addScores:(id)scores;
- (unsigned long long)scoresCount;
- (id)scoresAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBPublisherFavorabilityScores_h */

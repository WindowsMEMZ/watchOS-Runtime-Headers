//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBPersonalizationAggregateDelta_h
#define NTPBPersonalizationAggregateDelta_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface NTPBPersonalizationAggregateDelta : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 defaultClicks; unsigned int x :1 defaultImpressions; unsigned int x :1 groupBias; unsigned int x :1 impressionBias; unsigned int x :1 timestamp; } _has;
}

@property (readonly, nonatomic) BOOL hasFeatureKey;
@property (retain, nonatomic) NSString *featureKey;
@property (nonatomic) BOOL hasDefaultClicks;
@property (nonatomic) double defaultClicks;
@property (nonatomic) BOOL hasDefaultImpressions;
@property (nonatomic) double defaultImpressions;
@property (readonly, nonatomic) unsigned long long eventsCount;
@property (readonly, nonatomic) unsigned int * events;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasImpressionBias;
@property (nonatomic) double impressionBias;
@property (nonatomic) BOOL hasGroupBias;
@property (nonatomic) double groupBias;

/* instance methods */
- (void)dealloc;
- (void)clearEvents;
- (void)addEvents:(unsigned int)events;
- (unsigned int)eventsAtIndex:(unsigned long long)index;
- (void)setEvents:(unsigned int *)events count:(unsigned long long)count;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBPersonalizationAggregateDelta_h */

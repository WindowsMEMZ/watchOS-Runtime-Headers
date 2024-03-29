//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 160.0.2.0.0
//
#ifndef CLPPoiHarvest_h
#define CLPPoiHarvest_h
@import Foundation;

#include "PBCodable.h"
#include "CLPPoiTriggerEvent.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface CLPPoiHarvest : PBCodable<NSCopying>

@property (retain, nonatomic) CLPPoiTriggerEvent *triggerEvent;
@property (retain, nonatomic) NSMutableArray *locations;
@property (retain, nonatomic) NSMutableArray *accessPoints;

/* class methods */
+ (Class)locationsType;
+ (Class)accessPointsType;

/* instance methods */
- (void)clearLocations;
- (void)addLocations:(id)locations;
- (unsigned long long)locationsCount;
- (id)locationsAtIndex:(unsigned long long)index;
- (void)clearAccessPoints;
- (void)addAccessPoints:(id)points;
- (unsigned long long)accessPointsCount;
- (id)accessPointsAtIndex:(unsigned long long)index;
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

#endif /* CLPPoiHarvest_h */

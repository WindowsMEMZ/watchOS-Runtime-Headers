//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOLogMsgEventThermalPressure_h
#define GEOLogMsgEventThermalPressure_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface GEOLogMsgEventThermalPressure : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 has_chargingState; unsigned int x :1 has_collectionTrigger; unsigned int x :1 has_navMapType; unsigned int x :1 has_thermalPressure; } _flags;
}

@property (nonatomic) BOOL hasThermalPressure;
@property (nonatomic) unsigned int thermalPressure;
@property (readonly, nonatomic) unsigned long long disableMapFeaturesCount;
@property (readonly, nonatomic) int * disableMapFeatures;
@property (nonatomic) BOOL hasNavMapType;
@property (nonatomic) int navMapType;
@property (nonatomic) BOOL hasCollectionTrigger;
@property (nonatomic) int collectionTrigger;
@property (nonatomic) BOOL hasChargingState;
@property (nonatomic) int chargingState;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (void)dealloc;
- (void)clearDisableMapFeatures;
- (void)addDisableMapFeatures:(int)features;
- (int)disableMapFeaturesAtIndex:(unsigned long long)index;
- (void)setDisableMapFeatures:(int *)features count:(unsigned long long)count;
- (id)disableMapFeaturesAsString:(int)string;
- (int)StringAsDisableMapFeatures:(id)features;
- (id)navMapTypeAsString:(int)string;
- (int)StringAsNavMapType:(id)type;
- (id)collectionTriggerAsString:(int)string;
- (int)StringAsCollectionTrigger:(id)trigger;
- (id)chargingStateAsString:(int)string;
- (int)StringAsChargingState:(id)state;
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

#endif /* GEOLogMsgEventThermalPressure_h */

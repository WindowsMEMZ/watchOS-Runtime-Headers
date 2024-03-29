//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOEVStepFeedbackInfo_h
#define GEOEVStepFeedbackInfo_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface GEOEVStepFeedbackInfo : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 has_remainingBatteryCharge; unsigned int x :1 has_remainingBatteryPercentage; unsigned int x :1 has_remainingTravelRange; unsigned int x :1 has_stateOfChargeDiff; } _flags;
}

@property (nonatomic) BOOL hasRemainingBatteryPercentage;
@property (nonatomic) unsigned int remainingBatteryPercentage;
@property (nonatomic) BOOL hasRemainingTravelRange;
@property (nonatomic) unsigned int remainingTravelRange;
@property (nonatomic) BOOL hasRemainingBatteryCharge;
@property (nonatomic) unsigned int remainingBatteryCharge;
@property (nonatomic) BOOL hasStateOfChargeDiff;
@property (nonatomic) unsigned int stateOfChargeDiff;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
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

#endif /* GEOEVStepFeedbackInfo_h */

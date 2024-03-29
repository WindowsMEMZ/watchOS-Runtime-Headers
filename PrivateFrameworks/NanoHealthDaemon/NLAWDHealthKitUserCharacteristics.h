//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef NLAWDHealthKitUserCharacteristics_h
#define NLAWDHealthKitUserCharacteristics_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface NLAWDHealthKitUserCharacteristics : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 ageYears; unsigned int x :1 biologicalSex; unsigned int x :1 heightCm; unsigned int x :1 weightKg; } _has;
}

@property (nonatomic) BOOL hasWeightKg;
@property (nonatomic) long long weightKg;
@property (nonatomic) BOOL hasHeightCm;
@property (nonatomic) long long heightCm;
@property (nonatomic) BOOL hasBiologicalSex;
@property (nonatomic) long long biologicalSex;
@property (nonatomic) BOOL hasAgeYears;
@property (nonatomic) long long ageYears;

/* instance methods */
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

#endif /* NLAWDHealthKitUserCharacteristics_h */

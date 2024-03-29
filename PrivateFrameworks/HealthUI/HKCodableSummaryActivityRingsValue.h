//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKCodableSummaryActivityRingsValue_h
#define HKCodableSummaryActivityRingsValue_h
@import Foundation;

#include "PBCodable.h"
#include "HKCodableQuantity.h"
#include "NSCopying-Protocol.h"

@interface HKCodableSummaryActivityRingsValue : PBCodable<NSCopying> {
  /* instance variables */
  struct APPLE_HKCodableSummaryActivityRingsValue_1 { unsigned int x :1 activityMoveMode; unsigned int x :1 creationDate; unsigned int x :1 dateData; unsigned int x :1 endDate; unsigned int x :1 startDate; unsigned int x :1 hasEverHadAWatch; } _has;
}

@property (nonatomic) BOOL hasDateData;
@property (nonatomic) double dateData;
@property (nonatomic) BOOL hasActivityMoveMode;
@property (nonatomic) long long activityMoveMode;
@property (readonly, nonatomic) BOOL hasActiveEnergyBurned;
@property (retain, nonatomic) HKCodableQuantity *activeEnergyBurned;
@property (readonly, nonatomic) BOOL hasActiveEnergyBurnedGoal;
@property (retain, nonatomic) HKCodableQuantity *activeEnergyBurnedGoal;
@property (readonly, nonatomic) BOOL hasAppleMoveTime;
@property (retain, nonatomic) HKCodableQuantity *appleMoveTime;
@property (readonly, nonatomic) BOOL hasAppleMoveTimeGoal;
@property (retain, nonatomic) HKCodableQuantity *appleMoveTimeGoal;
@property (readonly, nonatomic) BOOL hasAppleExerciseTime;
@property (retain, nonatomic) HKCodableQuantity *appleExerciseTime;
@property (readonly, nonatomic) BOOL hasAppleExerciseTimeGoal;
@property (retain, nonatomic) HKCodableQuantity *appleExerciseTimeGoal;
@property (readonly, nonatomic) BOOL hasAppleStandHours;
@property (retain, nonatomic) HKCodableQuantity *appleStandHours;
@property (readonly, nonatomic) BOOL hasAppleStandHoursGoal;
@property (retain, nonatomic) HKCodableQuantity *appleStandHoursGoal;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) double endDate;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) double creationDate;
@property (nonatomic) BOOL hasHasEverHadAWatch;
@property (nonatomic) BOOL hasEverHadAWatch;

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

#endif /* HKCodableSummaryActivityRingsValue_h */

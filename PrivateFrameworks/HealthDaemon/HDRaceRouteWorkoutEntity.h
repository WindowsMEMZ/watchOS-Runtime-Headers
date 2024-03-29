//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDRaceRouteWorkoutEntity_h
#define HDRaceRouteWorkoutEntity_h
@import Foundation;

#include "HDHealthEntity.h"

@interface HDRaceRouteWorkoutEntity : HDHealthEntity
/* class methods */
+ (id)insertCodableRacingMetrics:(id)metrics transaction:(id)transaction error:(id *)error;
+ (BOOL)insertCodableRoutePoints:(id)points workoutPersistentID:(long long)id transaction:(id)transaction error:(id *)error;
+ (id)createRaceRouteWorkoutFromWorkout:(id)workout transaction:(id)transaction error:(id *)error;
+ (BOOL)markForDeletionWorkoutDataWithPersistentID:(long long)id transaction:(id)transaction error:(id *)error;
+ (BOOL)pruneWorkoutsMarkedForDeletionInTransaction:(id)transaction error:(id *)error;
+ (BOOL)enumerateRoutePointsForWorkoutUUID:(id)uuid timestampAnchor:(double)anchor limit:(unsigned long long)limit profile:(id)profile error:(id *)error dataHandler:(id /* block */)handler;
+ (BOOL)enumerateRoutePointsForWorkoutPersistentID:(long long)id timestampAnchor:(double)anchor limit:(unsigned long long)limit startDuration:(double)duration finishDuration:(double)duration transaction:(id)transaction error:(id *)error handler:(id /* block */)handler;
+ (id)entityForWorkoutUUID:(id)uuid transaction:(id)transaction error:(id *)error;
+ (id)startingPointForWorkoutWithPersistentID:(long long)id transaction:(id)transaction error:(id *)error;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)count;
+ (long long)protectionClass;
+ (id)privateSubEntities;

/* instance methods */
- (id)dateToDeleteInTransaction:(id)transaction error:(id *)error;
- (BOOL)setDateToDelete:(id)delete transaction:(id)transaction error:(id *)error;
@end

#endif /* HDRaceRouteWorkoutEntity_h */

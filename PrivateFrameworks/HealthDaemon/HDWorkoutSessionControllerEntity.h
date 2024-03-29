//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDWorkoutSessionControllerEntity_h
#define HDWorkoutSessionControllerEntity_h
@import Foundation;

#include "HDHealthEntity.h"

@interface HDWorkoutSessionControllerEntity : HDHealthEntity
/* class methods */
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)count;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)uniquedColumns;
+ (BOOL)storeArchivedStateWithRecoveryIdentifier:(id)identifier archivedState:(id)state workoutSession:(id)session transaction:(id)transaction error:(id *)error;
+ (BOOL)retrieveArchivedStateFromRecoveryIdentifier:(id)identifier workoutSession:(id)session transaction:(id)transaction error:(id *)error block:(id /* block */)block;
@end

#endif /* HDWorkoutSessionControllerEntity_h */

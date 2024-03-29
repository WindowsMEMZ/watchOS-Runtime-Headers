//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDFitnessFriendActivitySnapshotEntity_h
#define HDFitnessFriendActivitySnapshotEntity_h
@import Foundation;

#include "HDSampleEntity.h"

@interface HDFitnessFriendActivitySnapshotEntity : HDSampleEntity
/* class methods */
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)count;
+ (id)uniquedColumns;
+ (long long)protectionClass;
+ (id)entityEncoderForProfile:(id)profile transaction:(id)transaction purpose:(long long)purpose encodingOptions:(id)options authorizationFilter:(id /* block */)filter;
+ (id)insertDataObject:(id)object withProvenance:(id)provenance inDatabase:(id)database persistentID:(id)id error:(id *)error;
+ (BOOL)supportsObjectMerging;
+ (id)mergeDataObject:(id)object provenance:(id)provenance profile:(id)profile transaction:(id)transaction error:(id *)error insertHandler:(id /* block */)handler;
+ (id)codableObjectsFromObjectCollection:(id)collection;
+ (BOOL)addCodableObject:(id)object toCollection:(id)collection;
+ (BOOL)isConcreteEntity;
+ (BOOL)enumerateSnapshotsWithPredicate:(id)predicate anchor:(id *)anchor profile:(id)profile error:(id *)error handler:(id /* block */)handler;
@end

#endif /* HDFitnessFriendActivitySnapshotEntity_h */

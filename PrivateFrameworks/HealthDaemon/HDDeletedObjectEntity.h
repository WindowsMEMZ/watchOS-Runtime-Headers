//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDDeletedObjectEntity_h
#define HDDeletedObjectEntity_h
@import Foundation;

#include "HDDataEntity.h"

@interface HDDeletedObjectEntity : HDDataEntity
/* class methods */
+ (id)insertDeletedObject:(id)object provenanceIdentifier:(id)identifier deletionDate:(id)date inDatabase:(id)database error:(id *)error;
+ (BOOL)deleteObjectsWithPredicate:(id)predicate profile:(id)profile error:(id *)error;
+ (id)deletedObjectEntityForDeletedObject:(id)object profile:(id)profile error:(id *)error;
+ (id)deletedObjectEntityWithUUID:(id)uuid transaction:(id)transaction error:(id *)error;
+ (long long)preferredEntityType;
+ (Class)baseDataEntityClass;
+ (BOOL)requiresSampleTypePredicate;
+ (BOOL)deleteEntitiesWithPredicate:(id)predicate healthDatabase:(id)database error:(id *)error;
@end

#endif /* HDDeletedObjectEntity_h */

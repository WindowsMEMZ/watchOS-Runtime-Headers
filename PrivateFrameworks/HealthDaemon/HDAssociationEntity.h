//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDAssociationEntity_h
#define HDAssociationEntity_h
@import Foundation;

#include "HDHealthEntity.h"

@interface HDAssociationEntity : HDHealthEntity
/* class methods */
+ (id)databaseTable;
+ (id)tableAliases;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)count;
+ (id)uniquedColumns;
+ (id)indices;
+ (long long)protectionClass;
+ (id)propertyForSyncProvenance;
+ (id)propertyForSyncIdentity;
+ (id)joinClausesForProperty:(id)property;
+ (id)privateSubEntities;
+ (BOOL)associateSampleUUIDs:(id)uuids withSampleUUID:(id)uuid profile:(id)profile error:(id *)error;
+ (BOOL)associateSampleUUIDData:(id)uuiddata withSampleUUID:(id)uuid profile:(id)profile error:(id *)error;
+ (BOOL)insertEntriesWithAssociation:(id)association objects:(id)objects enforceSameSource:(BOOL)source profile:(id)profile transaction:(id)transaction error:(id *)error;
+ (BOOL)insertEntriesWithAssociationUUID:(id)uuid objectUUIDsData:(id)data profile:(id)profile error:(id *)error;
+ (BOOL)copyAssociationsFromObject:(id)object toObject:(id)object profile:(id)profile error:(id *)error;
+ (BOOL)copyAssociationsFromChildID:(id)id toObjectID:(id)id profile:(id)profile error:(id *)error;
+ (id)journalEntryForAssociation:(id)association objects:(id)objects profile:(id)profile;
+ (BOOL)_insertEntriesWithParentUUID:(id)uuid childUUIDsData:(id)data provenance:(long long)provenance syncIdentity:(long long)identity enforceSameSource:(BOOL)source permitPendingAssociations:(BOOL)associations profile:(id)profile error:(id *)error;
+ (BOOL)realizePendingAssociationsWithTransaction:(id)transaction startingAnchor:(long long)anchor error:(id *)error;
+ (id)objectIDsForAssociationEntityWithPersistentID:(long long)id profile:(id)profile error:(id *)error;
+ (id)deleteStatementForParentIDWithTransaction:(id)transaction;
+ (id)deleteStatementForChildIDsWithTransaction:(id)transaction;
+ (id)countOfObjectsAssociatedWithObjectUUID:(id)uuid profile:(id)profile error:(id *)error;
+ (id)objectUUIDsAssociatedWithObjectUUID:(id)uuid profile:(id)profile error:(id *)error;
+ (id)associationUUIDsForObjectUUID:(id)uuid profile:(id)profile error:(id *)error;
@end

#endif /* HDAssociationEntity_h */

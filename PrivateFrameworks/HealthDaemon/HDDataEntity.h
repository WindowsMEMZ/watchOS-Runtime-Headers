//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDDataEntity_h
#define HDDataEntity_h
@import Foundation;

#include "HDHealthEntity.h"
#include "HDSQLiteEntity-Protocol.h"

@class NSString;

@interface HDDataEntity : HDHealthEntity<HDSQLiteEntity>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)hk_timeZoneEncodingOptions;
+ (long long)shouldInsertObject:(id)object sourceID:(id)id profile:(id)profile transaction:(id)transaction objectToReplace:(id *)replace objectID:(id *)id error:(id *)error;
+ (BOOL)replaceExistingObject:(id)object existingObjectID:(id)id replacementObject:(id)object replacementObjectID:(id)id profile:(id)profile transaction:(id)transaction error:(id *)error;
+ (void)insertDataObjects:(id)objects insertionContext:(id)context profile:(id)profile completionHandler:(id /* block */)handler;
+ (BOOL)journalObjects:(id)objects insertionContext:(id)context profile:(id)profile error:(id *)error;
+ (void)deleteDataObjects:(id)objects restrictedSourceEntities:(id)entities failIfNotFound:(BOOL)found profile:(id)profile recursiveDeleteAuthorizationBlock:(id /* block */)block completionHandler:(id /* block */)handler;
+ (id)dataEntityForObject:(id)object profile:(id)profile error:(id *)error;
+ (id)dataEntityForObject:(id)object transaction:(id)transaction error:(id *)error;
+ (id)entityEnumeratorWithProfile:(id)profile;
+ (id)sourceIDsForObjectsOfType:(long long)type profile:(id)profile predicate:(id)predicate error:(id *)error;
+ (id)sourceIDForObjectID:(id)id type:(long long)type profile:(id)profile errorOut:(id *)out;
+ (id)predicateForObjectsFromLocalSourceWithBundleIdentifier:(id)identifier profile:(id)profile error:(id *)error;
+ (id)objectWithUUID:(id)uuid encodingOptions:(id)options profile:(id)profile error:(id *)error;
+ (id)objectWithID:(id)id encodingOptions:(id)options profile:(id)profile error:(id *)error;
+ (BOOL)generateSyncObjectsForSession:(id)session syncEntityClass:(Class)class predicate:(id)predicate syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })range profile:(id)profile messageHandler:(id)handler error:(id *)error;
+ (id)joinClausesForProperty:(id)property;
+ (id)disambiguatedSQLForProperty:(id)property;
+ (long long)protectionClass;
+ (id)propertyForSyncProvenance;
+ (id)propertyForSyncIdentity;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)count;
+ (id)foreignKeys;
+ (id)defaultForeignKey;
+ (id)indices;
+ (Class)baseDataEntityClass;
+ (Class)_deletedEntityClass;
+ (Class)_entityClassForDeletion;
+ (id)predicateMatchingPreferredEntityTypeIfRequiredWithPredicate:(id)predicate;
+ (BOOL)requiresSampleTypePredicate;
+ (id)orderingTermForSortDescriptor:(id)descriptor;
+ (id)_insertDataObject:(id)object withProvenanceID:(id)id inDatabase:(id)database error:(id *)error;
+ (id)insertDataObject:(id)object withProvenance:(id)provenance inDatabase:(id)database persistentID:(id)id error:(id *)error;
+ (BOOL)_removeObjectWithPersistentID:(long long)id database:(id)database error:(id *)error;
+ (BOOL)supportsObjectMerging;
+ (id)mergeDataObject:(id)object provenance:(id)provenance profile:(id)profile transaction:(id)transaction error:(id *)error insertHandler:(id /* block */)handler;
+ (long long)compareForReplacmentWithObject:(id)object existingObject:(id)object;
+ (long long)preferredEntityType;
+ (BOOL)isBackedByTable;
+ (BOOL)isConcreteEntity;
+ (BOOL)participatesInInsertion;
+ (id /* block */)objectInsertionFilterForProfile:(id)profile;
+ (id)entityEncoderForProfile:(id)profile transaction:(id)transaction purpose:(long long)purpose encodingOptions:(id)options authorizationFilter:(id /* block */)filter;
+ (BOOL)acceptsObject:(id)object;
+ (id)deleteStatementsForRelatedEntitiesWithTransaction:(id)transaction;
+ (BOOL)enumerateAssociatedObjectsForIdentifier:(long long)identifier inDatabase:(id)database error:(id *)error associatedObjectHandler:(id /* block */)handler;
+ (id)codableObjectsFromObjectCollection:(id)collection;
+ (BOOL)addCodableObject:(id)object toCollection:(id)collection;
+ (id)anyInDatabase:(id)database predicate:(id)predicate error:(id *)error;
+ (long long)countOfObjectsWithPredicate:(id)predicate healthDatabase:(id)database error:(id *)error;
+ (id)columnNamesForTimeOffset;
+ (id)attachmentObjectIdentifierForSampleWithUUID:(id)uuid transaction:(id)transaction error:(id *)error;
@end

#endif /* HDDataEntity_h */

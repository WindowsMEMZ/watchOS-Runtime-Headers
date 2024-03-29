//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1870.2.1.0.0
//
#ifndef EKObject_h
#define EKObject_h
@import Foundation;

#include "EKChangeSet.h"
#include "EKEventStore.h"
#include "EKFrozenMeltedPair-Protocol.h"
#include "EKObjectID.h"
#include "EKObjectValidationContext.h"
#include "EKPersistentObject.h"

@class CADGenerationStampedObjectID, NSDictionary, NSMutableDictionary, NSString;

@interface EKObject : NSObject<EKFrozenMeltedPair>

@property (readonly, nonatomic) NSString *specificIdentifier;
@property (retain, nonatomic) NSMutableDictionary *_cachedMeltedObjects;
@property (retain, nonatomic) EKPersistentObject *persistentObject;
@property (readonly, nonatomic) CADGenerationStampedObjectID *rebasedFrom;
@property (retain, nonatomic) EKEventStore *eventStore;
@property (retain, nonatomic) EKChangeSet *changeSet;
@property (retain, nonatomic) NSDictionary *cachedMeltedObjects;
@property (retain, nonatomic) NSDictionary *additionalFrozenProperties;
@property (retain, nonatomic) NSDictionary *additionalMeltedObjects;
@property (retain, nonatomic) NSMutableDictionary *_cachedValues;
@property (retain, nonatomic) EKObjectValidationContext *_validationContext;
@property (retain, nonatomic) EKPersistentObject *backingObject;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly, nonatomic) BOOL new;
@property (readonly, nonatomic) BOOL isFrozen;
@property (readonly, nonatomic) BOOL isPartialObject;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *semanticIdentifier;
@property (readonly, nonatomic) EKObjectID *objectID;
@property (readonly, nonatomic) CADGenerationStampedObjectID *CADObjectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (unsigned long long)_numberOfSharedLocksForUnitTesting;
+ (BOOL)isWeakRelationship;
+ (BOOL)isDerivedRelationship;
+ (id)knownRelationshipSingleValueKeys;
+ (id)knownRelationshipSingleValueKeysForValidation;
+ (id)knownDerivedAndSingleValueRelationshipKeys;
+ (id)knownRelationshipMultiValueKeys;
+ (id)knownRelationshipMultiValueKeysForValidation;
+ (id)knownRelationshipWeakKeys;
+ (id)knownDerivedRelationshipKeys;
+ (id)knownImmutableKeys;
+ (id)knownIdentityKeysForComparison;
+ (id)knownSummaryKeys;
+ (id)knownSingleValueKeysForComparison;
+ (id)defaultPropertyKeysToSkipForRecursiveSnapshotCopies;
+ (BOOL)isMeltedAndNotWeakRelationshipObject:(id)object forKey:(id)key;
+ (BOOL)isWeakRelationObject:(id)object forKey:(id)key;
+ (void)addChangesFromObject:(id)object toObjects:(id)objects except:(id)except;
+ (void)addChangesFromObject:(id)object toObjects:(id)objects keep:(id)keep;
+ (void)addChangesFromObject:(id)object toObjects:(id)objects passingTest:(id /* block */)test;
+ (void)_addChangesFromObject:(id)object toObjects:(id)objects passingTest:(id /* block */)test copyingBackingObjects:(BOOL)objects;
+ (id)keysToIgnoreForApplyingChanges;
+ (id)duplicatedPersistentObjectForObject:(id)object alreadyCopiedObjects:(id)objects;
+ (id)_changeSetForDiff:(id)diff;
+ (BOOL)_compareAllKnownKeysExceptKeys:(id)keys forObject:(id)object againstObject:(id)object;
+ (BOOL)_compareAllKnownKeysExceptKeys:(id)keys forObject:(id)object againstObject:(id)object compareIdentityKeys:(BOOL)keys;
+ (BOOL)_compareKnownKeys:(id)keys forObject:(id)object againstObject:(id)object;
+ (BOOL)_compareKnownKeys:(id)keys forObject:(id)object againstObject:(id)object compareIdentityKeys:(BOOL)keys compareImmutableKeys:(BOOL)keys propertiesToIgnore:(id)ignore;
+ (BOOL)_compareKnownKeys:(id)keys forObject:(id)object againstObject:(id)object compareImmutableKeys:(BOOL)keys propertiesToIgnore:(id)ignore;
+ (BOOL)_compareMultiValueRelationshipKeys:(id)keys forObject:(id)object againstObject:(id)object propertiesToIgnore:(id)ignore;
+ (BOOL)_compareMultiValueRelationshipKey:(id)key forObject:(id)object againstObject:(id)object propertiesToIgnore:(id)ignore;
+ (BOOL)_compareNonIdentityKeys:(id)keys forObject:(id)object againstObject:(id)object propertiesToIgnore:(id)ignore;
+ (BOOL)_compareNonIdentityKeys:(id)keys forObject:(id)object againstObject:(id)object compareImmutableKeys:(BOOL)keys propertiesToIgnore:(id)ignore;
+ (BOOL)_compareNonRelationshipKeys:(id)keys forObject:(id)object againstObject:(id)object propertiesToIgnore:(id)ignore;
+ (BOOL)_compareSingleValueRelationshipKey:(id)key forObject:(id)object againstObject:(id)object propertiesToIgnore:(id)ignore;
+ (BOOL)_compareSingleValueRelationshipKeys:(id)keys forObject:(id)object againstObject:(id)object propertiesToIgnore:(id)ignore;
+ (BOOL)_compareIdentityKeysForObject:(id)object againstObject:(id)object propertiesToIgnore:(id)ignore;
+ (BOOL)_compareRelationshipObject1:(id)object1 againstRelationshipObject2:(id)object2 propertiesToIgnore:(id)ignore relationshipObjectKey:(id)key;
+ (BOOL)canonicalizedEqualityTestValue1:(id)value1 value2:(id)value2 key:(id)key object1:(id)object1 object2:(id)object2;
+ (id)EKObjectChangeSummarizer_singleValueDiffKeys;
+ (id)EKObjectChangeSummarizer_multiValueDiffKeys;
+ (BOOL)_object:(id)_object equalsObject:(id)object forKeys:(id)keys compareImmutableKeys:(BOOL)keys ignoringProperties:(id)properties;
+ (BOOL)_compareKnownKeys:(id)keys forObject:(id)object againstObject:(id)object compareImmutableKeys:(BOOL)keys propertiesToIgnore:(id)ignore;
+ (BOOL)_compareKnownKeys:(id)keys forObject:(id)object againstObject:(id)object compareIdentityKeys:(BOOL)keys compareImmutableKeys:(BOOL)keys propertiesToIgnore:(id)ignore;
+ (BOOL)_compareNonIdentityKeys:(id)keys forObject:(id)object againstObject:(id)object compareImmutableKeys:(BOOL)keys propertiesToIgnore:(id)ignore;
+ (BOOL)_compareIdentityKeysForObject:(id)object againstObject:(id)object propertiesToIgnore:(id)ignore;
+ (BOOL)_compareSingleValueRelationshipKeys:(id)keys forObject:(id)object againstObject:(id)object propertiesToIgnore:(id)ignore;
+ (BOOL)_compareMultiValueRelationshipKeys:(id)keys forObject:(id)object againstObject:(id)object propertiesToIgnore:(id)ignore;
+ (BOOL)_compareMutliValueRelationshipKey:(id)key forObject:(id)object againstObject:(id)object propertiesToIgnore:(id)ignore;
+ (BOOL)_compareRelationshipObject1:(id)object1 againstRelationshipObject2:(id)object2 propertiesToIgnore:(id)ignore;
+ (BOOL)_objects:(id)_objects haveSameMeltedClass:(Class)class frozenClass:(Class)class;
+ (Class)meltedClass;
+ (Class)frozenClass;
+ (id)_createNonPartialObjectFromObject:(id)object ifPropertyIsUnavailable:(id)unavailable;
+ (id)propertiesUnavailableForPartialObjects;
+ (id)objectsIDsExistingInStoreFromObjects:(id)objects eventStore:(id)store;
+ (id)_array:(id)_array intersectedWithSet:(id)set minusSet:(id)set;

/* instance methods */
- (void)_sharedInit;
- (struct os_unfair_lock_s { unsigned int x0; } *)_lock;
- (void)_performWithLock:(id /* block */)lock;
- (id)cachedValueForKey:(id)key;
- (id)cachedValueForKey:(id)key populateBlock:(id /* block */)block;
- (void)setCachedValue:(id)value forKey:(id)key;
- (void)clearCachedValueForKey:(id)key;
- (void)clearCachedValuesForKeys:(id)keys;
- (id)cachedValueForKey:(id)key expectingCachedValue:(id)value forMasterKey:(id)key relatedKeys:(id)keys populateBlock:(id /* block */)block;
- (BOOL)shouldLoadRelationshipForValidation:(id)validation;
- (BOOL)validate:(id *)validate;
- (BOOL)validateWithOwner:(id)owner error:(id *)error;
- (void)_initChangeSetIfNone;
- (void)_markAsNewCommon;
- (void)_markAsNotNewCommon;
- (void)_markAsDeletedCommon;
- (void)_markAsUndeletedCommon;
- (void)_markAsSavedCommon;
- (void)_markAsCommittedCommon;
- (BOOL)_isNew;
- (BOOL)isDeleted;
- (BOOL)isUndeleted;
- (BOOL)isSaved;
- (BOOL)_hasChanges;
- (BOOL)hasUnsavedChanges;
- (BOOL)hasUnsavedChangesInKeys:(id)keys;
- (BOOL)hasUnsavedChangesIgnoreKeys:(id)keys;
- (BOOL)_hasUnsavedChangesInKeys:(id)keys ignoreKeys:(id)keys;
- (BOOL)_hasChangeHelperInKeys:(id)keys ignoreKeys:(id)keys checkUnsaved:(BOOL)unsaved;
- (id)_singleRelationshipKeysToCheckForChanges;
- (id)_multiRelationshipKeysToCheckForChanges;
- (BOOL)_hasChangesForKey:(id)key;
- (BOOL)_hasChangesForKey:(id)key checkUnsaved:(BOOL)unsaved;
- (BOOL)_isOnlyChangedKey:(id)key;
- (BOOL)_areOnlyChangedKeys:(id)keys;
- (id)_previousValueForKey:(id)key;
- (void)addChangesFromObject:(id)object;
- (void)addChangesFromObject:(id)object copyingBackingObjects:(BOOL)objects;
- (void)_addChangesFromObject:(id)object passingTest:(id /* block */)test ignoreRelations:(id)relations copyingBackingObjects:(BOOL)objects;
- (void)addChanges:(id)changes;
- (void)_addChanges:(id)changes copyingBackingObjects:(BOOL)objects;
- (void)applyChanges:(id)changes;
- (id)singleChangedValueForKey:(id)key;
- (void)setSingleChangedValue:(id)value forKey:(id)key;
- (id)multiChangedObjectValuesForKey:(id)key;
- (void)addMultiChangedObjectValue:(id)value forKey:(id)key;
- (void)addMultiChangedObjectValues:(id)values forKey:(id)key;
- (void)removeMultiChangedObjectValue:(id)value forKey:(id)key;
- (void)removeMultiChangedObjectValues:(id)values forKey:(id)key;
- (void)replaceMultiChangedObjectValuesWithObjectValues:(id)values forKey:(id)key;
- (id)changedKeys;
- (void)_rollbackCommon;
- (BOOL)_resetIfBackingObjectIsOfClass:(Class)class fetchResetFrozenObjectBlock:(id /* block */)block;
- (BOOL)_resetCommon;
- (BOOL)_refreshable;
- (BOOL)_refreshCommon;
- (void)refetch;
- (BOOL)revert;
- (void)_resetWithFrozenObject:(id)object;
- (void)_applyDefinedAfterFirstSaveFrom:(id)from;
- (void)_applyKnownImmutableValuesFrom:(id)from;
- (unsigned long long)_cachedMeltedObjectsCount;
- (void)_updateCachedMeltedObjectSetForMultiValueKey:(id)key usingBlock:(id /* block */)block;
- (void)addCachedMeltedObject:(id)object forMultiValueKey:(id)key;
- (void)_addCachedMeltedObject:(id)object forMultiValueKey:(id)key;
- (void)removeCachedMeltedObject:(id)object forMultiValueKey:(id)key;
- (void)_removeCachedMeltedObject:(id)object forMultiValueKey:(id)key;
- (void)setCachedMeltedObjects:(id)objects forMultiValueKey:(id)key;
- (id)cachedMeltedObjectsForMultiValueKey:(id)key;
- (void)setCachedMeltedObject:(id)object forSingleValueKey:(id)key;
- (id)cachedMeltedObjectForSingleValueKey:(id)key;
- (id)frozenOrMeltedCachedSingleRelationObjectForKey:(id)key;
- (id)frozenOrMeltedCachedMultiRelationObjectsForKey:(id)key;
- (id)meltedAndCachedSingleRelationObjectForKey:(id)key;
- (void)updateMeltedAndCachedSingleRelationObject:(id)object forKey:(id)key frozenClass:(Class)class;
- (id)meltedAndCachedMultiRelationObjectsForKey:(id)key;
- (void)updateMeltedAndCachedMultiRelationObjects:(id)objects forKey:(id)key;
- (unsigned long long)meltedAndCachedMultiRelationCountForKey:(id)key;
- (void)updateAfterApplyingChanges:(id)changes;
- (void)updateMeltedCacheForChangeSet:(id)set;
- (void)updateMultiValueCacheForChangeSet:(id)set preservingExistingAdds:(BOOL)adds;
- (void)_resetAfterUpdatingChangeSetOrBackingObjectWithForce:(BOOL)force;
- (void)_resetAfterUpdatingChangeSetOrBackingObject;
- (void)_resetInternalStateWithForce:(BOOL)force;
- (void)_resetMeltedCache;
- (void)emptyMeltedCache;
- (void)emptyMeltedCacheForKey:(id)key;
- (void)emptyMeltedCacheForKeys:(id)keys;
- (id)copyMeltedObjectCache;
- (void)augmentMeltedObjectCache:(id)cache;
- (id)diffWithObject:(id)object;
- (id)inverseObjectWithObject:(id)object diff:(id *)diff;
- (id)privacyDescription;
- (id)_convertBackingObjectsWithPath:(id)path updateBackingObjects:(BOOL)objects allChangedBackingObjects:(id)objects eventStore:(id)store updatedBackingObjectProvider:(id)provider;
- (id)backingObjectOfChildObject:(id)object withRelationshipKey:(id)key;
- (id)prepareReminderKitObjectForSaveWithUpdatedBackingObjectProvider:(id)provider;
- (id)cachedMeltedChildIdentifierToParentMap;
- (void)_cachedMeltedChildIdentifierToParentMap:(id)map;
- (id)_basicSummaryWithDepth:(long long)depth;
- (id)_summaryWithDepth:(long long)depth;
- (void)_addSummaryWithDepth:(long long)depth toMutableString:(id)string indentFirstLine:(BOOL)line;
- (id)init;
- (id)initWithPersistentObject:(id)object;
- (id)initWithPersistentObject:(id)object objectForCopy:(id)copy;
- (BOOL)_isPropertyUnavailable:(id)unavailable convertToFullObjectIfUnavailable:(BOOL)unavailable;
- (BOOL)isNew;
- (BOOL)hasNeverBeenCommitted;
- (BOOL)isDifferentFromCommitted;
- (id)frozenObject;
- (id)frozenObjectInStore:(id)store;
- (BOOL)isCompletelyEqual:(id)equal;
- (BOOL)isEqual:(id)equal ignoringProperties:(id)properties;
- (BOOL)isEqual:(id)equal comparingKeys:(id)keys compareImmutableKeys:(BOOL)keys ignoringProperties:(id)properties;
- (id)meltedObjectInStore:(id)store;
- (id)existingMeltedObject;
- (BOOL)canBeConvertedToFullObject;
- (id)preFrozenRelationshipObjects;
- (BOOL)isPropertyUnavailable:(id)unavailable;
- (Class)frozenClass;
- (void)rebase;
- (void)rebaseToEventStore:(id)store;
- (void)rebaseSkippingRelationProperties:(id)properties;
- (void)rebaseSkippingRelationProperties:(id)properties toEventStore:(id)store;
- (int)rowID;
- (BOOL)existsInStore;
- (BOOL)hasEverBeenCommitted;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)shallowCopyWithoutChanges;
- (id)_copyWithoutChangesInZone:(struct _NSZone *)zone;
- (id)duplicate;
- (id)duplicateToEventStore:(id)store;
- (id)committedCopy;
- (id)snapshotCopy;
- (id)snapshotCopyWithPropertyKeysToCopy:(id)copy;
- (id)snapshotCopyWithPropertyKeysToCopy:(id)copy propertyKeysToSkip:(id)skip;
- (id)previouslySavedCopy;
- (id)_recursiveSnapshotCopyWithPropertyAccessor:(id /* block */)accessor propertyKeysToCopy:(id)copy propertyKeysToSkip:(id)skip recurseOnWeakRelations:(BOOL)relations;
- (void)rollback;
- (void)reset;
- (BOOL)_reset;
- (BOOL)refresh;
- (BOOL)refreshAndNotify:(BOOL)notify;
- (id)committedValueForKey:(id)key;
- (void)markAsNew;
- (void)markAsNotNew;
- (void)markAsDeleted;
- (void)markAsUndeleted;
- (void)markAsSaved;
- (void)markAsCommitted;
- (void)_performBlockOnOwnedCachedRelatedObjects:(id /* block */)objects;
- (void)updatePersistentValueForKeyIfNeeded:(id)needed;
- (void)_updatePersistentValueForKey:(id)key;
- (id)_propertyValueForKey:(id)key;
- (void)insertPersistentObjectIfNeeded;
- (void)updatePersistentObject;
- (void)updatePersistentObjectSkippingProperties:(id)properties;
- (void)deletePersistentObject;
- (void)addCoCommitObject:(id)object;
@end

#endif /* EKObject_h */

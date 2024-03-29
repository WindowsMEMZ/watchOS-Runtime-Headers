//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLLocalChangeEventBuilder_h
#define PLLocalChangeEventBuilder_h
@import Foundation;

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface PLLocalChangeEventBuilder : NSObject {
  /* instance variables */
  NSMutableSet *_insertedObjectIDs;
  NSMutableSet *_updatedObjectIDs;
  NSMutableSet *_deletedObjectIDs;
  NSMutableDictionary *_attributesByOID;
  NSMutableDictionary *_relationshipsByOID;
  NSMutableArray *_deletedAssetCloudGUIDs;
  NSMutableArray *_deletedAlbumCloudGUIDs;
  NSMutableArray *_deletedMemoryCloudGUIDs;
  NSMutableArray *_deletedPersonCloudGUIDs;
  NSMutableArray *_deletedFaceCropCloudGUIDs;
  NSMutableArray *_deletedOwnedMomentShareCloudGUIDs;
  NSMutableArray *_deletedSubscribedMomentShareCloudGUIDs;
  NSMutableArray *_deletedSuggestionCloudGUIDs;
  NSMutableArray *_deletedUserFeedbackCloudGUIDs;
  NSMutableArray *_deletedPhotosHighlightCloudGUIDs;
  NSMutableArray *_deletedInternalResourceUUIDToResourceTypeMappings;
  NSMutableArray *_deletedOwnedLibraryScopeCloudGUIDs;
  NSMutableArray *_deletedSubscribedLibraryScopeCloudGUIDs;
}

@property (nonatomic) BOOL coalescedEvent;
@property (nonatomic) BOOL syncChange;
@property (nonatomic) BOOL unknownMergeEvent;
@property (copy, nonatomic) id /* block */ transactionFilter;
@property (copy, nonatomic) id /* block */ updatedPropertyFilter;
@property (copy, nonatomic) id /* block */ coalesceTransactionTest;
@property (readonly, nonatomic) BOOL empty;

/* class methods */
+ (id)localEventWithBuilderBlock:(id /* block */)block;
+ (id)localEventFromTransaction:(id)transaction;

/* instance methods */
- (id)init;
- (void)recordInsertedObjectID:(id)id;
- (void)recordUpdatedObjectID:(id)id;
- (void)recordDeletedObjectID:(id)id;
- (void)recordDeletedCloudGUID:(id)guid forType:(long long)type;
- (void)recordUpdatedAttributes:(unsigned long long)attributes andRelationships:(unsigned long long)relationships forObjectID:(id)id;
- (void)recordAllTransactionsFromIterator:(id)iterator;
- (void)recordTransactionsUntilNonCoalescableFromIterator:(id)iterator;
- (void)recordTransaction:(id)transaction;
- (BOOL)_shouldRecordTransaction:(id)transaction;
- (void)recordChange:(id)change;
- (void)_recordInsertChange:(id)change;
- (void)_recordUpdateChange:(id)change;
- (id)_filteredUpdatedPropertiesFromChange:(id)change;
- (void)_recordDeleteChange:(id)change;
- (void)_recordCloudDeleteForChange:(id)change;
- (Class)_cloudDeletableEntityFromObjectID:(id)id;
- (BOOL)_isCloudStateDeletedOnTombstone:(id)tombstone;
- (id /* block */)recordChangedObjectIDBlockForChangeKey:(id)key;
- (id /* block */)recordDeletedCloudGUIDBlockForChangeKey:(id)key;
- (BOOL)isEmpty;
- (id)buildLocalEvent;
- (BOOL)isCoalescedEvent;
- (BOOL)isSyncChange;
- (BOOL)isUnknownMergeEvent;
@end

#endif /* PLLocalChangeEventBuilder_h */

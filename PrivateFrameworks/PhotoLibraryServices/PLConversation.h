//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLConversation_h
#define PLConversation_h
@import Foundation;

#include "PLGenericAlbum.h"
#include "PLCreateFromSearchableItem-Protocol.h"

@class BOOL *, NSSet, NSString;

@interface PLConversation : PLGenericAlbum<PLCreateFromSearchableItem>

@property (nonatomic) BOOL needsPersistenceUpdate;
@property (nonatomic) BOOL albumShouldBeAutomaticallyDeleted;
@property (@dynamic, nonatomic) unsigned short syndicate;
@property (retain, @dynamic, nonatomic) NSSet *assets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)entityName;
+ (id)insertNewConversationAlbumWithConversationID:(id)id inManagedObjectContext:(id)context;
+ (id)albumsWithConversationIDs:(id)ids inLibrary:(id)library;
+ (id)albumWithConversationID:(id)id inLibrary:(id)library;
+ (id)createOrUpdateObjectFromSearchableItem:(id)item library:(id)library fullIndexSyncStartDate:(id)date createIfNeeded:(BOOL)needed didCreate:(BOOL *)create isSyndicatable:(BOOL *)syndicatable error:(id *)error;

/* instance methods */
- (id)mutableAssets;
- (void)_updateStartDate:(id)date;
- (void)_updateEndDate:(id)date;
- (void)updateConversationDatesFromAddedAsset:(id)asset;
- (BOOL)_isAssetIncludedInConversationDates:(id)dates;
- (BOOL)_isDateBeforeStartDate:(id)date;
- (BOOL)_isDateAfterEndDate:(id)date;
- (id)_orderedBatchedAssets;
- (void)_updateAssetSyndicationState:(unsigned short)state;
- (void)willSave;
- (unsigned long long)count;
- (BOOL)isEmpty;
- (BOOL)canPerformEditOperation:(unsigned long long)operation;
@end

#endif /* PLConversation_h */

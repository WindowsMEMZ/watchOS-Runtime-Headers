//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EMMessageRepository_h
#define EMMessageRepository_h
@import Foundation;

#include "EMRepository.h"
#include "EFFutureDelegate-Protocol.h"
#include "EFLoggable-Protocol.h"
#include "EMMailboxRepository.h"
#include "EMRemoteConnectionRecoveryAssertion.h"
#include "EMVIPManager-Protocol.h"

@class EFFuture, EFLazyCache, EFPromise, NSArray, NSCache, NSHashTable, NSMapTable, NSString, NSURL;

@interface EMMessageRepository : EMRepository<EFFutureDelegate, EFLoggable> {
  /* instance variables */
  NSMapTable *_observedMessageListItemCache;
  NSMapTable *_unobservedMessageListItemCache;
  NSMapTable *_wrappedObserversByActualObserver;
  NSHashTable *_recoverableObservers;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _messageListItemCacheLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
  EMRemoteConnectionRecoveryAssertion *_connectionRecoveryAssertion;
}

@property (readonly, copy) NSArray *currentObservers;
@property (readonly, nonatomic) NSObject<EMVIPManager> *vipManager;
@property (retain, nonatomic) NSCache *queryCountCache;
@property (retain, nonatomic) NSURL *cacheURL;
@property (retain, nonatomic) EFPromise *remoteContentCachePromise;
@property (retain, nonatomic) EFLazyCache *brandIndicatorsCache;
@property (readonly, nonatomic) EMMailboxRepository *mailboxRepository;
@property (readonly, nonatomic) EFFuture *remoteContentURLCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)log;
+ (id)signpostLog;
+ (void)addValidSortDescriptorsToEMQuery;
+ (id)remoteInterface;

/* instance methods */
- (unsigned long long)signpostID;
- (id)initInternal;
- (id)initWithRemoteConnection:(id)connection mailboxRepository:(id)repository vipManager:(id)manager;
- (void)dealloc;
- (void)_notifyRecoverableObservers;
- (void)isDataAccessible:(id /* block */)accessible;
- (void)didStartBlockingMainThreadForFuture:(id)future;
- (void)didFinishBlockingMainThreadForFuture:(id)future;
- (void)performQuery:(id)query limit:(long long)limit completionHandler:(id /* block */)handler;
- (void)performCountQuery:(id)query completionHandler:(id /* block */)handler;
- (id)messageListItemsForObjectIDs:(id)ids;
- (id)messageListItemsForObjectIDs:(id)ids observationIdentifier:(id)identifier;
- (id)_messageListItemsForObjectIDs:(id)ids observationIdentifier:(id)identifier checkCache:(BOOL)cache;
- (id)messageForObjectID:(id)id;
- (id)_cachedItemForItem:(id)item observers:(id)observers validationBlock:(id /* block */)block;
- (id)_existingObservedItemForObjectID:(id)id;
- (BOOL)_anyObserver:(id)observer containsObjectID:(id)id;
- (id)performQuery:(id)query withObserver:(id)observer;
- (void)refreshQueryWithObserver:(id)observer;
- (void)_removeItemsFromObservedItemsCacheIfNotObservedByObservers:(id)observers;
- (id)startCountingQuery:(id)query includingServerCountsForMailboxScope:(id)scope withObserver:(id)observer;
- (void)setQueryCount:(id)count forQueryIdentifier:(id)identifier;
- (id)startObservingOneTimeCodes:(id)codes;
- (id)requestRepresentationForMessageWithID:(id)id options:(id)options delegate:(id)delegate completionHandler:(id /* block */)handler;
- (id)requestRepresentationForMessageWithID:(id)id requestID:(unsigned long long)id options:(id)options delegate:(id)delegate completionHandler:(id /* block */)handler;
- (void)requestRichLinkMetadataForRichLinkID:(id)id messageID:(id)id completionHandler:(id /* block */)handler;
- (void)performMessageChangeAction:(id)action;
- (void)performOneTimeCodeMessageDeletionWithObjectID:(id)id afterDelay:(double)delay;
- (id)performMessageChangeActionReturningUndoAction:(id)action;
- (void)_updateObserversForAction:(id)action;
- (BOOL)_shouldActionUpdateObserversForDeletedObjectIDs:(id)ids;
- (void)_updateObserversForFlagChangeAction:(id)action;
- (void)_updateObserversForDeletedObjectIDs:(id)ids;
- (void)resetAllPrecomputedThreadScopes;
- (void)setCachedMetadataJSON:(id)json forKey:(id)key messageID:(id)id;
- (id)cachedMetadataJSONForKey:(id)key messageID:(id)id;
- (void)getCachedMetadataJSONForKey:(id)key messageID:(id)id handler:(id /* block */)handler;
- (id)metadataForAddresses:(id)addresses;
- (void)setUpURLCacheWithMemoryCapacity:(unsigned long long)capacity;
- (void)noteViewOfRemoteContentLinks:(id)links;
- (void)getRemoteContentURLInfoOrderedBy:(long long)by inReverseOrder:(BOOL)order limit:(long long)limit completionHandler:(id /* block */)handler;
- (void)parseRemoteContentURLsFromMessageWithObjectID:(id)id completionHandler:(id /* block */)handler;
- (id)brandIndicatorForLocation:(id)location;
- (id)predictMailboxForMovingMessages:(id)messages completionHandler:(id /* block */)handler;
- (id)predictMailboxForMovingMessagesWithIDs:(id)ids completionHandler:(id /* block */)handler;
- (void)loadOlderMessagesForMailboxes:(id)mailboxes;
- (id)messageObjectIDForURL:(id)url;
- (id)messageForSearchableItemIdentifier:(id)identifier;
- (id)messageObjectIDsForSearchableItemIdentifiers:(id)identifiers;
- (id)persistentIDForMessageObjectID:(id)id;
- (void)_applyChangesToCachedObjects:(id)objects;
- (void)_detectChangesForMatchedAddedObjectIDs:(id)ids observerationIdentifier:(id)identifier matchedChangesHandler:(id /* block */)handler;
- (void)_blockedSendersDidChange:(id)change;
- (void)_vipsDidChange:(id)change;
- (void)_broadcastMessageListItemChangesToObservers:(id /* block */)observers;
@end

#endif /* EMMessageRepository_h */

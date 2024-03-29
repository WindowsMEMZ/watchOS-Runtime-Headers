//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDMessageQueryHelper_h
#define EDMessageQueryHelper_h
@import Foundation;

#include "EDMessageChangeHookResponder-Protocol.h"
#include "EDMessagePersistence.h"
#include "EDMessageQueryEvaluator.h"
#include "EDMessageQueryHelperDelegate-Protocol.h"
#include "EDMessageQueryHelperMessageSource-Protocol.h"
#include "EDPersistenceHookRegistry.h"
#include "EDRemindMeNotificationController.h"
#include "EDRemindMeNotificationControllerObserver-Protocol.h"
#include "EDRemoteSearchDelegate-Protocol.h"
#include "EDSenderBucketChangeHookResponder-Protocol.h"
#include "EFCancelable-Protocol.h"
#include "EFLoggable-Protocol.h"

@class EFCancelationToken, EMQuery, NSMutableSet, NSPredicate, NSString;
@protocol EDRemoteSearchProvider, EFScheduler;

@interface EDMessageQueryHelper : NSObject<EDMessageChangeHookResponder, EDRemindMeNotificationControllerObserver, EDRemoteSearchDelegate, EDSenderBucketChangeHookResponder, EFLoggable, EDMessageQueryHelperMessageSource, EFCancelable> {
  /* instance variables */
  struct atomic_flag { atomic  _Value; BOOL x0; } _didStart;
  NSMutableSet *_noLongerMatchingMessages;
  NSMutableSet *_ignoredMessages;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _noLongerMatchingMessagesLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ignoredMessagesLock;
}

@property (readonly, nonatomic) long long initialBatchSize;
@property (readonly, nonatomic) long long maximumBatchSize;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (readonly, nonatomic) NSObject<EDRemoteSearchProvider> *remoteSearchProvider;
@property (readonly, nonatomic) EDRemindMeNotificationController *remindMeNotificationController;
@property (readonly, nonatomic) NSObject<EFScheduler> *scheduler;
@property (readonly, weak, nonatomic) NSObject<EDMessageQueryHelperDelegate> *delegate;
@property (retain, nonatomic) EDMessageQueryEvaluator *queryEvaluator;
@property (nonatomic) BOOL shouldReconcileJournal;
@property (nonatomic) BOOL keepMessagesInListOnBucketChange;
@property (readonly, nonatomic) BOOL updateDisplayDate;
@property (retain, nonatomic) NSPredicate *ignoreMessagesPredicate;
@property (nonatomic) BOOL addMessagesSynchronously;
@property (readonly) NSString *pendingFlagChangesKey;
@property (readonly) NSString *pendingConversationIDChangesKey;
@property (readonly) NSString *pendingSenderBucketChangesKey;
@property (readonly) NSString *pendingReadLaterDateChangesKey;
@property (readonly) NSString *pendingDisplayDateChangesKey;
@property (retain, nonatomic) EFCancelationToken *cancelationToken;
@property (readonly, nonatomic) EMQuery *query;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)log;

/* instance methods */
- (id)initWithQuery:(id)query initialBatchSize:(long long)size maximumBatchSize:(long long)size messagePersistence:(id)persistence hookRegistry:(id)registry remoteSearchProvider:(id)provider scheduler:(id)scheduler remindMeNotificationController:(id)controller delegate:(id)delegate shouldReconcileJournal:(BOOL)journal shouldAddMessagesSynchronously:(BOOL)synchronously keepMessagesInListOnBucketChange:(BOOL)change;
- (void)dealloc;
- (void)start;
- (void)cancel;
- (void)_updateDisplayDateForMessagesIfNeeded;
- (void)_getInitialResults;
- (id)_predicateWithAdditionalPredicates:(id)predicates;
- (id)messagesWithAdditionalPredicates:(id)predicates limit:(long long)limit;
- (id)_filteredMessagesForPredicate:(id)predicate limit:(long long)limit;
- (id)sortableMessagesWithAdditionalPredicates:(id)predicates limit:(long long)limit;
- (void)_foundMessages:(id)messages;
- (id)_unjournaledMessagesForMessages:(id)messages;
- (void)persistenceDidAddMessages:(id)messages generationWindow:(id)window;
- (void)persistenceDidDeleteAllMessagesInMailboxesWithURLs:(id)urls generationWindow:(id)window;
- (void)persistenceDidReconcileJournaledMessages:(id)messages generationWindow:(id)window;
- (void)persistenceWillChangeFlags:(id)flags messages:(id)messages;
- (void)persistenceDidChangeFlags:(id)flags messages:(id)messages generationWindow:(id)window;
- (void)persistenceWillChangeReadLaterDate:(id)date messages:(id)messages;
- (void)persistenceDidChangeReadLaterDate:(id)date messages:(id)messages changeIsRemote:(BOOL)remote generationWindow:(id)window;
- (void)persistenceDidChangeConversationNotificationLevel:(long long)level conversationID:(long long)id generationWindow:(id)window;
- (void)persistenceDidDeleteMessages:(id)messages generationWindow:(id)window;
- (void)_persistenceDidDeleteMessages:(id)messages includeMessagesWithDeletedFlag:(BOOL)flag;
- (void)persistenceWillChangeConversationID:(long long)id messages:(id)messages;
- (void)persistenceIsChangingConversationID:(long long)id messages:(id)messages generationWindow:(id)window;
- (void)persistenceDidChangeGlobalMessageID:(long long)id orConversationID:(long long)id message:(id)message generationWindow:(id)window;
- (void)persistenceDidUpdateProperties:(id)properties message:(id)message generationWindow:(id)window;
- (void)persistenceWillUpdateDisplayDateForMessages:(id)messages;
- (void)persistenceDidUpdateDisplayDateForMessages:(id)messages changeIsRemote:(BOOL)remote generation:(long long)generation;
- (void)persistenceWillChangeSendersForAddresses:(id)addresses;
- (void)persistenceWillChangeSenders:(id)senders;
- (void)persistenceWillAddAddresses:(id)addresses toSender:(id)sender;
- (void)persistenceWillRemoveAddresses:(id)addresses fromSender:(id)sender;
- (void)_prepareForSenderBucketChangeForThreadsWithSenderAddresses:(id)addresses;
- (void)persistenceDidChangeSenders:(id)senders generation:(long long)generation;
- (void)persistenceDidAddAddresses:(id)addresses toSender:(id)sender generation:(long long)generation;
- (void)persistenceDidRemoveAddresses:(id)addresses fromSender:(id)sender generation:(long long)generation;
- (void)_reportSenderBucketChangeForThreadsWithSenderAddresses:(id)addresses;
- (void)_reportChangesForPersistedMessages:(id)messages withPendingChangesKey:(id)key keyPaths:(id)paths;
- (void)_reportChangesForCurrentlyMatchingMessages:(id)messages previouslyMatchingMessages:(id)messages keyPaths:(id)paths;
- (id)_persistedMessagesFromSendersWithAddresses:(id)addresses;
- (void)_calculateAndReportChangesForPersistedMessages:(id)messages withPendingChangesKey:(id)key changeBlock:(id /* block */)block;
- (void)remoteSearchDidFinish;
- (void)remoteSearchDidFindMessages:(id)messages;
- (void)controller:(id)controller messageTimerFired:(id)fired;
- (id)_transformAndFilterMessages:(id)messages includeDeleted:(BOOL)deleted removeIgnoredMessages:(BOOL)messages;
@end

#endif /* EDMessageQueryHelper_h */

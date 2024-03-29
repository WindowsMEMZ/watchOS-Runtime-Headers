//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDCKChatSyncController_h
#define IMDCKChatSyncController_h
@import Foundation;

#include "IMDCKAbstractSyncController.h"
#include "IMDCKChatSyncCKOperationFactory.h"
#include "IMDChatRegistry.h"
#include "IMDRecordZoneManager.h"
#include "SyncTokenStoreProviding-Protocol.h"

@class CKRecord, CKServerChangeToken;
@protocol OS_dispatch_queue;

@interface IMDCKChatSyncController : IMDCKAbstractSyncController

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain, nonatomic) IMDChatRegistry *chatRegistry;
@property (retain, nonatomic) IMDRecordZoneManager *recordZoneManager;
@property (retain, nonatomic) NSObject<SyncTokenStoreProviding> *syncTokenStore;
@property (retain, nonatomic) CKServerChangeToken *latestSyncToken;
@property (retain, nonatomic) IMDCKChatSyncCKOperationFactory *CKOperationFactory;
@property (retain, nonatomic) CKRecord *lockRecord;
@property (nonatomic) BOOL fetchedChatsDuringLastSync;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)initWithSyncTokenStore:(id)store;
- (id)init;
- (long long)syncControllerRecordType;
- (id)recordStore;
- (id)_generateLockRecord;
- (void)_migrateServerChangeToken;
- (id)_changeTokenKey;
- (id)_copyChatsToUploadWithLimit:(unsigned long long)limit;
- (id)_randomSalt;
- (id)_newckRecordsFromChats:(id)chats;
- (id)_chatZoneID;
- (void)_scheduleOperation:(id)operation;
- (void)_updateChatUsingCKRecord:(id)ckrecord onRead:(BOOL)read didSucceed:(BOOL)succeed dispatchToMain:(BOOL)main;
- (void)_resolveChatConflictUsingCKRecord:(id)ckrecord localGUID:(id)guid;
- (void)_markChatAsDefferedForSyncingUsingRecord:(id)record;
- (BOOL)_chatZoneCreated;
- (void)_processModifyPerRecordCallBack:(id)back error:(id)error recordIDtoGUIDmap:(id)guidmap;
- (BOOL)_lockRecordHadConflict:(id)conflict;
- (void)_processModifyRecordCompletion:(id)completion deletedRecordIDs:(id)ids error:(id)error completionBlock:(id /* block */)block;
- (void)_writeCKRecordsToChatZone:(id)zone activity:(id)activity withCompletion:(id /* block */)completion;
- (unsigned long long)_numberOfChatsToFetch;
- (unsigned long long)_numberOfChatsToWrite;
- (BOOL)_shouldResyncChatsForError:(id)error;
- (void)_logGreenTeaLogsForChats:(id)chats;
- (void)_writeDirtyChatsToCloudKitWithActivity:(id)activity completion:(id /* block */)completion;
- (id)_fetchChatRecordOperationWithActivity:(id)activity;
- (void)_processRecordDeletion:(id)deletion;
- (void)_processRecordChanged:(id)changed;
- (void)_processRecordZoneChangeTokenUpdated:(id)updated zoneID:(id)id clienChangeToken:(id)token;
- (void)_processRecordZoneFetchCompletion:(id)completion zoneID:(id)id clientChangeTokenData:(id)data moreComing:(BOOL)coming error:(id)error;
- (void)_kickOffWriteOnCKQueueWithActivity:(id)activity completion:(id /* block */)completion;
- (void)_kickOffWriteIfNeededForSyncType:(long long)type activity:(id)activity completion:(id /* block */)completion;
- (void)_processFetchRecordChangesCompleted:(id)completed activity:(id)activity completion:(id /* block */)completion syncType:(long long)type;
- (void)deleteChatSyncToken;
- (void)_syncChatsWithCloudKitWithCompletionType:(long long)type activity:(id)activity syncChatsCompletionBlock:(id /* block */)block;
- (void)_anyChatExistsOnServerWithResultsLimit:(int)limit changeToken:(id)token activity:(id)activity completion:(id /* block */)completion;
- (void)anyChatExistsOnServerWithActivity:(id)activity completion:(id /* block */)completion;
- (void)deleteChatZone;
- (BOOL)_eligibleForTruthZone;
- (id)_recordKeyManagerSharedInstance;
- (void)_needsToMarkAllChatsAsNeedingSync;
- (BOOL)_shouldMarkAllChatsAsNeedingSync;
- (void)_hasMarkedAllChatsAsNeedingSync;
- (void)syncChatsWithType:(long long)type withActivity:(id)activity completion:(id /* block */)completion;
- (void)__syncChatsWithCloudKit:(long long)kit attemptCount:(unsigned long long)count activity:(id)activity withCompletion:(id /* block */)completion;
- (void)clearLocalSyncState:(unsigned long long)state;
- (id)_copyRecordIDsToDelete;
- (void)_handleChatDeletionCompletionForRecordIDs:(id)ids error:(id)error;
- (void)syncPendingDeletionWithCompletion:(id /* block */)completion;
- (void)_deleteChatRecordsWithRecordIDs:(id)ids completion:(id /* block */)completion;
- (void)_filterRecordIDsToChatsWithNoRecentModifications:(id)modifications completion:(id /* block */)completion;
@end

#endif /* IMDCKChatSyncController_h */

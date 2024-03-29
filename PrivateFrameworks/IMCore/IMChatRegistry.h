//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMChatRegistry_h
#define IMChatRegistry_h
@import Foundation;

#include "IMDaemonController.h"
#include "IMDaemonProtocol-Protocol.h"
#include "IMDaemonQueryController.h"
#include "TUConversationManagerDelegate-Protocol.h"

@class BOOL *, IMContactStore, IMSharedWithYouManager, IMTimer, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, NSString, NSUserActivity, TUConversationManager;
@protocol OS_dispatch_queue;

@interface IMChatRegistry : NSObject<TUConversationManagerDelegate> {
  /* instance variables */
  BOOL _postMessageSentNotifications;
  unsigned long long _defaultNumberOfMessagesToLoad;
}

@property (readonly, nonatomic) NSArray *allExistingChats;
@property (readonly, nonatomic) unsigned long long numberOfExistingChats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *cachedChats;
@property (readonly, nonatomic) unsigned long long numberOfCachedChats;
@property (readonly, nonatomic) BOOL blackholedChatsExist;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *contactStoreQueue;
@property (nonatomic) BOOL filterediMessageChatsExist;
@property (retain, nonatomic) IMContactStore *contactStore;
@property (nonatomic) BOOL _postMessageSentNotifications;
@property (nonatomic) unsigned long long _defaultNumberOfMessagesToLoad;
@property (retain, nonatomic) NSArray *simulatedChats;
@property (readonly, nonatomic) BOOL _isLoading;
@property (retain, nonatomic) NSArray *preExistingAllChats;
@property (readonly, nonatomic) TUConversationManager *conversationManager;
@property (retain, nonatomic) NSString *historyModificationStamp;
@property (retain, nonatomic) IMTimer *markAsReadTimer;
@property (nonatomic) double timerStartTimeInterval;
@property (nonatomic) BOOL loading;
@property (nonatomic) BOOL daemonHadTerminated;
@property (nonatomic) BOOL wantsHistoryReload;
@property (nonatomic) BOOL isInternalInstall;
@property (retain, nonatomic) NSMutableDictionary *chatsBeingLoadedMap;
@property (retain, nonatomic) NSMutableDictionary *chatPersonIDToChatMap;
@property (readonly, nonatomic) NSObject<IMDaemonProtocol> *remoteDaemon;
@property (readonly, nonatomic) IMDaemonController *daemonController;
@property (readonly, nonatomic) IMDaemonQueryController *daemonQueryController;
@property (readonly, nonatomic) IMSharedWithYouManager *sharedWithYouManager;
@property (readonly, nonatomic) NSMutableArray *allChatsInProcess;
@property (readonly, nonatomic) NSMutableArray *cachedChatsInThreadNameMap;
@property (readonly, nonatomic) NSMutableDictionary *chatGUIDToChatMap;
@property (readonly, nonatomic) NSMutableDictionary *chatGUIDToCurrentThreadMap;
@property (readonly, nonatomic) NSMutableDictionary *chatGUIDToInfoMap;
@property (readonly, nonatomic) NSMutableDictionary *threadNameToChatMap;
@property (readonly, nonatomic) NSMutableDictionary *simulatedChatGUIDToChatMap;
@property (readonly, nonatomic) NSMutableDictionary *chatGUIDToiMessageSentOrReceivedMap;
@property (copy, nonatomic) NSDictionary *filterCategoryToEarliestInitiallyFetchedLastMessageDate;
@property (readonly, nonatomic) NSMutableDictionary *groupIDToChatMap;
@property (readonly, nonatomic) NSMutableDictionary *groupParticipantToChatsMap;
@property (retain, nonatomic) NSUserActivity *userActivity;
@property (nonatomic) BOOL processingChatCacheMiss;
@property (nonatomic) BOOL blackholedChatsExist;
@property (nonatomic) BOOL firstLoad;
@property (nonatomic) unsigned long long unreadCount;
@property (nonatomic) long long lastFailedMessageDate;
@property (retain, nonatomic) NSSet *registryChangeHistoryChatsToUnregister;
@property (retain, nonatomic) NSSet *registryChangeHistoryChatsToObserve;

/* class methods */
+ (BOOL)hasInitializedChatFiltering;
+ (void)setHasInitializedChatFiltering:(BOOL)filtering;
+ (id)performanceLogHandle;
+ (id)sharedInstance;
+ (id)sharedRegistry;
+ (id)sharedRegistryIfAvailable;
+ (void)setMessageClass:(Class)class;
+ (Class)messageClass;

/* instance methods */
- (id)messagesURLWithChat:(id)chat orHandles:(id)handles withMessageText:(id)text;
- (id)messagesURLWithChat:(id)chat;
- (id)messagesURLWithMessageGUID:(id)guid;
- (id)chatForURL:(id)url outMessageText:(id *)text outRecipientIDs:(id *)ids outService:(id *)service outMessageGUID:(id *)guid;
- (id)chatForURL:(id)url outMessageText:(id *)text outRecipientIDs:(id *)ids outService:(id *)service outMessageGUID:(id *)guid presentOverlay:(BOOL *)overlay;
- (id)chatForURL:(id)url outMessageText:(id *)text outRecipientIDs:(id *)ids outService:(id *)service outMessageGUID:(id *)guid presentOverlay:(BOOL *)overlay outSIMID:(id *)simid;
- (void)setUserActivityForChat:(id)chat orHandles:(id)handles;
- (id)_bestChatForHandleIDs:(id)ids;
- (id)_inPersonHandleFromIMHandle:(id)imhandle contact:(id)contact;
- (id)_inPersonNameForContact:(id)contact imHandle:(id)handle;
- (id)_inPersonFromIMHandle:(id)imhandle isMe:(BOOL)me;
- (id)_interactionForMessage:(id)message inChat:(id)chat;
- (id)_sendMessageInteractionForMessage:(id)message inChat:(id)chat;
- (id)_unsendMessageInteractionForMessage:(id)message inChat:(id)chat;
- (void)setUserActivityForChat:(id)chat message:(id)message orHandles:(id)handles;
- (id)_lastMessageItemForChatDictionary:(id)dictionary;
- (id)_processLoadedChatDictionaries:(id)dictionaries;
- (void)loadedChats:(id)chats queryID:(id)id;
- (void)markedAsReadForMessageGUID:(id)guid success:(BOOL)success queryID:(id)id;
- (void)forcedReloadingChatRegistryWithQueryID:(id)id;
- (void)_account:(id)_account chat:(id)chat style:(unsigned char)style chatProperties:(id)properties messagesUpdated:(id)updated;
- (void)_account:(id)_account chat:(id)chat style:(unsigned char)style chatProperties:(id)properties messagesUpdated:(id)updated suppressNotification:(BOOL)notification;
- (void)service:(id)service chat:(id)chat style:(unsigned char)style messagesUpdated:(id)updated;
- (void)account:(id)account chat:(id)chat style:(unsigned char)style chatProperties:(id)properties messageUpdated:(id)updated;
- (void)account:(id)account chat:(id)chat style:(unsigned char)style chatProperties:(id)properties messageUpdated:(id)updated suppressNotification:(BOOL)notification;
- (void)account:(id)account chat:(id)chat style:(unsigned char)style chatProperties:(id)properties messagesUpdated:(id)updated;
- (BOOL)_shouldSwitchAccountAddingMessagesToChat:(id)chat messageItems:(id)items messagesComingFromStorage:(BOOL)storage chatProperties:(id)properties;
- (void)_processMessageForAccount:(id)account chat:(id)chat style:(unsigned char)style chatProperties:(id)properties groupID:(id)id chatPersonCentricID:(id)id message:(id)message;
- (void)_processMessagesForAccount:(id)account chat:(id)chat style:(unsigned char)style chatProperties:(id)properties groupID:(id)id chatPersonCentricID:(id)id messages:(id)messages messagesComingFromStorage:(BOOL)storage;
- (void)account:(id)account chat:(id)chat style:(unsigned char)style chatProperties:(id)properties groupID:(id)id chatPersonCentricID:(id)id messageSent:(id)sent;
- (void)account:(id)account chat:(id)chat style:(unsigned char)style chatProperties:(id)properties notifySentMessage:(id)message sendTime:(id)time isReplicating:(BOOL)replicating;
- (void)_clearExistingTypingIndicatorsWithMessageGUID:(id)guid excludingChatWithIdentifier:(id)identifier;
- (void)account:(id)account chat:(id)chat style:(unsigned char)style chatProperties:(id)properties groupID:(id)id chatPersonCentricID:(id)id messageReceived:(id)received;
- (void)account:(id)account chat:(id)chat style:(unsigned char)style chatProperties:(id)properties groupID:(id)id chatPersonCentricID:(id)id initialEmergencyQuestionnaireReceived:(id)received;
- (void)account:(id)account chat:(id)chat style:(unsigned char)style chatProperties:(id)properties groupID:(id)id chatPersonCentricID:(id)id messagesReceived:(id)received messagesComingFromStorage:(BOOL)storage;
- (void)account:(id)account chat:(id)chat style:(unsigned char)style chatProperties:(id)properties invitationReceived:(id)received;
- (void)account:(id)account chat:(id)chat style:(unsigned char)style chatProperties:(id)properties updateProperties:(id)properties;
- (void)account:(id)account chat:(id)chat style:(unsigned char)style chatProperties:(id)properties error:(id)error;
- (void)account:(id)account chat:(id)chat style:(unsigned char)style chatProperties:(id)properties groupID:(id)id chatPersonCentricID:(id)id statusChanged:(int)changed handleInfo:(id)info;
- (void)leftChat:(id)chat;
- (void)_updatePersonCentricIDToChatMapForChat:(id)chat toNewPersonCentricID:(id)id;
- (void)account:(id)account chat:(id)chat style:(unsigned char)style chatProperties:(id)properties chatPersonCentricID:(id)id member:(id)member statusChanged:(int)changed;
- (void)chat:(id)chat propertiesUpdated:(id)updated;
- (void)chat:(id)chat chatPersonCentricID:(id)id displayNameUpdated:(id)updated;
- (void)chat:(id)chat chatPersonCentricID:(id)id displayNameUpdated:(id)updated sender:(id)sender;
- (void)chat:(id)chat lastAddressedHandleUpdated:(id)updated;
- (void)chat:(id)chat lastAddressedSIMIDUpdated:(id)simidupdated;
- (void)chat:(id)chat isFilteredUpdated:(long long)updated;
- (void)chat:(id)chat isRecoveredUpdated:(BOOL)updated;
- (void)chat:(id)chat isDeletingIncomingMessagesUpdated:(BOOL)updated;
- (void)chat:(id)chat engramIDUpdated:(id)idupdated;
- (void)engroupParticipantsUpdatedForChat:(id)chat;
- (void)chat:(id)chat nicknamesUpdated:(id)updated;
- (void)chat:(id)chat uncachedAttachmentCountUpdated:(id)updated;
- (void)_updateUnreadCountForChat:(id)chat;
- (void)_updateChat:(id)chat updateIsFiltered:(long long)filtered;
- (void)_updateUnreadCountForChat:(id)chat shouldPostNotification:(BOOL)notification;
- (void)_updateInfo:(id)info forGUID:(id)guid updatingUnreadCount:(BOOL)count;
- (void)_updateInfo:(id)info forGUID:(id)guid updatingUnreadCount:(BOOL)count shouldPostNotifications:(BOOL)notifications;
- (void)_updateChat:(id)chat groupID:(id)id shouldPostNotification:(BOOL)notification;
- (BOOL)_updateAutoDonationBehavior:(long long)behavior forChat:(id)chat shouldPostNotification:(BOOL)notification;
- (void)_updateChatAutoDonationBehavior:(id)behavior withInfo:(id)info shouldPostNotification:(BOOL)notification;
- (void)_updateReplySuggestions:(id)suggestions withInfo:(id)info;
- (void)chat:(id)chat updated:(id)updated;
- (void)unreadCountChanged:(long long)changed;
- (void)lastFailedMessageDateChanged:(long long)changed;
- (void)historicalMessageGUIDsDeleted:(id)deleted chatGUIDs:(id)guids queryID:(id)id;
- (void)_checkLimitAndSetMessagesToKeepLoadedIfNeeded:(unsigned long long)needed chat:(id)chat;
- (void)_checkIfItemIsCorrupt:(id)corrupt;
- (void)_completeChatLoadQueryWithChat:(id)chat queryID:(id)id;
- (void)historyQuery:(id)query chatID:(id)id services:(id)services finishedWithResult:(id)result limit:(long long)limit;
- (void)pagedHistoryQuery:(id)query chatID:(id)id services:(id)services numberOfMessagesBefore:(long long)before numberOfMessagesAfter:(long long)after finishedWithResult:(id)result hasMessagesBefore:(BOOL)before hasMessagesAfter:(BOOL)after;
- (void)attachmentQuery:(id)query chatID:(id)id services:(id)services finishedWithResult:(id)result;
- (void)uncachedAttachmentCountQuery:(id)query chatID:(id)id services:(id)services finishedWithResult:(id)result;
- (id)_chatForIdentifiers:(id)identifiers;
- (void)finishedDownloadingPurgedAssetsForChatIDs:(id)ids;
- (void)downloadedPurgedAssetBatchForChatIDs:(id)ids completedTransferGUIDs:(id)guids;
- (void)isDownloadingQuery:(id)query chatID:(id)id services:(id)services finishedWithResult:(BOOL)result;
- (void)markAsSpamQuery:(id)query chatID:(id)id services:(id)services finishedWithResult:(id)result;
- (void)frequentRepliesQuery:(id)query chatID:(id)id services:(id)services finishedWithResult:(id)result limit:(long long)limit;
- (void)frequentRepliesQuery:(id)query finishedWithResult:(id)result limit:(long long)limit;
- (void)_automation_markAsReadQuery:(id)query finishedWithResult:(BOOL)result;
- (void)chatsNeedRemerging:(id)remerging groupedChats:(id)chats;
- (id)_copyMergedChatsPairedArrayFromMergedChatsArray:(id)array;
- (void)_handleMergedChatReconstructions:(id)reconstructions;
- (void)__handleMergedChatReconstructions:(id)reconstructions;
- (void)updateChatDictionaryArray:(id)array createdChat:(id)chat joinstate:(long long)joinstate setHasCommunicatedOveriMessage:(BOOL *)message;
- (void)_fetchInitialBatchOfContactsOnLaunch;
- (void)_batchFetchRemainingContactsOnLaunch;
- (void)_handleCachingAliasToCNIDMap:(id)cnidmap;
- (void)_handleChatReconstructions:(id)reconstructions;
- (void)__handleChatReconstructions:(id)reconstructions;
- (void)setupComplete:(BOOL)complete info:(id)info;
- (void)_daemonReallyDied:(id)died;
- (void)_daemonCompletedDeferredSetup;
- (void)setupComplete;
- (void)_chatLoadedWithChatIdentifier:(id)identifier chats:(id)chats;
- (void)_previouslyBlackholedChatLoadedWithHandleIDs:(id)ids chat:(id)chat;
- (void)chatLoadedWithChatIdentifier:(id)identifier chats:(id)chats;
- (void)previouslyBlackholedChatLoadedWithChatIdentifier:(id)identifier chats:(id)chats;
- (void)previouslyBlackholedChatLoadedWithHandleIDs:(id)ids chat:(id)chat;
- (void)blackholedChatsExist:(BOOL)exist;
- (void)screenTimeEnablementChanged:(BOOL)changed;
- (void)groupPhotoUpdatedForChatIdentifier:(id)identifier style:(unsigned char)style account:(id)account userInfo:(id)info;
- (id)_participantsForChatDictionary:(id)dictionary;
- (id)_cachedChatForChatDictionary:(id)dictionary participants:(id)participants participantHash:(id)hash;
- (id)_cachedOneToOneChatForChatDictionary:(id)dictionary participants:(id)participants participantHash:(id)hash;
- (id)_cachedGroupChatForGroupChatDictionary:(id)dictionary participants:(id)participants participantHash:(id)hash;
- (void)movedMessagesToRecentlyDeletedWithQueryID:(id)id;
- (void)movedMessagesToRecentlyDeletedForChatsWithGUIDs:(id)guids queryID:(id)id;
- (void)recoveredMessagesWithQueryID:(id)id;
- (void)loadedRecoverableMessagesMetadata:(id)metadata queryID:(id)id;
- (void)permanentlyDeletedMessagesInChatsWithDeletedChatGUIDs:(id)guids;
- (void)permanentlyDeletedMessagesInChatsWithDeletedChatGUIDs:(id)guids queryID:(id)id;
- (void)permanentlyDeletedRecoverableMessagesForChatsWithGUIDs:(id)guids deletedChatGUIDs:(id)guids;
- (void)recoveredMessagesFromRecentlyDeletedForChatsWithGUIDs:(id)guids;
- (void)chat:(id)chat lastMessageTimeStampOnLoadUpdated:(double)updated;
- (long long)_winningJoinStateForExistingChat:(id)chat incomingDictionary:(id)dictionary;
- (void)_chat:(id)_chat sendReadReceiptForMessages:(id)messages;
- (void)_chat_sendReadReceiptForAllMessages:(id)messages;
- (void)_chat_markLastMessageAsUnread:(id)unread;
- (void)_chat_recoverFromJunk:(id)junk;
- (void)_chat_storeItem:(id)item inChat:(id)chat;
- (void)_chat:(id)_chat sendPlayedReceiptForMessage:(id)message;
- (void)_chat:(id)_chat setPlayedExpressiveSendForMessage:(id)message;
- (void)_chat:(id)_chat sendSavedReceiptForMessage:(id)message;
- (void)_chat:(id)_chat sendNotifyRecipientCommandForMessage:(id)message;
- (void)_markHasHadSuccessfulQueryForChat:(id)chat;
- (id)_eventForMessage:(id)message;
- (void)_trackUsageForMessage:(id)message;
- (void)_setReplyToGuidOnMessage:(id)message forChat:(id)chat;
- (BOOL)_nicknameSharingEnabled;
- (unsigned long long)_nicknameSharingAudience;
- (void)_setMeCardSharingOnMessage:(id)message forChat:(id)chat;
- (BOOL)_shouldShareMeCardForContactsOnlyAudienceWithChat:(id)chat;
- (BOOL)_shouldShareMeCardForAlwaysAskAudienceWithChat:(id)chat;
- (void)_chat:(id)_chat sendMessage:(id)message;
- (void)_chat:(id)_chat sendMessage:(id)message withAccount:(id)account;
- (void)_chat:(id)_chat sendEditedMessageItem:(id)item previousMessageItem:(id)item partIndex:(long long)index editType:(unsigned long long)type backwardCompatabilityText:(id)text;
- (void)_chat:(id)_chat resendEditedMessageItem:(id)item partIndex:(long long)index withBackwardCompatabilityText:(id)text;
- (void)_chat:(id)_chat repositionSticker:(id)sticker;
- (void)_chat:(id)_chat sendGroupPhotoUpdate:(id)update;
- (void)_chat:(id)_chat retryGroupPhotoUpload:(id)upload;
- (void)_chat:(id)_chat sendSyndicationAction:(id)action;
- (void)_chat:(id)_chat inviteParticipants:(id)participants reason:(id)reason toiMessageChat:(BOOL)chat;
- (void)_chat:(id)_chat removeParticipants:(id)participants reason:(id)reason fromiMessageChat:(BOOL)chat;
- (void)_chat:(id)_chat joinWithProperties:(id)properties;
- (void)_chat_leave:(id)_chat_leave leavingiMessageChat:(BOOL)chat;
- (void)_chat_remove:(id)_chat_remove;
- (void)_chat_declineInvitation:(id)invitation;
- (void)_chat:(id)_chat setProperties:(id)properties ofParticipant:(id)participant;
- (void)_chat:(id)_chat setValue:(id)value forChatProperty:(id)property;
- (void)_chat:(id)_chat updateDisplayName:(id)name;
- (void)_chat:(id)_chat updateLastAddressedHandle:(id)handle;
- (void)_chat:(id)_chat updateLastAddressedSIMID:(id)simid;
- (void)_chat:(id)_chat updateIsFiltered:(long long)filtered;
- (void)_chat:(id)_chat updateIsBlackholed:(BOOL)blackholed;
- (void)_chat:(id)_chat updateIsRecovered:(BOOL)recovered;
- (void)_chat:(id)_chat updateIsDeletingIncomingMessages:(BOOL)messages;
- (void)_loadSiblingsForChatIfNeeded:(id)needed;
- (void)_chat_loadHistory:(id)history limit:(unsigned long long)limit beforeGUID:(id)guid afterGUID:(id)guid threadIdentifier:(id)identifier queryID:(id)id synchronous:(BOOL)synchronous completion:(id /* block */)completion;
- (void)_chat_loadPagedHistory:(id)history numberOfMessagesBefore:(unsigned long long)before numberOfMessagesAfter:(unsigned long long)after messageGUID:(id)guid threadIdentifier:(id)identifier queryID:(id)id synchronous:(BOOL)synchronous completion:(id /* block */)completion;
- (void)_chat_clearHistory:(id)history beforeGUID:(id)guid afterGUID:(id)guid queryID:(id)id;
- (void)_chat_markAsSpam:(id)spam queryID:(id)id isJunkReportedToCarrier:(BOOL)carrier;
- (void)_chat_markAsSpamAutomatically:(id)automatically;
- (void)_chat_markAsSpam:(id)spam queryID:(id)id autoReport:(BOOL)report isJunkReportedToCarrier:(BOOL)carrier;
- (void)_chat_loadFrequentReplies:(id)replies limit:(unsigned long long)limit queryID:(id)id loadImmediately:(BOOL)immediately;
- (void)_chat_loadUnreadMessages:(id)messages limit:(unsigned long long)limit fallbackGUID:(id)guid queryID:(id)id loadImmediately:(BOOL)immediately;
- (void)_chat_loadAttachments:(id)attachments queryID:(id)id loadImmediately:(BOOL)immediately;
- (void)_chat_loadUncachedAttachmentsCount:(id)count queryID:(id)id loadImmediately:(BOOL)immediately;
- (void)_chat_downloadPurgedAttachmentsForChat:(id)chat;
- (void)_chat_isDownloadingPurgedAssetsForChat:(id)chat queryID:(id)id loadImmediately:(BOOL)immediately;
- (void)_chat_closeSession:(id)session;
- (void)_IMChatGetIdentifiersAndServicesTestHookWithChatRegistry:(id)registry chat:(id)chat identifiers:(id *)identifiers services:(id *)services personCentricEnabled:(BOOL)enabled;
- (void)_updateBlackholedChatsExist:(BOOL)exist;
- (id)unblackholeChatWithHandles:(id)handles;
- (id)_possiblyUnregisteredCachedChatWithIdentifier:(id)identifier style:(unsigned char)style account:(id)account;
- (id)_possiblyUnregisteredCachedChatWithHandle:(id)handle;
- (id)_possiblyUnregisteredCachedChatWithHandles:(id)handles style:(unsigned char)style groupID:(id)id displayName:(id)name joinedChatsOnly:(BOOL)only;
- (id)_possiblyUnregisteredCachedChatForRoom:(id)room onAccount:(id)account;
- (id)_cachedChatWithGUID:(id)guid;
- (id)_cachedChatWithIdentifier:(id)identifier;
- (id)_cachedChatWithIdentifier:(id)identifier style:(unsigned char)style;
- (id)_cachedChatWithHandle:(id)handle;
- (id)_cachedChatWithHandles:(id)handles allowAlternativeService:(BOOL)service groupID:(id)id displayName:(id)name joinedChatsOnly:(BOOL)only;
- (id)_cachedChatWithGroupID:(id)id;
- (id)_cachedChatWithDisplayName:(id)name;
- (id)_cachedChatsWithDisplayName:(id)name;
- (id)_cachedChatWithPersonID:(id)id;
- (id)_cachedChatsWithMessage:(id)message;
- (id)_cachedChatsWithMessageGUID:(id)guid;
- (void)setUpInitialCallState;
- (id)activeCallForConversationUUID:(id)uuid;
- (id)_activeTUConversations;
- (id)_existingChatForTUConversation:(id)tuconversation;
- (void)conversationManager:(id)manager stateChangedForConversation:(id)conversation;
- (void)conversationManager:(id)manager activeRemoteParticipantsChangedForConversation:(id)conversation;
- (void)conversationManager:(id)manager removedActiveConversation:(id)conversation;
- (void)conversationManager:(id)manager activitySessionsChangedForConversation:(id)conversation;
- (void)conversationManager:(id)manager remoteMembersChangedForConversation:(id)conversation;
- (void)_postMultiWayStateChangedNotification:(id)notification;
- (id)chatForIMHandle:(id)imhandle;
- (id)chatForIMHandle:(id)imhandle lastAddressedHandle:(id)handle lastAddressedSIMID:(id)simid;
- (id)chatForIMHandles:(id)imhandles;
- (id)chatForIMHandles:(id)imhandles lastAddressedHandle:(id)handle lastAddressedSIMID:(id)simid;
- (id)chatForIMHandles:(id)imhandles displayName:(id)name joinedChatsOnly:(BOOL)only;
- (id)chatForIMHandles:(id)imhandles displayName:(id)name joinedChatsOnly:(BOOL)only lastAddressedHandle:(id)handle lastAddressedSIMID:(id)simid;
- (id)chatForIMHandles:(id)imhandles chatName:(id)name;
- (id)chatForIMHandles:(id)imhandles chatName:(id)name lastAddressedHandle:(id)handle lastAddressedSIMID:(id)simid;
- (id)chatForRoom:(id)room onAccount:(id)account;
- (id)existingChatForIMHandle:(id)imhandle;
- (id)existingChatForIMHandles:(id)imhandles;
- (id)existingChatForRoom:(id)room onAccount:(id)account;
- (id)exisitingChatForGroupID:(id)id;
- (id)existingChatForIMHandles:(id)imhandles allowRetargeting:(BOOL)retargeting groupID:(id)id displayName:(id)name joinedChatsOnly:(BOOL)only;
- (id)existingChatForIMHandles:(id)imhandles allowRetargeting:(BOOL)retargeting;
- (id)existingChatForRoom:(id)room onAccount:(id)account allowRetargeting:(BOOL)retargeting;
- (id)chatGuidsForChat:(id)chat;
- (id)existingChatForIMHandles:(id)imhandles allowRetargeting:(BOOL)retargeting groupID:(id)id displayName:(id)name ignoresDisplayName:(BOOL)name joinedChatsOnly:(BOOL)only;
- (id)existingChatForPersonID:(id)id;
- (id)existingChatForIMHandle:(id)imhandle allowRetargeting:(BOOL)retargeting;
- (id)existingChatForIMHandle:(id)imhandle allowRetargeting:(BOOL)retargeting fixChatHandle:(BOOL)handle;
- (id)existingChatForIMHandles:(id)imhandles allowRetargeting:(BOOL)retargeting groupID:(id)id;
- (id)existingChatForAddresses:(id)addresses allowRetargeting:(BOOL)retargeting bestHandles:(id *)handles;
- (id)existingChatForContacts:(id)contacts bestHandles:(id *)handles;
- (id)unblackholeAndLoadChatWithIMHandles:(id)imhandles;
- (id)loadChatFromDaemonWithChatIdentifier:(id)identifier;
- (id)existingConversationForTelephonyConversationUUID:(id)uuid;
- (void)enumerateAllChatsAndAttachmentSizesWithOptions:(unsigned long long)options usingBlock:(id /* block */)block;
- (void)moveMessagesWithGUIDsToRecentlyDeleted:(id)deleted deleteDate:(id)date synchronously:(BOOL)synchronously completionHandler:(id /* block */)handler;
- (void)moveMessagesInChatsToRecentlyDeleted:(id)deleted deleteDate:(id)date synchronously:(BOOL)synchronously completionHandler:(id /* block */)handler;
- (void)recoverMessagesForChats:(id)chats synchronously:(BOOL)synchronously completionHandler:(id /* block */)handler;
- (void)updateRecoverableMessagesMetadataSynchronously:(BOOL)synchronously completionHandler:(id /* block */)handler;
- (void)updateRecoverableMessagesMetadataSynchronously:(BOOL)synchronously loadChats:(BOOL)chats completionHandler:(id /* block */)handler;
- (void)permanentlyDeleteRecoverableMessagesInChats:(id)chats synchronously:(BOOL)synchronously completionHandler:(id /* block */)handler;
- (void)_validateChatQueryResults:(id)results matchCurrentCacheResults:(id)results;
- (id)_performSingleChatCacheLookupWithBlock:(id /* block */)block cacheMissQueryKey:(id)key queryBlock:(id /* block */)block;
- (id)_performChatCacheLookupWithBlock:(id /* block */)block cacheMissQueryKey:(id)key queryBlock:(id /* block */)block;
- (id)_existingChatWithIdentifier:(id)identifier style:(unsigned char)style service:(id)service;
- (id)_existingChatWithIdentifier:(id)identifier style:(unsigned char)style account:(id)account;
- (id)_existingChatForHandleUsingPersonID:(id)id;
- (id)_existingChatFromSiblingsForHandle:(id)handle;
- (id)_existingChatWithHandle:(id)handle fixChatHandle:(BOOL)handle;
- (void)_loadChatsFilteredUsingPredicate:(id)predicate lastMessageOlderThan:(id)than limit:(unsigned long long)limit waitForReply:(BOOL)reply completionHandler:(id /* block */)handler;
- (id)_earliestLastMessageDateFromChatDictionaries:(id)dictionaries;
- (id)_lastMessageDateForQueryFromChatDictionary:(id)dictionary;
- (void)_loadAllSiblingChatsForHandlesAssociatedWithChats:(id)chats waitForReply:(BOOL)reply completionHandler:(id /* block */)handler;
- (void)updateEarliestMessageDateForChats:(id)chats completion:(id /* block */)completion;
- (id)chatWithHandle:(id)handle;
- (id)chatWithHandle:(id)handle lastAddressedHandle:(id)handle lastAddressedSIMID:(id)simid;
- (id)chatWithHandles:(id)handles;
- (id)chatWithHandles:(id)handles lastAddressedHandle:(id)handle lastAddressedSIMID:(id)simid;
- (id)chatWithHandles:(id)handles displayName:(id)name joinedChatsOnly:(BOOL)only;
- (id)chatWithHandles:(id)handles displayName:(id)name joinedChatsOnly:(BOOL)only lastAddressedHandle:(id)handle lastAddressedSIMID:(id)simid;
- (id)allGUIDsForChat:(id)chat;
- (id)existingChatWithGUID:(id)guid;
- (id)existingChatWithHandle:(id)handle;
- (id)existingChatWithHandle:(id)handle allowAlternativeService:(BOOL)service;
- (id)existingChatWithHandles:(id)handles;
- (id)existingChatWithHandles:(id)handles allowAlternativeService:(BOOL)service;
- (id)existingChatWithHandles:(id)handles allowAlternativeService:(BOOL)service groupID:(id)id;
- (id)existingChatWithHandles:(id)handles allowAlternativeService:(BOOL)service groupID:(id)id displayName:(id)name joinedChatsOnly:(BOOL)only;
- (id)existingChatWithChatIdentifier:(id)identifier;
- (id)existingChatWithGroupID:(id)id;
- (id)existingChatWithDeviceIndependentID:(id)id;
- (id)existingChatWithDisplayName:(id)name;
- (id)existingChatWithPinningIdentifier:(id)identifier;
- (id)existingChatWithPersonID:(id)id;
- (id)existingChatWithAddresses:(id)addresses allowAlternativeService:(BOOL)service bestHandles:(id *)handles;
- (id)existingChatWithContacts:(id)contacts bestHandles:(id *)handles;
- (id)existingConversationForFaceTimeConversationUUID:(id)uuid;
- (id)chatForFaceTimeConversation:(id)conversation;
- (id)chatForFaceTimeRecipientIDs:(id)ids;
- (void)verifyFilteringForAllChats;
- (id)performanceLogHandle;
- (void)_noteChatInit:(id)init;
- (void)_noteChatDealloc:(id)dealloc;
- (id)init;
- (id)initAsListener:(BOOL)listener;
- (void)dealloc;
- (void)_verifyChatMergeWithChat:(id)chat dictionary:(id)dictionary;
- (void)_registerChatDictionary:(id)dictionary forChat:(id)chat isIncoming:(BOOL)incoming newGUID:(id)guid shouldPostNotification:(BOOL)notification;
- (void)_registerChatDictionary:(id)dictionary forChat:(id)chat isIncoming:(BOOL)incoming newGUID:(id)guid;
- (void)_registerChat:(id)chat isIncoming:(BOOL)incoming guid:(id)guid;
- (void)unregisterChat:(id)chat;
- (void)unregisterChatWithGUID:(id)guid;
- (void)_unregisterChat:(id)chat;
- (void)_unregisterChatWithGUID:(id)guid;
- (id)generateUnusedChatIdentifierForGroupChatWithAccount:(id)account;
- (BOOL)_hasChat:(id)chat forService:(id)service;
- (void)_setChatHasCommunicatedOveriMessage:(id)message;
- (void)_setSimulatedChats:(id)chats;
- (void)_resetChatReconstructionGroupMaps;
- (void)_removeFromGroupParticipantToChatsMap:(id)map;
- (void)_addChat:(id)chat participantSet:(id)set;
- (id)_sortedParticipantIDHashForParticipants:(id)participants;
- (id)_sortedParticipantIDHashForParticipants:(id)participants usesPersonCentricID:(BOOL)id;
- (void)_handleChatParticipantsDidChange:(id)change;
- (void)_handleAddressBookChange:(id)change;
- (id)_ownerHandleStringsFromSubscription:(id)subscription;
- (id)chatsWithMyself;
- (void)_updateFilterediMessageChatsExist:(BOOL)exist;
- (id)_chatsMatchingHandles:(id)handles;
- (id)_chatsMatchingStatusSubscription:(id)subscription;
- (void)_handleAvailabilityChangedNotification:(id)notification;
- (void)_handleAvailabilityInvitationReceivedNotification:(id)notification;
- (void)_handleAvailabilityStateChangedNotification:(id)notification;
- (void)_handleKeyTransparencyStatusChangedNotification:(id)notification;
- (void)_resetChatRegistry;
- (void)_setDefaultNumberOfMessagesToLoad:(unsigned long long)load;
- (void)_setPostMessageSentNotifications:(BOOL)notifications;
- (BOOL)isFirstLoad;
@end

#endif /* IMChatRegistry_h */

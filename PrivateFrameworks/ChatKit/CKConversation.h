//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKConversation_h
#define CKConversation_h
@import Foundation;

#include "CKComposition.h"
#include "CKEntity.h"
#include "MUNanoPlaceViewControllerDelegate-Protocol.h"

@class IMChat, IMHandle, IMService, NSArray, NSAttributedString, NSDate, NSNumber, NSSet, NSString;

@interface CKConversation : NSObject<MUNanoPlaceViewControllerDelegate> {
  /* instance variables */
  struct { unsigned int x :1 ignoringTypingUpdates; } _conversationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IMChat *chat;
@property (retain, nonatomic) NSArray *recipients;
@property (copy, nonatomic) NSAttributedString *previewText;
@property (retain, nonatomic) NSSet *pendingRecipients;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned int limitToLoad;
@property (nonatomic) BOOL hasLoadedAllMessages;
@property (nonatomic) BOOL isReportedAsSpam;
@property (retain, nonatomic) IMHandle *businessHandle;
@property (retain, nonatomic) NSNumber *businessConversation;
@property (retain, nonatomic) NSDate *dateLastViewed;
@property (nonatomic) BOOL wasKnownSender;
@property (nonatomic) BOOL hasSetWasKnownSender;
@property (nonatomic) int wasDetectedAsSMSSpam;
@property (nonatomic) int wasDetectedAsSMSCategory;
@property (nonatomic) int wasDetectedAsiMessageSpam;
@property (nonatomic) int wasDetectedAsSpam;
@property (retain, nonatomic) NSString *conversationListCollectionViewPinnedItemIdentifier;
@property (retain, nonatomic) NSString *conversationListCollectionViewListItemIdentifier;
@property (retain, nonatomic) NSString *conversationListCollectionViewJunkItemIdentifier;
@property (retain, nonatomic) NSString *conversationListCollectionViewRecentlyDeletedListItemIdentifier;
@property (readonly, nonatomic) NSArray *frequentReplies;
@property (retain, nonatomic) NSString *selectedLastAddressedHandle;
@property (retain, nonatomic) NSString *selectedLastAddressedSIMID;
@property (readonly, nonatomic) NSString *lastAddressedHandle;
@property (readonly, nonatomic) NSString *lastAddressedSIMID;
@property (readonly, nonatomic) CKEntity *recipient;
@property (readonly, copy, nonatomic) NSArray *recipientStrings;
@property (readonly, copy, nonatomic) NSSet *recipientNames;
@property (readonly, nonatomic) unsigned long long recipientCount;
@property (readonly, nonatomic) BOOL isToEmailAddress;
@property (readonly, nonatomic) NSString *rawAddressedName;
@property (readonly, nonatomic) NSString *searchDisplayName;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSAttributedString *groupName;
@property (readonly, nonatomic) NSString *serviceDisplayName;
@property (readonly, nonatomic) char buttonColor;
@property (readonly, nonatomic) BOOL isPreviewTextForAttachment;
@property (readonly, nonatomic) NSSet *mergedPinningIdentifiers;
@property (readonly, nonatomic) BOOL isPinned;
@property (readonly, copy, nonatomic) NSString *senderIdentifier;
@property (readonly, nonatomic) BOOL withMyself;
@property (retain, nonatomic) CKComposition *unsentComposition;
@property (readonly, nonatomic) unsigned long long unreadCount;
@property (readonly, nonatomic) BOOL hasUnreadMessages;
@property (readonly, nonatomic) BOOL muted;
@property (readonly, nonatomic) BOOL sendReadReceipts;
@property (readonly, nonatomic) BOOL needsReload;
@property (nonatomic) BOOL allowedByPersonListInActiveFocus;
@property (readonly, nonatomic) BOOL supportsMessageEditing;
@property (readonly, nonatomic) NSString *groupID;
@property (readonly, nonatomic) NSString *deviceIndependentID;
@property (readonly, nonatomic) NSString *pinningIdentifier;
@property (readonly, nonatomic) long long spamCategory;
@property (readonly, nonatomic) long long spamSubCategory;
@property (readonly, nonatomic) IMService *sendingService;
@property (nonatomic) BOOL forceMMS;
@property (readonly, nonatomic) BOOL groupConversation;
@property (readonly, nonatomic) BOOL canLeave;
@property (readonly, nonatomic) BOOL left;
@property (readonly, nonatomic) BOOL supportsMutatingGroupMembers;
@property (readonly, nonatomic) BOOL leftGroupChat;
@property (readonly, nonatomic) BOOL readOnlyChat;
@property (retain, nonatomic) NSArray *suggestedReplies;
@property (nonatomic) BOOL wantsLabelForDSDSCached;
@property (nonatomic) BOOL hasCachedWantsLabelForDSDS;
@property (readonly, nonatomic) BOOL shouldShowCharacterCount;
@property (nonatomic) BOOL localUserIsTyping;
@property (nonatomic) BOOL localUserIsRecording;
@property (copy, nonatomic) NSString *localUserIsComposing;
@property (readonly, nonatomic) BOOL pending;
@property (readonly, copy, nonatomic) NSArray *pendingEntities;
@property (copy, nonatomic) NSArray *pendingHandles;
@property (readonly, nonatomic) NSArray *handles;
@property (readonly, nonatomic) BOOL stewieConversation;
@property (nonatomic) BOOL ignoringTypingUpdates;
@property (readonly, nonatomic) BOOL userDeletable;
@property (nonatomic) BOOL holdInUnreadFilter;
@property (nonatomic) BOOL elevateCheckIn;

/* class methods */
+ (BOOL)_sms_mediaObjectPassesRestriction:(id)restriction;
+ (long long)_sms_maxAttachmentCountForPhoneNumber:(id)number simID:(id)id;
+ (BOOL)_sms_canSendMessageWithMediaObjectTypes:(int *)types phoneNumber:(id)number simID:(id)id errorCode:(long long *)code;
+ (BOOL)_sms_canSendMessageWithMediaObjectTypes:(int *)types phoneNumber:(id)number simID:(id)id;
+ (BOOL)_sms_canAcceptMediaObjectType:(int)type givenMediaObjects:(id)objects phoneNumber:(id)number simID:(id)id;
+ (BOOL)_sms_canSendComposition:(id)composition lastAddressedHandle:(id)handle lastAddressedSIMID:(id)simid error:(id *)error;
+ (id)_sms_localizedErrorForReason:(long long)reason;
+ (double)_sms_maxTrimDurationForMediaType:(int)type;
+ (BOOL)_sms_mediaObjectPassesDurationCheck:(id)check;
+ (BOOL)_iMessage_canAcceptMediaObjectType:(int)type givenMediaObjects:(id)objects;
+ (long long)_iMessage_maxAttachmentCount;
+ (BOOL)_iMessage_canSendMessageWithMediaObjectTypes:(int *)types errorCode:(long long *)code;
+ (BOOL)_iMessage_canSendMessageWithMediaObjectTypes:(int *)types;
+ (BOOL)_iMessage_canSendComposition:(id)composition lastAddressedHandle:(id)handle lastAddressedSIMID:(id)simid currentService:(id)service forceSMS:(BOOL)sms error:(id *)error;
+ (id)_iMessage_localizedErrorForReason:(long long)reason;
+ (unsigned long long)_iMessage_maxTransferFileSizeForWiFi:(BOOL)fi;
+ (double)_iMessage_maxTrimDurationForMediaType:(int)type;
+ (id)newPendingConversation;
+ (id)conversationForAddresses:(id)addresses allowRetargeting:(BOOL)retargeting candidateConversation:(id)conversation;
+ (id)conversationForContacts:(id)contacts candidateConversation:(id)conversation;
+ (BOOL)isSMSSpamFilteringEnabled;

/* instance methods */
- (id)createConversationAvatarFor:(id)for forSize:(struct CGSize { double x0; double x1; })size withScale:(double)scale layoutDirection:(long long)direction;
- (id)createConversationAvatarForSize:(struct CGSize { double x0; double x1; })size withScale:(double)scale;
- (void)createConversationAvatarForSize:(struct CGSize { double x0; double x1; })size completion:(id /* block */)completion;
- (id)pinnedConversationDisplayNamePreferringShortName:(BOOL)name;
- (BOOL)_sms_willSendMMSByDefaultForAddresses:(id)addresses;
- (BOOL)_sms_supportsCharacterCountForAddresses:(id)addresses;
- (BOOL)_sms_canSendToRecipients:(id)recipients alertIfUnable:(BOOL)unable;
- (BOOL)_iMessage_supportsCharacterCountForAddresses:(id)addresses;
- (BOOL)_iMessage_canSendToRecipients:(id)recipients alertIfUnable:(BOOL)unable;
- (void)placeViewControllerDidSelectMap:(id)map;
- (void)placeViewController:(id)controller didSelectPhoneNumber:(id)number;
- (BOOL)supportsSurf;
- (BOOL)supportsWaldo;
- (BOOL)wantsLabelForDSDS;
- (BOOL)shouldBeBlockedDueToDowntime;
- (void)dealloc;
- (id)init;
- (id)initWithChat:(id)chat;
- (void)willBecomeInactive;
- (id)groupPhotoData;
- (id)_groupPhotoFileURL;
- (void)didBecomeActive;
- (void)resetNameCaches;
- (void)resetCaches;
- (void)setNeedsReload;
- (void)reloadIfNeeded;
- (id)sortedHandles;
- (BOOL)containsHandleWithUID:(id)uid;
- (void)acceptTransfer:(id)transfer;
- (void)_handleChatParticipantsDidChange:(id)change;
- (void)_handleChatJoinStateDidChange:(id)change;
- (void)_handleEngroupFinishedUpdating:(id)updating;
- (void)updateUnsentCompositionByAppendingComposition:(id)composition;
- (BOOL)isDowngraded;
- (BOOL)isIgnoringTypingUpdates;
- (BOOL)isGroupConversation;
- (BOOL)hasLeft;
- (BOOL)hasLeftGroupChat;
- (BOOL)isBusinessChatDisabled;
- (BOOL)isReadOnlyChat;
- (BOOL)isAdHocGroupConversation;
- (BOOL)canReplyToChatItem:(id)item;
- (long long)maximumRecipientsForSendingService;
- (BOOL)canInsertMoreRecipients;
- (BOOL)isMuted;
- (BOOL)canMuteStateBeToggled;
- (BOOL)isBusinessConversation;
- (BOOL)isUserDeletable;
- (BOOL)isStewieConversation;
- (BOOL)isAppleConversation;
- (BOOL)isMakoConversation;
- (BOOL)hasVerifiedBusiness;
- (BOOL)isWithMyself;
- (BOOL)hasReplyEnabled;
- (void)unmute;
- (void)setMutedUntilDate:(id)date;
- (BOOL)shouldSendReadReceipts;
- (void)canShareFocusStatusWithCompletion:(id /* block */)completion;
- (void)addRecipientHandles:(id)handles;
- (void)removeRecipientHandles:(id)handles;
- (id)entityMatchingHandle:(id)handle;
- (void)updateDisplayNameIfSMSSpam;
- (id)orderedContactsForAvatarView;
- (id)orderedContactsForAvatar3DTouchUIWithKeysToFetch:(id)fetch;
- (id)orderedContactsWithMaxCount:(unsigned long long)count keysToFetch:(id)fetch;
- (void)refreshServiceForSending;
- (BOOL)_handleIsForThisConversation:(id)conversation;
- (void)_handlePreferredServiceChangedNotification:(id)notification;
- (void)_chatItemsDidChange:(id)change;
- (void)_chatPropertiesChanged:(id)changed;
- (char)sendButtonColor;
- (BOOL)noAvailableServices;
- (id)uniqueIdentifier;
- (id)recipientsSortedByIsContact:(BOOL)contact alphabetically:(BOOL)alphabetically;
- (id)date;
- (void)_deleteAllMessagesAndRemoveGroup:(BOOL)group;
- (void)deleteAllMessages;
- (void)deleteAllMessagesAndRemoveGroup;
- (BOOL)_earlyReturnHistoryLoad;
- (void)loadAllMessages;
- (void)fetchAllMessages:(id /* block */)messages;
- (void)loadAllUnreadMessagesUpToMessageGUID:(id)guid;
- (void)loadMoreMessagesBeforeFirstMessage;
- (void)fetchMoreMessagesBeforeFirstMessage:(id /* block */)message;
- (void)loadMoreMessagesAfterLastMessage;
- (void)fetchMoreMessagesAfterLastMessage:(id /* block */)message;
- (void)loadFrequentReplies;
- (void)loadMoreMessages;
- (void)fetchMoreMessages:(id /* block */)messages;
- (void)setLoadedMessageCount:(unsigned long long)count loadImmediately:(BOOL)immediately;
- (BOOL)_chatHasValidUnreadMessageToLoad;
- (void)setLoadedMessageCount:(unsigned long long)count;
- (id)ensureMessageWithGUIDIsLoaded:(id)loaded;
- (void)clearConversationLoadFromSpotlight;
- (BOOL)hasLoadedFromSpotlight;
- (void)enumerateMessagesWithOptions:(unsigned long long)options usingBlock:(id /* block */)block;
- (void)markAllMessagesAsRead;
- (void)markLastMessageAsUnread;
- (BOOL)canReadStateBeToggled;
- (void)updateLastViewedDate;
- (BOOL)isPlaceholder;
- (id)shortDescription;
- (long long)compareBySequenceNumberAndDateDescending:(id)descending;
- (void)setPendingComposeRecipients:(id)recipients;
- (BOOL)isPending;
- (BOOL)canAcceptMediaObjectType:(int)type givenMediaObjects:(id)objects;
- (BOOL)_allowedByScreenTime;
- (BOOL)canSendComposition:(id)composition error:(id *)error;
- (BOOL)canSendToRecipients:(id)recipients alertIfUnable:(BOOL)unable;
- (double)maxTrimDurationForMedia:(id)media;
- (void)resortMessagesIfNecessary;
- (id)messageWithComposition:(id)composition;
- (id)messagesFromComposition:(id)composition;
- (void)retryMessage:(id)message onService:(id)service;
- (void)sendMessage:(id)message onService:(id)service newComposition:(BOOL)composition;
- (void)_setProofReadingInfoForChat:(id)chat withMessage:(id)message;
- (void)sendMessage:(id)message newComposition:(BOOL)composition;
- (void)retractMessagePart:(id)part;
- (void)editMessageItem:(id)item partIndex:(long long)index withNewComposition:(id)composition;
- (void)resendEditedMessageItem:(id)item forPartIndex:(long long)index;
- (id)_backwardCompatabilityTextForEditedMessagePartText:(id)text;
- (void)repositionSticker:(id)sticker associatedChatItem:(id)item;
- (BOOL)_chatSupportsTypingIndicators;
- (void)setLocalUserIsComposing:(id)composing typingIndicatorIcon:(id)icon;
- (void)updateUserActivity;
- (void)_clearTypingIndicatorsIfNecessary;
- (void)fetchSuggestedNameIfNecessary;
- (id)nameWithRawAddresses:(BOOL)addresses;
- (id)fastPreviewTextIgnoringPluginContent;
- (char)outgoingBubbleColor;
- (id)_nameForHandle:(id)handle;
- (id)_headerTitleForService:(id)service shouldListParticipants:(BOOL)participants;
- (id)_headerTitleForPendingMediaObjects:(id)objects subject:(id)subject onService:(id)service;
- (id)displayNameForMediaObjects:(id)objects subject:(id)subject shouldListParticipants:(BOOL)participants;
- (id)copyForPendingConversation;
- (BOOL)isKnownSender;
- (void)updateWasKnownSender;
- (BOOL)_unknownFilteringEnabled;
- (BOOL)isBlockedByCommunicationLimits;
- (void)prepareForRecoverableDeletionWithDeleteDate:(id)date;
- (void)recoverableDeleteAllMessagesGivenDeleteDate:(id)date;
- (void)_invalidateApplicationSnapshotIfNeeded;
- (id)recipientEmailAddresses;
- (id)recipientPhoneNumbers;
- (id)_conversationList;
- (id)contactNameByHandle;
- (BOOL)allowsMentions;
- (void)updateKeyTransparencyStatusForChatParticipantsDidChange:(id)change;
- (BOOL)shouldHoldInUnreadFilter;
- (BOOL)shouldElevateCheckIn;
@end

#endif /* CKConversation_h */

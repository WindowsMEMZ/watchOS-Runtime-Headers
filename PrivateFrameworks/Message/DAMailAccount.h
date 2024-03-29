//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef DAMailAccount_h
#define DAMailAccount_h
@import Foundation;

#include "MailAccount.h"
#include "ECLocalActionReplayerDelegate-Protocol.h"
#include "MFDAMailbox.h"
#include "MFMailboxUid.h"

@class DAAccount, NSArray, NSLock, NSMutableDictionary, NSSet, NSString;
@protocol ASAccountActorMessages;

@interface DAMailAccount : MailAccount<ECLocalActionReplayerDelegate> {
  /* instance variables */
  NSObject<ASAccountActorMessages> *_accountConduit;
  DAAccount *_daAccount;
  BOOL _isNetworkReachable;
  NSString *_cachedAccountID;
  NSString *_cachedAccountPersistentUUID;
  NSString *_cachedDisplayName;
  NSString *_cachedEmailAddress;
  NSArray *_cachedEmailAddresses;
  NSString *_cachedIconString;
  BOOL _cachedIsActive;
  BOOL _cachedIsHotmailAccount;
  BOOL _cachedCalendarEnabled;
  BOOL _cachedPerMessageEncryptionEnabled;
  BOOL _cachedSecureMIMEShouldSign;
  BOOL _cachedSecureMIMEShouldEncrypt;
  BOOL _cachedRestrictMessageTransfersToOtherAccounts;
  BOOL _cachedRestrictSendingFromExternalProcesses;
  BOOL _cachedRestrictSyncingRecents;
  BOOL _cachedIsManaged;
  BOOL _cachedSupportsMailDrop;
  BOOL _cachedArchiveByDefault;
  BOOL _cachedSourceIsManaged;
  BOOL _cachedStoreDraftsOnServer;
  NSString *_cachedInboxFolderID;
  NSString *_cachedSentMessagesFolderID;
  NSString *_cachedTrashFolderID;
  NSString *_cachedJunkFolderID;
  NSString *_cachedDraftsFolderID;
  MFDAMailbox *_temporaryInbox;
  BOOL _loadedInitialMailboxList;
  BOOL _receivedInitialMailboxUpdate;
  BOOL _doneInitialInboxCheck;
  BOOL _observingPushedFoldersPrefsChanged;
  int _supportsServerSearch;
  int _supportsMessageFlagging;
  int _supportsConversations;
  int _supportsServerDrafts;
  int _supportsUniqueServerId;
  unsigned int _daysToSync;
  NSMutableDictionary *_requestQueuesByFolderID;
  NSLock *_watchedFolderIdsLock;
  NSSet *_watchedFolderIds;
  NSString *_folderTag;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _supportsUniqueServerIdLock;
}

@property (retain, nonatomic) MFMailboxUid *virtualAllSearchMailbox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)_accountConduitClass;
+ (id)accountTypeString;
+ (id)legacyPathForAccountIdentifier:(id)identifier withHostname:(id)hostname username:(id)username;
+ (id)csAccountTypeString;
+ (id)displayedAccountTypeString;
+ (id)displayedShortAccountTypeString;
+ (id)_URLScheme;
+ (id)accountIDForDirectoryName:(id)name isAccountDirectory:(BOOL *)directory;

/* instance methods */
- (id)URLStringFromLegacyURLString:(id)urlstring;
- (id)initWithLibrary:(id)library persistentAccount:(id)account;
- (id)initWithDAAccount:(id)daaccount;
- (id)statisticsKind;
- (void)foldersContentsChanged:(id)changed;
- (id)displayName;
- (id)accountForRenewingCredentials;
- (id)username;
- (id)hostname;
- (id)deliveryAccount;
- (BOOL)mustArchiveSentMessages;
- (BOOL)canArchiveSentMessages;
- (id)uniqueID;
- (id)identifier;
- (id)uniqueIdForPersistentConnection;
- (id)allMailboxUids;
- (void)resetSpecialMailboxes;
- (id)allMailMailboxUid;
- (int)emptyFrequencyForMailboxType:(int)type;
- (BOOL)isRunningInDisallowedBundle;
- (void)_loadChildrenForParent:(id)parent fromMap:(id)map intoArray:(id)array replacingInbox:(id)inbox withID:(id)id;
- (void)accountHierarchyChanged:(id)changed;
- (id)accountConduit;
- (void)pushedFoldersPrefsChanged:(id)changed;
- (BOOL)finishedInitialMailboxListLoad;
- (void)fetchMailboxList;
- (BOOL)canReceiveNewMailNotifications;
- (Class)storeClass;
- (id)_copyMailboxWithParent:(id)parent name:(id)name attributes:(unsigned long long)attributes dictionary:(id)dictionary;
- (id)_copyMailboxUidWithParent:(id)parent name:(id)name attributes:(unsigned long long)attributes existingMailboxUid:(id)uid dictionary:(id)dictionary;
- (id)folderIDForMailbox:(id)mailbox;
- (void)_synchronouslyLoadListingForParent:(id)parent;
- (id)_newMailboxWithParent:(id)parent name:(id)name attributes:(unsigned int)attributes dictionary:(id)dictionary withCreationOption:(int)option;
- (BOOL)renameMailbox:(id)mailbox newName:(id)name parent:(id)parent;
- (BOOL)_deleteMailbox:(id)mailbox reflectToServer:(BOOL)server;
- (void)_performFolderChange:(id)change completion:(id /* block */)completion;
- (BOOL)newMailboxNameIsAcceptable:(id)acceptable reasonForFailure:(id *)failure;
- (id)_URLScheme;
- (id)mailboxPathExtension;
- (void)setDAAccount:(id)daaccount;
- (id)syncAnchorForMailbox:(id)mailbox;
- (BOOL)supportsRemoteAppend;
- (BOOL)supportsMailboxEditing;
- (id)_infoForMatchingURL:(id)url;
- (id)mailboxForFolderID:(id)id;
- (id)mailboxUidForInfo:(id)info;
- (BOOL)addRequest:(id)request consumer:(id)consumer mailbox:(id)mailbox;
- (BOOL)addRequests:(id)requests mailbox:(id)mailbox;
- (BOOL)addRequests:(id)requests mailbox:(id)mailbox combine:(BOOL)combine;
- (BOOL)processRequests:(id)requests mailbox:(id)mailbox;
- (BOOL)performRequests:(id)requests mailbox:(id)mailbox;
- (id)_relativePathForType:(int)type;
- (id)_relativePathSpecialMailboxUidWithType:(int)type create:(BOOL)create;
- (id)_specialMailboxUidWithType:(int)type create:(BOOL)create;
- (BOOL)isMailboxLocalForType:(int)type;
- (void)_ensureWeHaveLoadedInitialMailboxList;
- (id)primaryMailboxUid;
- (BOOL)supportsMessageFlagging;
- (BOOL)supportsThreadOperations;
- (BOOL)supportsUniqueServerId;
- (BOOL)supportsServerDrafts;
- (BOOL)shouldArchiveByDefault;
- (BOOL)sourceIsManaged;
- (BOOL)_isUnitTesting;
- (BOOL)shouldFetchAgainWithError:(id)error foregroundRequest:(BOOL)request;
- (id)uniqueServerIdForMessage:(id)message;
- (BOOL)isActive;
- (id)accountPropertyForKey:(id)key;
- (void)invalidate;
- (id)iconString;
- (BOOL)derivesDeliveryAccountInfoFromMailAccount;
- (BOOL)isEnabledForDataclass:(id)dataclass;
- (void)dealloc;
- (BOOL)reconstituteOrphanedMeetingInMessage:(id)message;
- (id)unactionableInvitationICSRepresentationInMessage:(id)message summary:(id *)summary;
- (id)meetingStorePersistentID;
- (id)_inboxFolderID;
- (id)_updateWatchedFolderIdsAndNotify:(BOOL)notify;
- (void)startListeningForNotifications;
- (void)stopListeningForNotifications;
- (id)syncAnchorForFolderID:(id)id mailbox:(id *)mailbox;
- (void)setSyncAnchor:(id)anchor forFolderID:(id)id mailbox:(id *)mailbox;
- (void)performSearchQuery:(id)query;
- (void)cancelSearchQuery:(id)query;
- (BOOL)shouldDisplayHostnameInErrorMessages;
- (BOOL)shouldRestoreMessagesAfterFailedDelete;
- (int)supportsServerSearch;
- (unsigned int)daysToSync;
- (BOOL)supportsUserPushedMailboxes;
- (id)pushedMailboxUids;
- (id)_folderIdsForMailboxUids:(id)uids;
- (void)changePushedMailboxUidsAdded:(id)added deleted:(id)deleted;
- (id)_watchedFolderIds;
- (BOOL)canGoOffline;
- (void)_reachabilityChanged:(id)changed;
- (id)signingIdentityPersistentReferenceForAddress:(id)address;
- (void)setSigningIdentityPersistentReference:(id)reference forAddress:(id)address;
- (id)encryptionIdentityPersistentReferenceForAddress:(id)address;
- (void)setEncryptionIdentityPersistentReference:(id)reference forAddress:(id)address;
- (BOOL)perMessageEncryptionEnabledForAddress:(id)address;
- (int)secureCompositionSigningPolicyForAddress:(id)address;
- (int)secureCompositionEncryptionPolicyForAddress:(id)address;
- (id)copyDataForRemoteEncryptionCertificatesForAddresses:(id)addresses errors:(id *)errors;
- (id)copyDataForRemoteEncryptionCertificatesForAddress:(id)address error:(id *)error;
- (BOOL)restrictedFromTransferingMessagesToOtherAccounts;
- (BOOL)restrictedFromSendingExternally;
- (BOOL)restrictedFromSyncingRecents;
- (BOOL)isManaged;
- (BOOL)supportsMailDrop;
- (id)fetchLimits;
- (id)unsupportedHandoffTypes;
- (BOOL)moveSupported;
- (id)replayAction:(id)action;
- (id)_remoteIDsForFlagChangeAction:(id)action;
- (id)messageDataForMessage:(id)message;
- (BOOL)moveSupportedFromMailboxURL:(id)url toURL:(id)url;
@end

#endif /* DAMailAccount_h */

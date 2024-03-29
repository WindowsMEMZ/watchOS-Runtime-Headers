//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 22.0.0.0.0
//
#ifndef MFMailMessage_h
#define MFMailMessage_h
@import Foundation;

#include "MFMessage.h"
#include "EFPubliclyDescribable-Protocol.h"
#include "MFBaseMessage-Protocol.h"
#include "MFMailboxUid.h"
#include "MFMessageInfo.h"

@class NSString, NSURL;

@interface MFMailMessage : MFMessage<MFBaseMessage, EFPubliclyDescribable> {
  /* instance variables */
  MFMessageInfo *_info;
  NSURL *_globalMessageURL;
}

@property (readonly, nonatomic) unsigned int uid;
@property (readonly, @dynamic, nonatomic) unsigned int dateReceivedInterval;
@property (readonly, @dynamic, nonatomic) unsigned int dateSentInterval;
@property (readonly, @dynamic, nonatomic) long long conversationHash;
@property (readonly, @dynamic, nonatomic) unsigned int mailboxID;
@property (readonly, @dynamic, nonatomic) long long messageIDHash;
@property (readonly, nonatomic) BOOL flagged;
@property (readonly, nonatomic) BOOL read;
@property (readonly, nonatomic) BOOL deleted;
@property (readonly, nonatomic) BOOL senderVIP;
@property (readonly, nonatomic) BOOL knownToHaveAttachments;
@property (readonly, nonatomic) BOOL libraryMessage;
@property (readonly, nonatomic) unsigned int libraryID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) MFMailboxUid *mailbox;
@property unsigned long long modSequenceNumber;
@property (nonatomic) BOOL shouldUseMailDrop;
@property (nonatomic) unsigned long long messageFlags;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)forwardedMessagePrefixWithSpacer:(BOOL)spacer;
+ (Class)dataMessageStoreToUse;
+ (unsigned int)validatePriority:(int)priority;
+ (unsigned int)displayablePriorityForPriority:(int)priority;
+ (id)externalDataTypeIdentifiers;

/* instance methods */
- (id)listUnsubscribe;
- (id)from;
- (BOOL)answered;
- (BOOL)junk;
- (BOOL)conversationVIP;
- (BOOL)conversationMuted;
- (BOOL)isKnownToHaveAttachments;
- (id)messageStore;
- (id)mailMessageStore;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)committing;
- (void)setPriorityFromHeaders:(id)headers;
- (int)priority;
- (void)loadCachedHeaderValuesFromHeaders:(id)headers;
- (void)markAsViewed;
- (void)markAsNotViewed;
- (void)markAsReplied;
- (void)markAsForwarded;
- (void)markAsFlagged;
- (void)markAsNotFlagged;
- (id)loadMeetingExternalID;
- (id)loadMeetingData;
- (id)loadMeetingMetadata;
- (id)_privacySafeDescription;
- (id)account;
- (id)remoteMailboxURL;
- (unsigned long long)conversationFlags;
- (void)setConversationFlags:(unsigned long long)flags;
- (id)originalMailboxURL;
- (id)URL;
- (id)globalMessageURL;
- (unsigned long long)numberOfAttachments;
- (void)setMutableInfoFromMessage:(id)message;
- (void)setSummary:(id)summary;
- (BOOL)shouldSetSummary;
- (id)copyMessageInfo;
- (id)externalConversationID;
- (void)dealloc;
- (id)bestAlternativePart;
- (id)bestAlternativePart:(BOOL *)part;
- (BOOL)isSearchResultWithBogusRemoteId;
@end

#endif /* MFMailMessage_h */

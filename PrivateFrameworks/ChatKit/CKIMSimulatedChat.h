//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKIMSimulatedChat_h
#define CKIMSimulatedChat_h
@import Foundation;

#include "IMChat.h"
#include "CKIMSimulatedAccount.h"
#include "CKIMSimulatedChatDelegate-Protocol.h"
#include "CKIMSimulatedDaemonListener-Protocol.h"

@class IMHandle, NSArray, NSString;

@interface CKIMSimulatedChat : IMChat<CKIMSimulatedChatDelegate, CKIMSimulatedDaemonListener>

@property (readonly, nonatomic) CKIMSimulatedAccount *simulatedAccount;
@property (readonly, nonatomic) NSString *simulatedGUID;
@property (readonly, nonatomic) NSArray *incomingHandles;
@property (readonly, nonatomic) IMHandle *outgoingHandle;
@property (readonly, nonatomic) unsigned long long currentMessageID;
@property (copy, nonatomic) NSString *simulatedChatIdentifier;
@property (weak, nonatomic) NSObject<CKIMSimulatedChatDelegate> *delegate;

/* class methods */
+ (id)prepopulatedChat;

/* instance methods */
- (id)initWithIncomingIDs:(id)ids outgoingID:(id)id messageIDOffset:(unsigned long long)idoffset service:(id)service;
- (void)_sendMessage:(id)message adjustingSender:(BOOL)sender shouldQueue:(BOOL)queue;
- (void)sendMessage:(id)message;
- (BOOL)_handleIncomingItem:(id)item;
- (id)chatIdentifier;
- (id)account;
- (id)guid;
- (id)participants;
- (id)recipient;
- (unsigned char)chatStyle;
- (id)loadMessagesBeforeDate:(id)date limit:(unsigned long long)limit loadImmediately:(BOOL)immediately;
- (void)markAsAutoSpamReported;
- (void)updateIsFiltered:(long long)filtered;
- (BOOL)allowedByScreenTime;
- (BOOL)allowedToShowConversationSync;
- (BOOL)allowedToShowConversation;
- (void)refreshServiceForSending;
- (void)markLastMessageAsUnread;
- (void)setValue:(id)value forChatProperty:(id)property;
- (void)remove;
- (void)chat:(id)chat didSendMessage:(id)message finished:(BOOL)finished;
- (void)simulatedDaemon:(id)daemon willSendBalloonPayload:(id)payload attachments:(id)attachments messageGUID:(id)guid bundleID:(id)id;
- (id)_messageWithGUID:(id)guid;
@end

#endif /* CKIMSimulatedChat_h */

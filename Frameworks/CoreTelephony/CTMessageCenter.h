//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 11207.0.0.0.0
//
#ifndef CTMessageCenter_h
#define CTMessageCenter_h
@import Foundation;

@interface CTMessageCenter : NSObject
/* class methods */
+ (id)sharedMessageCenter;

/* instance methods */
- (id)init;
- (void)dealloc;
- (struct { int x0; int x1; })sendSMS:(id)sms withMoreToFollow:(BOOL)follow trackingID:(unsigned int *)id;
- (struct { int x0; int x1; })sendMMSFromData:(id)data messageId:(unsigned int)id subSlot:(long long)slot;
- (void)sendMessageAsSmsToShortCodeRecipients:(id)recipients andReplaceData:(id *)data;
- (struct { int x0; int x1; })sendMMS:(id)mms;
- (struct { int x0; int x1; })send:(id)send;
- (struct { int x0; int x1; })send:(id)send withMoreToFollow:(BOOL)follow;
- (id)incomingMessageWithId:(unsigned int)id;
- (int)incomingMessageCount;
- (void)addMessageOfType:(int)type toArray:(id)array withIdsFromArray:(id)array;
- (id)allIncomingMessages;
- (void)acknowledgeIncomingMessageWithId:(unsigned int)id;
- (void)acknowledgeOutgoingMessageWithId:(unsigned int)id;
- (id)encodeMessage:(id)message;
- (id)decodeMessage:(id)message;
- (struct { int x0; int x1; })isDeliveryReportsEnabled:(BOOL *)enabled;
- (void)setDeliveryReportsEnabled:(BOOL)enabled;
- (BOOL)isMmsEnabled;
- (BOOL)isMmsEnabledForSub:(id)sub;
- (BOOL)isMmsConfigured;
- (BOOL)isMmsConfiguredForSub:(id)sub;
- (struct { int x0; int x1; })isMmsEnabledForSub:(id)sub enabled:(BOOL *)enabled;
- (BOOL)sendSMSWithText:(id)text serviceCenter:(id)center toAddress:(id)address;
- (BOOL)sendSMSWithText:(id)text text:(id)text serviceCenter:(id)center toAddress:(id)address;
- (BOOL)sendSMSWithText:(id)text serviceCenter:(id)center toAddress:(id)address withID:(unsigned int)id;
- (BOOL)sendSMSWithText:(id)text text:(id)text serviceCenter:(id)center toAddress:(id)address withID:(unsigned int)id;
- (BOOL)sendSMSWithText:(id)text serviceCenter:(id)center toAddress:(id)address trackingID:(unsigned int *)id;
- (BOOL)sendSMSWithText:(id)text text:(id)text serviceCenter:(id)center toAddress:(id)address trackingID:(unsigned int *)id;
- (BOOL)sendSMSWithText:(id)text serviceCenter:(id)center toAddress:(id)address withMoreToFollow:(BOOL)follow withID:(unsigned int)id;
- (BOOL)sendSMSWithText:(id)text text:(id)text serviceCenter:(id)center toAddress:(id)address withMoreToFollow:(BOOL)follow withID:(unsigned int)id;
- (BOOL)getCharacterCountForSub:(id)sub count:(long long *)count andMessageSplitThreshold:(long long *)threshold forSmsText:(id)text;
- (BOOL)getCharacterCount:(long long *)count andMessageSplitThreshold:(long long *)threshold forSmsText:(id)text;
- (BOOL)simulateSmsReceived:(id)received;
- (BOOL)simulateDeferredMessage;
- (BOOL)sendBinarySMS:(id)sms trackingID:(unsigned int *)id;
- (void)emergencySessionIntentStart:(id)start;
- (void)emergencySessionIntentEnd:(id)end;
@end

#endif /* CTMessageCenter_h */

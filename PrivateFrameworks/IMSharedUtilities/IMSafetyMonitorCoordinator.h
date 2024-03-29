//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMSafetyMonitorCoordinator_h
#define IMSafetyMonitorCoordinator_h
@import Foundation;

@class NSDictionary, NSString;

@interface IMSafetyMonitorCoordinator : NSObject

@property (readonly, copy, nonatomic) NSString *appPayloadID;
@property (readonly, copy, nonatomic) NSDictionary *appPayload;

/* class methods */
+ (id)sharedCoordinator;

/* instance methods */
- (BOOL)shouldDropIncomingCheckInMessageWithURL:(id)url senderHandle:(id)handle isFromMe:(BOOL)me;
- (void)informOfOutgoingMessageWithMessage:(id)message sentSuccessfully:(BOOL)successfully error:(id)error;
- (void)informOfIncomingMessageWithMessage:(id)message;
- (void)informOfDeletedMessagesWithMessages:(id)messages;
- (void)informOfDeletedConversationWithReceiverHandles:(id)handles;
- (void)informOfScheduledMessage:(id)message sentSuccessfully:(BOOL)successfully error:(id)error;
- (void)informOfCancelledScheduledMessageSendWithMessageGUID:(id)guid sentSuccessfully:(BOOL)successfully error:(id)error;
- (void)informOfSentScheduledMessage:(id)message;
- (void)checkPreferredHandlesCacheForReceiverWith:(id)with completion:(id /* block */)completion;
- (void)checkPreferredHandlesCacheForInitiatorHandleID:(id)id andReceiver:(id)receiver completion:(id /* block */)completion;
- (void)shouldShowKeyboardSuggestionForInitiator:(id)initiator andReceiver:(id)receiver completion:(id /* block */)completion;
- (void)shouldShowTipKitSuggestionForInitiator:(id)initiator andReceiver:(id)receiver completion:(id /* block */)completion;
- (long long)notificationContentForInitiator:(id)initiator messageURL:(id)url content:(id)content;
- (BOOL)shouldDisallowBasedOnRegulatoryDomain;
- (void)respondToNotificationWithIdentifier:(id)identifier sessionIdentifier:(id)identifier actionIdentifier:(id)identifier completion:(id /* block */)completion;
@end

#endif /* IMSafetyMonitorCoordinator_h */

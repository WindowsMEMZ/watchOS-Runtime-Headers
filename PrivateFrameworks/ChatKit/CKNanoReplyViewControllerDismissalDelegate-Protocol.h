//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKNanoReplyViewControllerDismissalDelegate_Protocol_h
#define CKNanoReplyViewControllerDismissalDelegate_Protocol_h
@import Foundation;

@protocol CKNanoReplyViewControllerDismissalDelegate <NSObject>
@optional
/* instance methods */
- (void)replyController:(id)controller didSendToConversation:(id)conversation;
- (void)replyController:(id)controller triedSend:(id)send toConversation:(id)conversation;
- (void)replyControllerDidCancel:(id)cancel;
- (BOOL)shouldReplyControllerPlayOutgoingSound:(id)sound;
- (id)blurSourceViewForReplyController:(id)controller;
@end

#endif /* CKNanoReplyViewControllerDismissalDelegate_Protocol_h */

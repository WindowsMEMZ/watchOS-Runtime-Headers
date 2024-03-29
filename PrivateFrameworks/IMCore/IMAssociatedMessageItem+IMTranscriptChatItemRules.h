//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMAssociatedMessageItem_IMTranscriptChatItemRules_h
#define IMAssociatedMessageItem_IMTranscriptChatItemRules_h
@import Foundation;

#include "IMChat.h"
#include "IMChatItemRules-Protocol.h"

@class NSArray, NSDate, NSMutableArray, NSString;

@interface IMAssociatedMessageItem (IMTranscriptChatItemRules)
/* instance methods */
- (BOOL)isIncomingTypingMessage;
- (BOOL)isCancelTypingMessage;
- (BOOL)isTypingOrCancelTypingMessage;
- (BOOL)isIncomingTypingOrCancelTypingMessage;
- (id)_newChatItems;
- (id)_newChatItemsWithChatContext:(id)context;
- (BOOL)shouldGenerateTopLevelChatItem;
@end

#endif /* IMAssociatedMessageItem_IMTranscriptChatItemRules_h */

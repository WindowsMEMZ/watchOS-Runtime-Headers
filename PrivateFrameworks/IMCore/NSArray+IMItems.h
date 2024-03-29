//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef NSArray_IMItems_h
#define NSArray_IMItems_h
@import Foundation;

@interface NSArray (IMItems)
/* instance methods */
- (id)firstMessage;
- (id)lastMessage;
- (id)lastFinishedMessage;
- (id)lastIncomingMessage;
- (id)lastIncomingFinishedMessage;
- (void)enumerateMessagesWithOptions:(unsigned long long)options usingBlock:(id /* block */)block;
- (id)messages;
- (id)__imLastMessageItem;
- (void)__enumerateItemsWithOptions:(unsigned long long)options usingBlock:(id /* block */)block;
- (id)__imItems;
- (id)indexesOfPartsOfMessage:(id)message;
- (id)indexesOfPartsOfMessageItem:(id)item;
- (BOOL)equivalentToRecipients:(id)recipients;
- (id)firstMessageItem;
- (id)lastMessageItem;
@end

#endif /* NSArray_IMItems_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMReplyContextAggregateAttachmentMessagePartChatItem_h
#define IMReplyContextAggregateAttachmentMessagePartChatItem_h
@import Foundation;

#include "IMAggregateAttachmentMessagePartChatItem.h"
#include "IMReplyContext-Protocol.h"

@class IMItem, NSString;

@interface IMReplyContextAggregateAttachmentMessagePartChatItem : IMAggregateAttachmentMessagePartChatItem<IMReplyContext> {
  /* instance variables */
  IMItem *_parentItem;
}

@property (retain, nonatomic) IMItem *_parentItem;
@property (nonatomic) BOOL replyIsFromMe;
@property (copy, nonatomic) NSString *replyMessageGUID;

/* instance methods */
- (id)_initWithItem:(id)item parentItem:(id)item replyMessageGUID:(id)guid replyIsFromMe:(BOOL)me text:(id)text index:(long long)index messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range transferGUIDs:(id)guids chatContext:(id)context;
- (id)_initWithItem:(id)item parentItem:(id)item replyMessageGUID:(id)guid replyIsFromMe:(BOOL)me text:(id)text index:(long long)index messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range transferGUIDs:(id)guids chatContext:(id)context visibleAssociatedMessageChatItems:(id)items;
- (BOOL)isReplyContextPreview;
- (BOOL)canDelete;
@end

#endif /* IMReplyContextAggregateAttachmentMessagePartChatItem_h */

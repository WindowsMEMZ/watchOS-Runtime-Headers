//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKReplyContextAggregateAttachmentMessagePartChatItem_h
#define CKReplyContextAggregateAttachmentMessagePartChatItem_h
@import Foundation;

#include "CKAggregateAttachmentMessagePartChatItem.h"
#include "CKReplyContext-Protocol.h"

@interface CKReplyContextAggregateAttachmentMessagePartChatItem : CKAggregateAttachmentMessagePartChatItem<CKReplyContext>
/* instance methods */
- (id)loadTranscriptDrawerText;
- (BOOL)canForward;
- (Class)cellClass;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })fits textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)insets;
- (Class)balloonViewClass;
- (BOOL)isReplyContextPreview;
- (BOOL)replyIsFromMe;
@end

#endif /* CKReplyContextAggregateAttachmentMessagePartChatItem_h */

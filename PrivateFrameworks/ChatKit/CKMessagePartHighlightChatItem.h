//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKMessagePartHighlightChatItem_h
#define CKMessagePartHighlightChatItem_h
@import Foundation;

#include "CKAssociatedMessageChatItem.h"

@class NSString;

@interface CKMessagePartHighlightChatItem : CKAssociatedMessageChatItem

@property (readonly, nonatomic) NSString *timestampString;

/* instance methods */
- (id)initWithIMChatItem:(id)item maxWidth:(double)width;
- (Class)cellClass;
- (Class)balloonViewClass;
- (id)guid;
- (id)associatedChatItemGUID;
- (BOOL)isFromMe;
- (BOOL)parentMessageIsFromMe;
- (BOOL)failed;
- (struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; })geometryDescriptor;
- (id)messagePartHighlightChatItem;
- (id)time;
- (id)sender;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })associatedMessageRange;
- (BOOL)wantsDrawerLayout;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })fits textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)insets;
- (char)balloonOrientation;
- (char)transcriptOrientation;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
@end

#endif /* CKMessagePartHighlightChatItem_h */

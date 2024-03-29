//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMAssociatedMessageChatItem_h
#define IMAssociatedMessageChatItem_h
@import Foundation;

#include "IMTranscriptChatItem.h"
#include "IMHandle.h"

@class IMEmojiSticker, IMTapback, NSDate, NSDictionary, NSString;

@interface IMAssociatedMessageChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) BOOL parentMessageIsFromMe;
@property (readonly, nonatomic) BOOL failed;
@property (readonly, nonatomic) NSString *associatedMessageGUID;
@property (readonly, nonatomic) long long associatedMessageType;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } associatedMessageRange;
@property (readonly, nonatomic) struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; } geometryDescriptor;
@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) IMHandle *sender;
@property (readonly, nonatomic) NSDictionary *messageSummaryInfo;
@property (readonly, nonatomic) IMTapback *tapback;
@property (readonly, nonatomic) IMEmojiSticker *emojiSticker;
@property (readonly, nonatomic) BOOL isEmojiSticker;
@property (nonatomic) BOOL isReaction;
@property (readonly, nonatomic) unsigned long long stickerPositionVersion;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)_initWithItem:(id)item sender:(id)sender;
- (id)_imAssociatedMessageItem;
- (id)message;
- (void)_setParentMessageIsFromMe:(BOOL)me;
- (void)_setGeometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; })descriptor;
@end

#endif /* IMAssociatedMessageChatItem_h */

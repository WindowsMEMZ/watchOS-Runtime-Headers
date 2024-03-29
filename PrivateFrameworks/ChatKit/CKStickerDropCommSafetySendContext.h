//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKStickerDropCommSafetySendContext_h
#define CKStickerDropCommSafetySendContext_h
@import Foundation;

#include "CKCommSafetySendContext.h"
#include "CKComposition.h"
#include "CKMediaObject.h"
#include "CKMessagePartChatItem.h"

@class IMSticker, NSDictionary;

@interface CKStickerDropCommSafetySendContext : CKCommSafetySendContext

@property (readonly, nonatomic) IMSticker *sticker;
@property (readonly, nonatomic) CKComposition *composition;
@property (readonly, nonatomic) CKMediaObject *mediaObject;
@property (readonly, nonatomic) CKMessagePartChatItem *parentMessagePartChatItem;
@property (readonly, nonatomic) NSDictionary *messageSummaryInfo;

/* class methods */
+ (id)contextKey;
+ (id)contextWithSticker:(id)sticker composition:(id)composition mediaObject:(id)object parentMessagePartChatItem:(id)item messageSummaryInfo:(id)info;

/* instance methods */
- (id)initWithSticker:(id)sticker composition:(id)composition mediaObject:(id)object parentMessagePartChatItem:(id)item messageSummaryInfo:(id)info;
@end

#endif /* CKStickerDropCommSafetySendContext_h */

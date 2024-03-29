//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMTapbackSender_h
#define IMTapbackSender_h
@import Foundation;

#include "IMChat.h"

@class IMTapback, NSAttributedString, NSDictionary, NSString;

@interface IMTapbackSender : NSObject

@property (readonly, nonatomic) IMTapback *tapback;
@property (readonly, nonatomic) NSString *messageGUID;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } messagePartRange;
@property (readonly, nonatomic) NSDictionary *messageSummaryInfo;
@property (readonly, nonatomic) NSString *threadIdentifier;
@property (readonly, nonatomic) NSAttributedString *messageContent;
@property (readonly, nonatomic) NSString *backwardCompatibilityString;
@property (readonly, nonatomic) NSAttributedString *attributedContentString;
@property (readonly, nonatomic) IMChat *chat;

/* instance methods */
- (id)initWithTapback:(id)tapback chat:(id)chat messageGUID:(id)guid messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range messageSummaryInfo:(id)info threadIdentifier:(id)identifier;
- (id)initWithTapback:(id)tapback chat:(id)chat messagePartChatItem:(id)item;
- (void)send;
@end

#endif /* IMTapbackSender_h */

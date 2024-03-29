//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMReportSpamChatItem_h
#define IMReportSpamChatItem_h
@import Foundation;

#include "IMTranscriptChatItem.h"

@interface IMReportSpamChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) BOOL wasReportedAsSpam;
@property (readonly, nonatomic) BOOL isGroupMessage;
@property (readonly, nonatomic) BOOL hasMultipleMessages;
@property (readonly, nonatomic) BOOL showReportSMSSpam;

/* instance methods */
- (id)_initWithItem:(id)item wasReportedAsSpam:(BOOL)spam isGroup:(BOOL)group hasMultipleMessages:(BOOL)messages showReportSMSSpam:(BOOL)smsspam;
@end

#endif /* IMReportSpamChatItem_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMExpressiveSendAsTextChatItem_h
#define IMExpressiveSendAsTextChatItem_h
@import Foundation;

#include "IMTranscriptChatItem.h"

@class NSString;

@interface IMExpressiveSendAsTextChatItem : IMTranscriptChatItem

@property (readonly, copy, nonatomic) NSString *text;

/* instance methods */
- (id)_initWithItem:(id)item text:(id)text;
@end

#endif /* IMExpressiveSendAsTextChatItem_h */

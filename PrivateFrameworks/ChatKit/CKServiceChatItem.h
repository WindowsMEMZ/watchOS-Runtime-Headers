//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKServiceChatItem_h
#define CKServiceChatItem_h
@import Foundation;

#include "CKMultilineStampLabelChatItem.h"

@interface CKServiceChatItem : CKMultilineStampLabelChatItem
/* instance methods */
- (unsigned long long)layoutType;
- (id)loadTranscriptText;
- (id)_serviceName;
- (id)_serviceImage;
- (id)_subtextImage;
- (id)_subtextWithImage:(id)image;
- (BOOL)isStewieItem;
@end

#endif /* CKServiceChatItem_h */

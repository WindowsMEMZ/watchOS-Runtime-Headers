//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextLongPressLinkInteraction_h
#define _UITextLongPressLinkInteraction_h
@import Foundation;

#include "_UITextSimpleLinkInteraction.h"

@interface _UITextLongPressLinkInteraction : _UITextSimpleLinkInteraction
/* instance methods */
- (id)initWithShouldProxyContextMenuDelegate:(BOOL)delegate;
- (void)smallDelayRecognizer:(id)recognizer;
- (void)longDelayRecognizer:(id)recognizer;
@end

#endif /* _UITextLongPressLinkInteraction_h */

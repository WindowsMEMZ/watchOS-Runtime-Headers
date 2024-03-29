//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextLinkInteractionSession_h
#define _UITextLinkInteractionSession_h
@import Foundation;

#include "UITextItemInteractionInteraction.h"

@protocol UIView<UITextLinkInteraction;

@interface _UITextLinkInteractionSession : NSObject {
  /* instance variables */
  UITextItemInteractionInteraction *_interaction;
  UIView<UITextLinkInteraction> *_linkInteractionView;
}

/* instance methods */
- (id)initWithTextItemInteraction:(id)interaction;
- (void)dealloc;
- (BOOL)canInteractWithLinkAtPoint:(struct CGPoint { double x0; double x1; })point;
- (BOOL)_allowItemInteractions;
- (BOOL)tapOnLinkWithGesture:(id)gesture;
@end

#endif /* _UITextLinkInteractionSession_h */

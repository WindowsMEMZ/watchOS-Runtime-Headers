//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.101.0.0
//
#ifndef TUIEmojiSearchTextField_h
#define TUIEmojiSearchTextField_h
@import Foundation;

#include "UITextField.h"
#include "TUIEmojiSearchTextFieldBackgroundView.h"
#include "TUIEmojiSearchTextFieldDelegate-Protocol.h"
#include "TUIEmojiSearchTextFieldPortalView.h"
#include "UITextFieldDelegate-Protocol.h"

@class NSDate, NSString, UIImageView;

@interface TUIEmojiSearchTextField : UITextField<UITextFieldDelegate> {
  /* instance variables */
  NSDate *_highlightBeginTime;
  UIImageView *_magnifyingGlassView;
  TUIEmojiSearchTextFieldPortalView *_portalView;
  TUIEmojiSearchTextFieldBackgroundView *_backgroundView;
}

@property (weak, nonatomic) NSObject<TUIEmojiSearchTextFieldDelegate> *searchDelegate;
@property (readonly, nonatomic) BOOL pretendsToBecomeFirstResponder;
@property (nonatomic) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)preferredHeight;

/* instance methods */
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;
- (void)validateCommand:(id)command;
- (void)paste:(id)paste;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame pretendsToBecomeFirstResponder:(BOOL)responder;
- (id)_textAndGlyphColorForRenderConfig:(id)config;
- (id)_textAndGlyphCompositingFilterForRenderConfig:(id)config;
- (void)_setRenderConfig:(id)config;
- (id)_clearButton;
- (void)didMoveToWindow;
- (id)portalView;
- (void)_updatePlaceholderPosition;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })leftViewRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rightViewRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)insertionPointColor;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)_matchPortalViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setHighlighted:(BOOL)highlighted;
- (void)_setCursorVisibleAndBlinks:(BOOL)blinks;
- (BOOL)isActive;
- (BOOL)isEditing;
- (void)_windowBecameKeyNotificationPosted:(id)posted;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)_isInteractiveDespiteResponderStatus;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (id)selectionContainerView;
- (void)fieldEditorDidChange:(id)change;
- (BOOL)textFieldShouldReturn:(id)return;
- (BOOL)textFieldShouldClear:(id)clear;
@end

#endif /* TUIEmojiSearchTextField_h */

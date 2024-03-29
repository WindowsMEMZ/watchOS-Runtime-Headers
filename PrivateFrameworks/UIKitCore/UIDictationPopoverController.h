//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIDictationPopoverController_h
#define UIDictationPopoverController_h
@import Foundation;

#include "UIKeyboardPopoverController.h"
#include "UILabel.h"
#include "UITextView.h"
#include "UIView.h"
#include "_UIGeometryChangeObserver-Protocol.h"
#include "_UIScrollViewScrollObserver-Protocol.h"

@class NSLayoutConstraint, NSMutableArray, NSString;
@protocol UIResponder<UITextInput;

@interface UIDictationPopoverController : UIKeyboardPopoverController<_UIScrollViewScrollObserver, _UIGeometryChangeObserver> {
  /* instance variables */
  UIResponder<UITextInput> *_inputDelegate;
  NSMutableArray *_scrollViews;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initCaretRectInView;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sourceRect;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _editMenuFrame;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _clipBounds;
  UIView *_inputAccessoryView;
  UIView *_dictationView;
  NSLayoutConstraint *_dictationViewTopConstraint;
  NSLayoutConstraint *_dictationViewBottomConstraint;
  UILabel *_title;
  UITextView *_textView;
  UIView *_bottomEdgeView;
  BOOL _isVerticalText;
  BOOL _needsRestoreArrowDirction;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _popoverFrame;
  double _bottomMargin;
  unsigned long long _arrowDirection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContentView:(id)view contentSize:(struct CGSize { double x0; double x1; })size inputDelegate:(id)delegate;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)forwardRemoteDictationPopover:(BOOL)popover;
- (void)setRemoteDictationPopover:(id)popover;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipBounds;
- (long long)overrideUserInterfaceStyle;
- (void)textDidChange:(id)change;
- (void)keyboardDidChange:(id)change;
- (void)_geometryChanged:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } x5; id x6; id x7; id x8; id x9; } *)changed forAncestor:(id)ancestor;
- (void)_observeScrollViewDidScroll:(id)scroll;
- (void)movePopoverView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })view;
- (void)movePopoverView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })view editMenuFrame:(id)frame;
- (void)movePopoverViewToCurrentCareLocation;
- (void)movePopoverViewForEditMenuFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectInWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })window;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sourceRect;
- (BOOL)canPresentTip;
- (void)presentTip:(id)tip tipDescription:(id)description;
- (void)dismissTip;
@end

#endif /* UIDictationPopoverController_h */

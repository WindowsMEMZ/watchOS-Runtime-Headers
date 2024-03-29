//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITextSelectionDisplayInteraction_h
#define UITextSelectionDisplayInteraction_h
@import Foundation;

#include "UIInteraction-Protocol.h"
#include "UITextCursorAssertion-Protocol.h"
#include "UITextCursorAssertionController.h"
#include "UITextCursorAssertionControllerSubject-Protocol.h"
#include "UITextInput-Protocol.h"
#include "UITextSelectionDisplayInteractionDelegate-Protocol.h"
#include "UIView.h"
#include "_UIAssertionController.h"
#include "_UIAssertionControllerSubject-Protocol.h"
#include "_UICursorAccessoryViewController.h"
#include "_UICursorAccessoryViewControllerDelegate-Protocol.h"
#include "_UIGeometryChangeObserver-Protocol.h"
#include "_UITextCursorTrailingGlowView.h"
#include "_UITextCursorView.h"
#include "_UITextFloatingCursorSession.h"
#include "_UITextSelectionHighlightView.h"
#include "_UITextSelectionRangeAdjustmentContainerView.h"

@class NSArray, NSString;
@protocol UIView<UITextCursorView, UIView<UITextSelectionHighlightView;

@interface UITextSelectionDisplayInteraction : NSObject<UITextCursorAssertionControllerSubject, _UIGeometryChangeObserver, _UIAssertionControllerSubject, _UICursorAccessoryViewControllerDelegate, UIInteraction> {
  /* instance variables */
  struct { unsigned int x :1 selectionContainerViewBelowText; unsigned int x :1 activeSelection; unsigned int x :1 obtainBlinkSuppressionAssertion; unsigned int x :1 obtainGhostCursorAssertion; } _delegateRespondsTo;
  struct { unsigned int x :1 selectionContainerViewAboveText; unsigned int x :1 selectionContainerView; unsigned int x :1 selectionClipRect; } _viewRespondsTo;
  struct { unsigned int x :1 shouldSuppressSelectionHandles; unsigned int x :1 visibleRangeWithLayout; unsigned int x :1 nsrangeForTextRange; unsigned int x :1 unobscuredContentRect; unsigned int x :1 textLayoutManager; unsigned int x :1 caretTransformForPosition; } _textInputRespondsTo;
  BOOL _needsUpdate;
  BOOL _cursorAccessoryViewHidden;
  BOOL _hiddenForApplicationSuspend;
  BOOL _didInstallManagedSubviews;
  BOOL _cursorFadedHiddenForFloatingCursor;
  _UITextSelectionRangeAdjustmentContainerView *_rangeAdjustmentViewContainer;
  _UITextSelectionHighlightView *_underlineView;
  _UICursorAccessoryViewController *_cursorAccessoryViewController;
  NSArray *_managedSubviewsAboveText;
  NSArray *_managedSubviewsBelowText;
  _UIAssertionController *_assertionController;
  UITextCursorAssertionController *_cursorAssertionController;
  _UITextFloatingCursorSession *_activeFloatingCursorSession;
  BOOL _didInitializeManagedDictationViews;
  _UITextCursorTrailingGlowView *_trailingGlowView;
  NSObject<UITextCursorAssertion> *_showInputModesCursorAssertion;
  NSObject<UITextCursorAssertion> *_showDeleteButtonCursorAssertion;
  int _glowViewMode;
  _UITextCursorView *_concreteCursorView;
  _UITextSelectionHighlightView *_concreteHighlightView;
  NSObject<UITextCursorAssertion> *__dictationBlinkSuppressionAssertion;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } __previousCursorFrame;
}

@property (readonly, nonatomic) _UITextCursorTrailingGlowView *_trailingGlowView;
@property (nonatomic) BOOL cursorBlinks;
@property (nonatomic) BOOL cursorVisible;
@property (nonatomic) BOOL ghostAppearance;
@property (nonatomic) unsigned long long activeIndicators;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _UITextCursorView *_cursorView;
@property (readonly, nonatomic) _UITextSelectionHighlightView *_highlightView;
@property (readonly, nonatomic) _UITextSelectionHighlightView *_underlineView;
@property (readonly, nonatomic) _UITextSelectionHighlightView *_existingUnderlineView;
@property (readonly, nonatomic) _UITextSelectionRangeAdjustmentContainerView *_rangeAdjustmentViewContainer;
@property (readonly, nonatomic) UITextCursorAssertionController *_cursorAssertionController;
@property (nonatomic) BOOL cursorHidden;
@property (readonly, nonatomic) BOOL _cursorVisible;
@property (readonly, nonatomic) BOOL _cursorAccessoryViewEnabled;
@property (readonly, nonatomic) BOOL _cursorAccessoryViewVisible;
@property (nonatomic) int rangeViewMode;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _caretRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } textSelectionMenuSourceRect;
@property (readonly, nonatomic) BOOL _displayingVerticalSelection;
@property (readonly, nonatomic) _UICursorAccessoryViewController *_cursorAccessoryViewController;
@property (nonatomic) int _glowViewMode;
@property (nonatomic) BOOL _isDictationRunning;
@property (nonatomic) BOOL activated;
@property (readonly, weak, nonatomic) NSObject<UITextInput> *textInput;
@property (readonly, weak, nonatomic) NSObject<UITextSelectionDisplayInteractionDelegate> *delegate;
@property (retain, nonatomic) UIView<UITextCursorView> *cursorView;
@property (retain, nonatomic) UIView<UITextSelectionHighlightView> *highlightView;
@property (retain, nonatomic) NSArray *handleViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIView *view;

/* class methods */
+ (BOOL)isModernSelectionViewEnabled;
+ (BOOL)isTextAccelerationUIEnabled;

/* instance methods */
- (void)clearInputModeCursorAssertion;
- (void)clearDeleteButtonCursorAssertion;
- (id)inputModeForDictationLanguage:(id)language;
- (void)setActiveIndicators:(unsigned long long)indicators animationStyle:(long long)style;
- (void)_cursorAccessoryViewController:(id)controller didActivateCursorAccessory:(id)accessory;
- (void)_initializeDictationSupport;
- (void)_initializeManagedDictationViewsIfNecessary;
- (void)_updateDictationUI;
- (void)_resetDictationPortalViews;
- (void)_enableDictationPortalViews;
- (void)_dictationDidBeginNotification:(id)notification;
- (void)_dictationDidFinishNotification:(id)notification;
- (void)_dictationDidPauseNotification:(id)notification;
- (void)_dictationDidResumeNotification:(id)notification;
- (id)_initWithTextInput:(id)input delegate:(id)delegate activated:(BOOL)activated;
- (id)initWithTextInput:(id)input delegate:(id)delegate;
- (void)dealloc;
- (void)willMoveToView:(id)view;
- (void)didMoveToView:(id)view;
- (void)_updateDelegateConformance;
- (void)_updateViewConformance;
- (void)_updateTextInputConformance;
- (void)_didReceiveApplicationWillSuspendNotification:(id)notification;
- (void)_didReceiveApplicationWillResumeNotification:(id)notification;
- (void)_trackingViewportDidLayout:(id)layout;
- (id)_internalDelegate;
- (id)_managedViewForType:(long long)type;
- (id)_managedSubviewsAboveText;
- (id)_managedSubviewsBelowText;
- (id)_allManagedSubviews;
- (id)_hostViewAboveText;
- (id)_hostViewBelowText;
- (void)_installManagedSubviewsIfNecessary;
- (void)_removeManagedSubviews;
- (void)layoutManagedSubviews;
- (void)setNeedsSelectionUpdate;
- (id)_activeSelection;
- (id)_selectedRange;
- (BOOL)_isCursorVisible;
- (BOOL)_isHighlightVisible;
- (BOOL)_isRangeAdjustmentUIVisible;
- (BOOL)_isCursorAccessoryViewEnabled;
- (BOOL)_isCursorAccessoryViewVisible;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_textInputRectInSelectionViewCoordinateSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })space;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformRelativeToTextInputCoordinateSpace:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })space forView:(id)view;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_caretRectForPosition:(id)position;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_caretTransform;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_caretRectForDictationTrailingGlowView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_caretRectAtStartOfLine;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentBoundsForPlacement:(long long)placement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectionClipRectAt:(long long)at;
- (id)_visibleSelectionRectsForRange:(id)range;
- (id)_tintColorOrDefault:(id)default alpha:(double)alpha;
- (id)_tintColorOrDefault:(id)default;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_lollipopTransformForSelectionRect:(id)rect view:(id)view;
- (void)_updateSelectionIfNeeded;
- (void)_setGlowViewMode:(int)mode;
- (BOOL)_shouldHitTestSelectionGrabbers;
- (id)_beginFloatingCursorSessionAtPoint:(struct CGPoint { double x0; double x1; })point inContainer:(id)container;
- (BOOL)_clientManagesSelectionViewSubviewOrder;
- (void)_filterArchivedSubviews:(id)subviews;
- (BOOL)_isManagedSelectionSubview:(id)subview;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_textRangeAdjustmentRectForEdge:(unsigned long long)edge selectionRects:(id)rects;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_grabberDotRectForTextRangeAdjustmentEdgeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect isVertical:(BOOL)vertical direction:(unsigned long long)direction;
- (BOOL)_isDisplayingVerticalSelection;
- (void)_didBeginRangeAdjustmentInteraction:(id)interaction;
- (void)_didEndRangeAdjustmentInteraction:(id)interaction;
- (void)_geometryChanged:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } x5; id x6; id x7; id x8; id x9; } *)changed forAncestor:(id)ancestor;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_paddedEdgeInsetsForGrabberDirection:(unsigned long long)direction isVertical:(BOOL)vertical scale:(double)scale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRangeAdjustmentRectForEdge:(unsigned long long)edge;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })paddedTextRangeAdjustmentHitRegionForEdge:(unsigned long long)edge precision:(unsigned long long)precision;
- (id)textRangeAdjustmentViewForEdge:(unsigned long long)edge;
- (void)_setCursorFadedHiddenForFloatingCursor:(BOOL)cursor animated:(BOOL)animated;
- (id)_obtainGrabberSuppressionAssertion;
- (id)_obtainGhostCursorAssertion;
- (id)obtainBlinkSuppressionAssertionForReason:(id)reason;
- (BOOL)assertionActivationStateForType:(unsigned long long)type;
- (void)assertionActivationStateChangedToState:(BOOL)state forType:(unsigned long long)type;
- (void)cursorAccessoryViewController:(id)controller didActivateCursorAccessory:(id)accessory;
- (id)_obtainHideCursorAccessoriesAssertionWithReason:(id)reason;
- (BOOL)isActivated;
- (BOOL)isCursorHidden;
@end

#endif /* UITextSelectionDisplayInteraction_h */

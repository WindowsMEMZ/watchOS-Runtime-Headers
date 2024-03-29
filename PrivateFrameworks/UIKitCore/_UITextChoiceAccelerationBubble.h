//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextChoiceAccelerationBubble_h
#define _UITextChoiceAccelerationBubble_h
@import Foundation;

#include "UIControl.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UILayoutGuide.h"
#include "UIScrollView.h"
#include "UIStackView.h"
#include "UITapGestureRecognizer.h"
#include "UIView.h"
#include "UIVisualEffectView.h"
#include "_UIReplacementCandidate.h"
#include "_UITextOption.h"

@class CAShapeLayer, NSArray, NSLayoutConstraint, NSString, TIKeyboardCandidate;

@interface _UITextChoiceAccelerationBubble : UIControl<UIGestureRecognizerDelegate>

@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UILayoutGuide *textAnchor;
@property (retain, nonatomic) NSLayoutConstraint *anchorLeading;
@property (retain, nonatomic) NSLayoutConstraint *anchorTop;
@property (retain, nonatomic) NSLayoutConstraint *anchorWidth;
@property (retain, nonatomic) NSLayoutConstraint *anchorHeight;
@property (retain, nonatomic) NSArray *boundaryConstraints;
@property (retain, nonatomic) NSLayoutConstraint *leadingSpacing;
@property (retain, nonatomic) NSArray *belowTextConstraints;
@property (retain, nonatomic) NSArray *aboveTextConstraints;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } referenceRect;
@property (retain, nonatomic) TIKeyboardCandidate *candidate;
@property (nonatomic) BOOL shouldRejectCandidate;
@property (retain, nonatomic) _UIReplacementCandidate *replacement;
@property (readonly, nonatomic) NSString *selectedChoice;
@property (weak, nonatomic) UIView *parentView;
@property (nonatomic) long long buttonType;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (retain, nonatomic) CAShapeLayer *backgroundMaskLayer;
@property (retain, nonatomic) UIStackView *contentsView;
@property (retain, nonatomic) UIScrollView *backingScrollView;
@property (retain, nonatomic) _UITextOption *sideButton;
@property (retain, nonatomic) NSArray *buttonConstraints;
@property (retain, nonatomic) UIView *textHighlightView;
@property (nonatomic) BOOL needsRTLCheck;
@property (nonatomic) BOOL isDismissing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareGesture;
- (void)updateTextAnchorForParentView:(id)view;
- (void)anchorToTextIfNeeded;
- (void)updateSelfWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (BOOL)promptWillCollideWithKeyboard:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })keyboard;
- (void)showChoices:(BOOL)choices;
- (void)updateForSingleWord:(id)word textAnchorRect:(id)rect inTextView:(id)view parentView:(id)view highlightColor:(id)color;
- (void)updateTextBoxHighlightForRect:(id)rect inTextView:(id)view parentView:(id)view highlightColor:(id)color;
- (void)updateTextHighlightViewWithColor:(id)color convertedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)hideForNow;
- (void)updateWithChoices:(id)choices fromParentView:(id)view referenceTextView:(id)view presentedFromRect:(id)rect;
- (void)updateViewForOptions:(id)options;
- (void)updateButtonName:(id)name placement:(long long)placement originalText:(id)text;
- (void)updateButtonForType:(long long)type;
- (void)layoutSubviews;
- (void)inputModeDidChange:(id)change;
- (BOOL)usingRTLInputMode;
- (id)textOptionWithText:(id)text type:(long long)type;
- (id)backgroundImageView;
- (id)squaredOffBubblePathInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)bubblePathInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)showTextHighlightView:(BOOL)view;
- (id)optionForPoint:(struct CGPoint { double x0; double x1; })point withEvent:(id)event;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)tappedInside:(id)inside;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (void)removeFromSuperview;
- (void)reset;
- (void)removeAnimated;
- (void)dismissWithCancel;
- (void)dismissWithRevert:(id)revert;
- (void)dismissWithText:(id)text;
- (int)textEffectsVisibilityLevelInKeyboardWindow;
- (int)textEffectsVisibilityLevel;
@end

#endif /* _UITextChoiceAccelerationBubble_h */

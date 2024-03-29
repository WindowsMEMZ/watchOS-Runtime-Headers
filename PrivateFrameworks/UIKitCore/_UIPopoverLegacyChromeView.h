//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIPopoverLegacyChromeView_h
#define _UIPopoverLegacyChromeView_h
@import Foundation;

#include "_UIPopoverStandardChromeView.h"
#include "UIView.h"
#include "UIVisualEffectView.h"

@interface _UIPopoverLegacyChromeView : _UIPopoverStandardChromeView {
  /* instance variables */
  UIView *_arrowBackgroundView;
  UIVisualEffectView *_blurView;
  UIView *_maskView;
  long long _requestedBackgroundStyle;
  long long _backgroundStyle;
  BOOL _popoverBackgroundColorIsOpaque;
  BOOL _arrowVisible;
  BOOL _wasPinned;
}

@property (readonly, nonatomic) UIView *arrowView;
@property (readonly, nonatomic) UIView *leftCapView;
@property (readonly, nonatomic) UIView *rightCapView;
@property (readonly, nonatomic) BOOL hasComponentViews;

/* class methods */
+ (double)arrowHeight;
+ (double)arrowBase;

/* instance methods */
- (double)minNonPinnedOffset;
- (double)maxNonPinnedOffset;
- (void)didMoveToWindow;
- (void)_layoutArrowViewsUpOrDown;
- (void)_layoutArrowViewsLeftOrRight;
- (void)_layoutArrowViewsNone;
- (void)layoutSubviews;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)motionBegan:(long long)began withEvent:(id)event;
- (void)motionEnded:(long long)ended withEvent:(id)event;
- (void)motionCancelled:(long long)cancelled withEvent:(id)event;
- (double)arrowOffset;
- (void)setArrowOffset:(double)offset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_shadowInsets;
- (double)_shadowOpacity;
- (double)_shadowRadius;
- (struct CGSize { double x0; double x1; })_shadowOffset;
- (id)_shadowPath;
- (void)_updateChrome;
- (BOOL)useShortMode;
- (void)_configureEffectView;
- (void)_removeEffectView;
- (id)backgroundEffect;
- (long long)backgroundStyle;
- (void)setBackgroundStyle:(long long)style;
- (long long)_resolvedBackgroundStyle;
- (void)_updateBackgroundStyle;
- (void)_resetComponentViews;
- (void)_loadNecessaryViews;
- (BOOL)isPinned;
- (void)setPopoverBackgroundColor:(id)color;
- (void)setArrowBackgroundColor:(id)color;
@end

#endif /* _UIPopoverLegacyChromeView_h */

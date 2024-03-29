//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFMoreMenuButton_h
#define SFMoreMenuButton_h
@import Foundation;

#include "_SFDimmingButton.h"
#include "SFDeferrableUpdateView-Protocol.h"
#include "SFProgressView.h"

@class UIColor, UIView;

@interface SFMoreMenuButton : _SFDimmingButton<SFDeferrableUpdateView> {
  /* instance variables */
  SFProgressView *_progressView;
  double _movedToWindowTime;
  BOOL _isShowingArrowDown;
  struct { backgroundNotificationObserver *foregroundNotificationObserver; needsDeferredContentUpdate * x0; BOOL x1; BOOL sceneIsForeground; } _deferrableUpdateViewState;
  UIView *_viewPendingPulse;
}

@property (nonatomic) long long progressStyle;
@property (nonatomic) double downloadProgress;
@property (nonatomic) long long symbolScale;
@property (nonatomic) BOOL iconFilled;
@property (retain, nonatomic) UIColor *progressTintColor;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setDownloadProgress:(double)progress animated:(BOOL)animated;
- (void)setNeedsPulseOnView:(id)view;
- (BOOL)isIconFilled;
- (void)setSelected:(BOOL)selected;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)tintColorDidChange;
- (void)_updateContentsAnimated:(BOOL)animated;
- (void)_updateImage;
- (void)_updateImageAllowingDissolve:(BOOL)dissolve;
- (BOOL)_shouldShowProgressView;
- (void)_setShowsProgressView:(BOOL)view;
- (void)_updateProgressViewMetrics;
- (double)_progressViewRadius;
- (double)_progressViewTrackWidth;
- (struct { id x0; id x1; BOOL x2; BOOL x3; } *)deferrableUpdateViewState;
- (void)updateContents;
@end

#endif /* SFMoreMenuButton_h */

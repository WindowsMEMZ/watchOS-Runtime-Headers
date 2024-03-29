//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WKScrollView_h
#define WKScrollView_h
@import Foundation;

#include "UIScrollView.h"

@protocol WKWebView<UIScrollViewDelegate, {RetainPtr<WKScrollViewDelegateForwarder>="m_ptr"^v}, {WeakObjCPtr<id<UIScrollViewDelegate>>="m_weakReference"@}, {optional<UIEdgeInsets>=""(?="__null_state_"c"__val_"{UIEdgeInsets="top"d"left"d"bottom"d"right"d})"__engaged_"B};

@interface WKScrollView : UIScrollView {
  /* instance variables */
  struct WeakObjCPtr<id<UIScrollViewDelegate>> { id m_weakReference; } _externalDelegate;
  struct RetainPtr<WKScrollViewDelegateForwarder> { void *m_ptr; } _delegateForwarder;
  BOOL _backgroundColorSetByClient;
  BOOL _indicatorStyleSetByClient;
  BOOL _decelerationRateSetByClient;
  BOOL _contentInsetWasExternallyOverridden;
  double _keyboardBottomInsetAdjustment;
  BOOL _scrollEnabledByClient;
  BOOL _scrollEnabledInternal;
  BOOL _zoomEnabledByClient;
  BOOL _zoomEnabledInternal;
  BOOL _bouncesSetByClient;
  BOOL _bouncesHorizontalInternal;
  BOOL _bouncesVerticalInternal;
  struct optional<UIEdgeInsets> { union { char __null_state_; struct UIEdgeInsets { double top; double left; double bottom; double right; } __val_; } x0; BOOL __engaged_; } _contentScrollInsetFromClient;
  struct optional<UIEdgeInsets> { union { char __null_state_; struct UIEdgeInsets { double top; double left; double bottom; double right; } __val_; } x0; BOOL __engaged_; } _contentScrollInsetInternal;
}

@property (nonatomic) WKWebView<UIScrollViewDelegate> *internalDelegate;
@property (readonly, nonatomic) BOOL _contentInsetWasExternallyOverridden;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setDelegate:(id)delegate;
- (id)delegate;
- (BOOL)gestureRecognizer:(id)recognizer shouldRequireFailureOfGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (void)_updateDelegate;
- (void)setBackgroundColor:(id)color;
- (void)_setBackgroundColorInternal:(id)internal;
- (void)setIndicatorStyle:(long long)style;
- (void)_setIndicatorStyleInternal:(long long)internal;
- (void)setDecelerationRate:(double)rate;
- (void)_setDecelerationRateInternal:(double)internal;
- (double)_rubberBandOffsetForOffset:(double)offset maxOffset:(double)offset minOffset:(double)offset range:(double)range outside:(BOOL *)outside;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (void)_resetContentInset;
- (struct CGSize { double x0; double x1; })_currentTopLeftRubberbandAmount;
- (void)_restoreContentOffsetWithRubberbandAmount:(struct CGSize { double x0; double x1; })amount;
- (void)_setContentSizePreservingContentOffsetDuringRubberband:(struct CGSize { double x0; double x1; })rubberband;
- (void)_adjustForAutomaticKeyboardInfo:(id)info animated:(BOOL)animated lastAdjustment:(double *)adjustment;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_systemContentInset;
- (BOOL)isScrollEnabled;
- (void)setScrollEnabled:(BOOL)enabled;
- (void)_setScrollEnabledInternal:(BOOL)internal;
- (void)_updateScrollability;
- (void)setBounces:(BOOL)bounces;
- (void)_setBouncesInternal:(BOOL)internal vertical:(BOOL)vertical;
- (void)_updateBouncability;
- (void)setZoomEnabled:(BOOL)enabled;
- (void)_setZoomEnabledInternal:(BOOL)internal;
- (void)_updateZoomability;
- (void)_sendPinchGestureActionEarlyIfNeeded;
- (void)handlePan:(id)pan;
- (void)addGestureRecognizer:(id)recognizer;
- (void)_setContentScrollInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (BOOL)_setContentScrollInsetInternal:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })internal;
- (void)_updateContentScrollInset;
- (void)_configureDigitalCrownScrolling;
- (struct CGPoint { double x0; double x1; })_puic_contentOffsetForCrownInputSequencerOffset:(double)offset;
@end

#endif /* WKScrollView_h */

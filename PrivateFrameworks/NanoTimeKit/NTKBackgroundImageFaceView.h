//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKBackgroundImageFaceView_h
#define NTKBackgroundImageFaceView_h
@import Foundation;

#include "NTKDigitalFaceView.h"
#include "NTKComplicationDisplayWrapperView.h"
#include "NTKEditOption.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIImageView, UIView;

@interface NTKBackgroundImageFaceView : NTKDigitalFaceView<UIGestureRecognizerDelegate> {
  /* instance variables */
  NTKEditOption *_editOptionFrom;
  UIView *_transitionViewFrom;
  NTKEditOption *_editOptionTo;
  UIView *_transitionViewTo;
  UIView *_transitionDimmingView;
  BOOL _shouldAdjustLayoutForTimeTravel;
  UIView *_timeTravelDimmingOverlayView;
  UIView *_selectedContentView;
  double _breathScaleModifier;
  double _rubberBandScaleModifier;
  NTKComplicationDisplayWrapperView *_touchWrapper;
}

@property (retain, nonatomic) UIView *zoomMaskView;
@property (retain, nonatomic) UIImageView *zoomVignette;
@property (nonatomic) struct CGPoint { double x0; double x1; } timeViewZoomEndingCenter;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } vignetteZoomStartingBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } maskZoomStartingBounds;
@property (retain, nonatomic) UIView *borrowedCircleView;
@property (retain, nonatomic) UIView *borrowedTimeView;
@property (readonly, nonatomic) UIView *backgroundContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (BOOL)_needsForegroundContainerView;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (id)_complicationDisplayWrapperForTouch:(id)touch;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (id)_digitalTimeLabelStyleFromViewMode:(long long)mode faceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)_updateFontInStyle:(id)style monospace:(BOOL)monospace;
- (double)_keylineCornerRadiusForComplicationSlot:(id)slot;
- (BOOL)_fadesComplicationSlot:(id)slot inEditMode:(long long)mode;
- (void)_configureForTransitionFraction:(double)fraction fromEditMode:(long long)mode toEditMode:(long long)mode;
- (void)_configureForEditMode:(long long)mode;
- (double)_backgroundImageAlphaForEditMode:(long long)mode;
- (double)_timeLabelAlphaForEditMode:(long long)mode;
- (id)_animationImageView;
- (double)_parallaxScaleFactor;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (void)setViewMode:(long long)mode;
- (void)_applyTransitionFraction:(double)fraction fromOption:(id)option toOption:(id)option forCustomEditMode:(long long)mode slot:(id)slot;
- (void)_cleanupAfterTransitionToOption:(id)option forCustomEditMode:(long long)mode slot:(id)slot;
- (void)_applyBreathingFraction:(double)fraction forCustomEditMode:(long long)mode slot:(id)slot;
- (void)_applyRubberBandingFraction:(double)fraction forCustomEditMode:(long long)mode slot:(id)slot;
- (void)_applyScaleTransform:(id)transform;
- (BOOL)_shouldFadeToTransitionView;
- (double)_timeTravelYAdjustment;
- (BOOL)_shouldAdjustLayoutForTimeTravel;
- (void)_startScrubbingAnimated:(BOOL)animated withCompletion:(id /* block */)completion;
- (void)_scrubToDate:(id)date animated:(BOOL)animated;
- (void)_endScrubbingAnimated:(BOOL)animated withCompletion:(id /* block */)completion;
- (void)_startScrubbingAnimationFromUIViewAnimateWithDuration;
- (void)_endScrubbingAnimationFromUIViewAnimateWithDuration;
- (BOOL)_timeLabelUsesLegibility;
- (id)_selectedContentView;
- (id)_viewForEditOption:(id)option;
- (void)_beginTransitionToOption;
- (void)_didTransitionToOptionView:(id)view;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_removeAllSubviewsFrom:(id)from;
@end

#endif /* NTKBackgroundImageFaceView_h */

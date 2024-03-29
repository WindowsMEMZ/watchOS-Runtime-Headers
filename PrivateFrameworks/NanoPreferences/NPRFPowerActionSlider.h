//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1108.10.0.0.0
//
#ifndef NPRFPowerActionSlider_h
#define NPRFPowerActionSlider_h
@import Foundation;

#include "UIControl.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIBezierPath, UIColor, UIFont, UIImage, UIImageView, UILabel, UIPanGestureRecognizer, UIView, _UIBackdropView, _UIVibrantSettings;
@protocol NPRFPowerActionSliderDelegate, UIView<CSLUIActionSliderLabel;

@interface NPRFPowerActionSlider : UIControl<UIGestureRecognizerDelegate> {
  /* instance variables */
  UIView *_contentView;
  UIView *_trackDodgeView;
  UIView *_trackBackgroundView;
  _UIBackdropView *_trackBlurView;
  UIView *_trackSolidView;
  UIImageView *_knobImageView;
  struct CGPoint { double x; double y; } _slideGestureInitialPoint;
}

@property (nonatomic) double trackWidthProportion;
@property (nonatomic) BOOL showingTrackLabel;
@property (nonatomic) BOOL animating;
@property (nonatomic) double cachedTrackMaskWidth;
@property (readonly, nonatomic) UIView *knobView;
@property (retain, nonatomic) _UIVibrantSettings *vibrantSettings;
@property (nonatomic) long long style;
@property (nonatomic) long long textStyle;
@property (nonatomic) unsigned long long dragStyle;
@property (retain, nonatomic) UIImage *knobImage;
@property (retain, nonatomic) NSString *knobText;
@property (readonly, retain, nonatomic) UILabel *knobLabel;
@property (retain, nonatomic) UIColor *knobColor;
@property (nonatomic) struct CGSize { double x0; double x1; } knobImageOffset;
@property (copy, nonatomic) NSString *trackText;
@property (retain, nonatomic) UIFont *trackFont;
@property (nonatomic) struct CGSize { double x0; double x1; } trackSize;
@property (nonatomic) double trackAlpha;
@property (nonatomic) double minSlideCompletionPercentage;
@property (nonatomic) double minFastSlideCompletionPercentage;
@property (nonatomic) double trackTextBaselineFromBottom;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } trackTextRect;
@property (readonly, retain, nonatomic) UILabel *trackLabel;
@property (readonly, nonatomic) UIPanGestureRecognizer *slideGestureRecognizer;
@property (nonatomic) NSObject<NPRFPowerActionSliderDelegate> *delegate;
@property (nonatomic) double knobPosition;
@property (nonatomic) double knobWidth;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } knobInsets;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } knobRect;
@property (readonly, nonatomic) UIBezierPath *knobMaskPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame vibrantSettings:(id)settings;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame vibrantSettings:(id)settings deviceVariant:(long long)variant;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)openTrackAnimated:(BOOL)animated;
- (void)closeTrackAnimated:(BOOL)animated;
- (void)setBackgroundColor:(id)color;
- (id)backgroundColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_trackFrame;
- (double)_knobWidth;
- (double)_knobMinXInset;
- (double)_knobMaxXInset;
- (double)_knobVerticalInset;
- (double)_knobHorizontalPosition;
- (double)_knobMinX;
- (double)_stretchKnobX;
- (double)_stretchKnobWidth;
- (double)_knobMaxX;
- (double)_knobLeftMostX;
- (double)_knobRightMostX;
- (double)_knobAvailableX;
- (BOOL)xPointIsWithinTrack:(double)track;
- (BOOL)shouldHideTrackLabelForXPoint:(double)xpoint;
- (void)didMoveToWindow;
- (void)_makeTrackLabel;
- (void)layoutSubviews;
- (id)trackMaskImage;
- (id)trackMaskPath;
- (void)updateAllTrackMasks;
- (void)setMaskPath:(struct CGPath *)path onView:(id)view;
- (void)setMaskFromImage:(id)image onView:(id)view;
- (void)showTrackLabel;
- (void)hideTrackLabel:(BOOL)label;
- (void)_slideCompleted:(BOOL)completed;
- (void)_knobPanGesture:(id)gesture;
- (void)hideTrackLabelIfNecessary:(BOOL)necessary;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (BOOL)shouldReverseLayoutDirection;
- (double)_currentScreenScale;
- (BOOL)isShowingTrackLabel;
- (BOOL)isAnimating;
- (id)_knobView;
@end

#endif /* NPRFPowerActionSlider_h */

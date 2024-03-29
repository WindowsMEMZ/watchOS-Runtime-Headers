//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKColorSlider_h
#define NTKColorSlider_h
@import Foundation;

#include "UISlider.h"
#include "NTKColorSliderDelegate-Protocol.h"
#include "NTKColorSliderThumbView.h"
#include "PUICCrownInputSequencerDelegate-Protocol.h"

@class CAGradientLayer, NSArray, NSString, PUICCrownInputSequencer, UIImageView;

@interface NTKColorSlider : UISlider<PUICCrownInputSequencerDelegate> {
  /* instance variables */
  UIImageView *_thumbView;
  NTKColorSliderThumbView *_thumbContent;
  PUICCrownInputSequencer *_sequencer;
  CAGradientLayer *_trackLayer;
  BOOL _shouldTriggerMidpointFeedback;
}

@property (weak, nonatomic) NSObject<NTKColorSliderDelegate> *delegate;
@property (retain, nonatomic) NSArray *colors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForTrackFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)_updateThumbColor;
- (double)_colorGradientStep;
- (id)createThumbView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect value:(float)value;
- (id)currentMinimumTrackImage;
- (id)currentMaximumTrackImage;
- (void)setValue:(float)value animated:(BOOL)animated;
- (void)_setValue:(float)value animated:(BOOL)animated;
- (double)_sequencerValueForSliderValue:(float)value;
- (float)_sliderValueForSequencerValue:(double)value;
- (BOOL)_valueIsInsideMidpoint:(float)midpoint;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)_wheelChangedWithEvent:(id)event;
- (void)crownInputSequencerOffsetDidChange:(id)change;
- (void)crownInputSequencerIdleDidChange:(id)change;
- (void)_updateDetentsForValue:(float)value;
@end

#endif /* NTKColorSlider_h */

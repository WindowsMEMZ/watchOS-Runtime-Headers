//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMUVolumeControlsView_h
#define NMUVolumeControlsView_h
@import Foundation;

#include "PUICSlider.h"
#include "NMUVolumeRevealController.h"
#include "NMUVolumeRevealControllerDelegate-Protocol.h"
#include "PUICSliderDelegate-Protocol.h"

@class NSString, UIImage, UIView;
@protocol OS_dispatch_source;

@interface NMUVolumeControlsView : PUICSlider<NMUVolumeRevealControllerDelegate, PUICSliderDelegate> {
  /* instance variables */
  UIImage *_speakerMutedImage;
  UIImage *_speakerVolumeImage;
  long long _warningState;
  NSObject<OS_dispatch_source> *_allowPastWarningLimitTimer;
  NSObject<OS_dispatch_source> *_rearmWarningTimer;
  UIView *_warningView;
  float _mutedValue;
  NSObject<PUICSliderDelegate> *_delegate;
  NMUVolumeRevealController *_revealController;
}

@property (nonatomic) BOOL muted;
@property (nonatomic) float EUVolumeLimit;
@property (nonatomic) BOOL shouldBecomeFirstResponder;
@property (nonatomic) double durationForIgnoredValueChangesAfterTracking;
@property (nonatomic) BOOL requiresRevealingBeforeAdjusting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithSliderStyle:(long long)style;
- (void)_wheelChangedWithEvent:(id)event;
- (void)controller:(id)controller didUpdateRevealProgress:(double)progress;
- (void)slider:(id)slider didTapTouchTarget:(long long)target;
- (void)sliderDidBeginCrownInteraction:(id)interaction;
- (void)sliderDidEndCrownInteraction:(id)interaction;
- (void)sliderDidRequestFocus:(id)focus;
- (void)_updateFirstResponderIfNeeded;
- (void)_createOrUpdateWarningViewIfNecessary;
- (void)_updateWithRevealProgress:(double)progress;
- (void)layoutSubviews;
- (void)setStyle:(long long)style;
- (id)delegate;
- (void)setDelegate:(id)delegate;
- (void)setValue:(float)value animated:(BOOL)animated;
- (void)_setValue:(float)value animated:(BOOL)animated sendAction:(BOOL)action crown:(BOOL)crown;
- (void)_updateCompactAccessoryImageForValue:(float)value;
- (id)_compactAccessoryImageWithName:(id)name;
- (void)_fadeWarningView;
- (void)_scheduleAllowPastWarningLimitTimer;
- (void)_cancelAllowPastWarningLimitTimer;
- (void)_scheduleRearmWarningTimer;
- (void)_cancelRearmWarningTimer;
- (float)value;
- (BOOL)isMuted;
@end

#endif /* NMUVolumeControlsView_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKExtraLargeTimeView_h
#define NTKExtraLargeTimeView_h
@import Foundation;

#include "UIView.h"
#include "NTKDigitalTimeLabel.h"
#include "NTKTimeView-Protocol.h"
#include "NTKTritiumAnimator-Protocol.h"

@class CLKDevice, NSString;

@interface NTKExtraLargeTimeView : UIView<NTKTimeView, NTKTritiumAnimator> {
  /* instance variables */
  CLKDevice *_device;
  BOOL _statusBarVisible;
  BOOL _cachedMinimumBrightnessIsValid;
  double _cachedMinimumBrightness;
}

@property (retain, nonatomic) NTKDigitalTimeLabel *timeHourView;
@property (retain, nonatomic) NTKDigitalTimeLabel *timeMinuteView;
@property (nonatomic) BOOL frozen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame forDevice:(id)device;
- (void)dealloc;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (void)setTopColor:(id)color;
- (void)setBottomColor:(id)color;
- (void)_configureTimeLabelsFont;
- (void)prepareWristRaiseAnimation;
- (void)cancelWristRaiseAnimation;
- (void)performWristRaiseAnimation;
- (void)setStatusBarVisible:(BOOL)visible animated:(BOOL)animated;
- (void)setOverrideDate:(id)date duration:(double)duration;
- (void)setTimeOffset:(double)offset;
- (void)tritium_transitionToTritiumOnWithProgress:(float)progress;
- (void)tritium_transitionToTritiumOffWithProgress:(float)progress;
- (void)_tritium_applyToTritiumBrightnessForProgress:(double)progress;
- (void)tritium_transitionToFrameSpecifier:(id)specifier;
- (void)tritium_willTransitionToTritiumOnToFrameSpecifier:(id)specifier;
- (void)tritium_didTransitionToTritiumOn;
- (void)tritium_willTransitionToTritiumOffFromFrameSpecifier:(id)specifier;
- (void)tritium_didTransitionToTritiumOff;
- (void)_updateNumbers;
- (BOOL)isFrozen;
@end

#endif /* NTKExtraLargeTimeView_h */

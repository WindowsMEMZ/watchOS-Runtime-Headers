//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKAstronomyFaceView_h
#define NTKAstronomyFaceView_h
@import Foundation;

#include "NTKDigitalFaceView.h"
#include "NTKDelayedBlock.h"
#include "NTKDigitalTimeLabelStyle.h"
#include "NTKDigitialUtilitarianFaceViewComplicationFactory.h"
#include "NTKTimeView-Protocol.h"
#include "NUNIAstronomyRotationModelObserver-Protocol.h"
#include "NUNIAstronomyVistaViewObserver-Protocol.h"
#include "PUICCrownInputSequencerDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class CLKClockTimerToken, CLKUIColoringLabel, NSDate, NSString, NUNIAstronomyLocationDot, NUNIAstronomyRotationModel, NUNIAstronomyVistaView, PUICClientSideAnimation, PUICCrownInputSequencer, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;

@interface NTKAstronomyFaceView : NTKDigitalFaceView<NTKTimeView, NUNIAstronomyRotationModelObserver, NUNIAstronomyVistaViewObserver, UIGestureRecognizerDelegate, PUICCrownInputSequencerDelegate> {
  /* instance variables */
  NTKDigitialUtilitarianFaceViewComplicationFactory *_faceViewComplicationFactory;
  NTKDigitalTimeLabelStyle *_digitalTimeLabelDefaultStyle;
  NTKDigitalTimeLabelStyle *_digitalTimeLabelSmallInUpperRightCornerStyle;
  PUICClientSideAnimation *_poseInterpolationAnimation;
  PUICCrownInputSequencer *_crownSequencer;
  NUNIAstronomyRotationModel *_rotationModel;
  struct CLLocationCoordinate2D { double latitude; double longitude; } _initialCoordinate;
   _previousTranslation;
  float _recentMovement;
  UIPanGestureRecognizer *_spheroidPanGesture;
  UITapGestureRecognizer *_supplementalModeDoubleTapGesture;
  UITapGestureRecognizer *_interactiveModeTapGesture;
  NSString *_locationManagerToken;
  NUNIAstronomyVistaView *_astronomyVistaView;
  CLKUIColoringLabel *_scrubLabel;
  CLKUIColoringLabel *_phaseLabel;
  CLKUIColoringLabel *_overrideDateLabel;
  UIImageView * _spheroidLabels[8];
  NUNIAstronomyLocationDot *_locationDot;
  NSDate *_overrideDate;
  NSDate *_crownDate;
  CLKClockTimerToken *_clockTimerToken;
  NSDateFormatter * _scrubDateFormatter[3];
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _phaseLabelDefaultFrame;
  float _supplementalFontLineHeightPlusDescender;
  NTKDelayedBlock *_wheelDelayedBlock;
  NTKDelayedBlock *_physicalButtonDelayedBlock;
  long long _previousDataMode;
  long long _animatingToViewMode;
  unsigned long long _vista;
  NSArray * _editingAnimations[3];
  UIView *_borrowedCircleView;
  UIView *_borrowedHandsView;
  unsigned int x :1 _isAnimatingViewMode;
  unsigned int x :1 _isContentLoaded;
  unsigned int x :1 _isLocationCurrent;
  unsigned int x :1 _isHandlingCrownEvents;
  double _tritium_vistaDimming;
}

@property (nonatomic) BOOL frozen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)tritium_frameSpecifierClass;

/* instance methods */
- (id)initWithFaceStyle:(long long)style forDevice:(id)device clientIdentifier:(id)identifier;
- (void)dealloc;
- (id)_newLegacyViewForComplication:(id)complication family:(long long)family slot:(id)slot;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)type slot:(id)slot;
- (void)_configureComplicationView:(id)view forSlot:(id)slot;
- (id)_detachedComplicationDisplays;
- (void)_loadLayoutRules;
- (double)_keylineCornerRadiusForComplicationSlot:(id)slot;
- (double)keylineStyleForComplicationSlot:(id)slot;
- (BOOL)_fadesComplicationSlot:(id)slot inEditMode:(long long)mode;
- (double)_minimumBreathingScaleForComplicationSlot:(id)slot;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (void)_interpolateFromPose:(const struct NTKAstronomyFaceViewAnimationPose { float x0; float x1; float x2; float x3; float x4; float x5; float x6; } *)pose toPose:(const struct NTKAstronomyFaceViewAnimationPose { float x0; float x1; float x2; float x3; float x4; float x5; float x6; } *)pose progress:(float)progress;
- (id)_date;
- (void)_animateTransitionToViewMode:(long long)mode;
- (void)_animateTransitionToViewMode:(long long)mode completion:(id /* block */)completion;
- (void)_setIsAnimatingViewMode:(BOOL)mode;
- (void)setViewMode:(long long)mode;
- (void)_applyViewMode:(long long)mode;
- (BOOL)_shouldHideStatusBarForViewMode:(long long)mode;
- (void)_startClockUpdates;
- (void)_stopClockUpdates;
- (void)_setAstronomyFaceViewModeSupplemental;
- (void)_setAstronomyFaceViewModeDefault;
- (void)_setAstronomyFaceViewModeNonInteractive;
- (void)_setAstronomyFaceViewModeInteractive;
- (void)_handleInteractiveModeGesture:(id)gesture;
- (void)_handleSupplementalModeGesture:(id)gesture;
- (void)_handleSpheroidPanGesture:(id)gesture;
- (void)rotationModelStoppedByDecelerating:(id)decelerating;
- (void)astronomyVistaViewWillDisplay:(id)display forTime:(double)time;
- (void)astronomyVistaViewContentsAnimationFinished:(id)finished;
- (void)_applyDataMode;
- (void)_applyDataModeAnimated:(BOOL)animated;
- (void)_loadSnapshotContentViews;
- (BOOL)_needsForegroundContainerView;
- (void)_layoutForegroundContainerView;
- (void)_unloadSnapshotContentViews;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_layoutPhaseLabel;
- (void)_layoutSpheroidLabel:(int)label;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (void)_showLocationDotIfNeeded;
- (void)_hideLocationDot;
- (void)_asyncUpdateLocale;
- (void)_asyncUpdateTime;
- (void)_updateLocaleAnimated:(BOOL)animated;
- (void)_updateTimeAnimated:(BOOL)animated;
- (void)_updateLocation:(id)location lastLocation:(id)location;
- (void)_becameActiveFace;
- (void)_becameInactiveFace;
- (unsigned long long)_detentTypeForCustomEditMode:(long long)mode slot:(id)slot;
- (void)_setupAstronomyVistaView;
- (unsigned long long)_timeLabelOptions;
- (id)_digitalTimeLabelStyleFromViewMode:(long long)mode;
- (id)_digitalTimeLabelStyleFromViewMode:(long long)mode faceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)digitalTimeLabelDefaultStyle;
- (id)digitalTimeLabelSmallInUpperRightCornerStyle;
- (BOOL)_timeLabelUsesLegibility;
- (void)setOverrideDate:(id)date duration:(double)duration;
- (void)setTimeOffset:(double)offset;
- (void)_prepareToZoom;
- (void)_cleanupAfterZoom;
- (void)_prepareWristRaiseAnimation;
- (void)_performWristRaiseAnimation;
- (BOOL)_wheelChangedWithEvent:(id)event;
- (BOOL)_handlePhysicalButton:(unsigned long long)button event:(unsigned long long)event;
- (void)_wheelDelayedBlockFired;
- (void)_physicalButtonDelayedBlockFired;
- (void)_enableCrownForAstronomyVista:(unsigned long long)vista;
- (void)_disableCrown;
- (BOOL)_canEnterInteractiveMode;
- (BOOL)_shouldHandleHardwareEvents;
- (void)crownInputSequencerOffsetDidChange:(id)change;
- (void)_applyVista:(unsigned long long)vista;
- (void)_applyFromVista:(unsigned long long)vista toVista:(unsigned long long)vista fraction:(double)fraction;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (void)_configureForTransitionFraction:(double)fraction fromEditMode:(long long)mode toEditMode:(long long)mode;
- (void)_configureForEditMode:(long long)mode;
- (long long)_complicationPickerStyleForSlot:(id)slot;
- (struct { long long x0; unsigned long long x1; BOOL x2; struct CGSize { double x0; double x1; } x3; })layoutConfigurationForSlot:(id)slot;
- (void)_applyTransitionFraction:(double)fraction fromOption:(id)option toOption:(id)option forCustomEditMode:(long long)mode slot:(id)slot;
- (void)_applyOption:(id)option forCustomEditMode:(long long)mode slot:(id)slot;
- (void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)discard inGroup:(id)group;
- (BOOL)_wantsMinorDetents;
- (void)tritium_willTransitionToTritiumOnToFrameSpecifier:(id)specifier;
- (void)tritium_willTransitionToTritiumOffFromFrameSpecifier:(id)specifier;
- (void)tritium_transitionToFrameSpecifier:(id)specifier;
- (double)tritium_dimmingValueForCurrentVistaState;
- (void)tritium_prepareForTransitionToTritiumOnAnimated:(BOOL)animated withCompletion:(id /* block */)completion;
- (id)tritium_createFaceAnimator;
- (void)tritium_willSnapshotForBurnInStudy;
@end

#endif /* NTKAstronomyFaceView_h */

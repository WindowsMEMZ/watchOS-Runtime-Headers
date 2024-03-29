//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKeyboardCameraOverlayPresentationController_h
#define UIKeyboardCameraOverlayPresentationController_h
@import Foundation;

#include "UIKeyboardCameraBasePresentationController.h"
#include "UIKeyboardCameraGrabberView.h"
#include "UIPanGestureRecognizer.h"

@class NSLayoutConstraint;

@interface UIKeyboardCameraOverlayPresentationController : UIKeyboardCameraBasePresentationController {
  /* instance variables */
  NSLayoutConstraint *_topLayoutConstraint;
  UIPanGestureRecognizer *_panGestureRecognizer;
  UIKeyboardCameraGrabberView *_grabberView;
  double _keyboardCameraNormalHeight;
  double _keyboardCameraFullScreenHeight;
  double _keyboardCameraHeight;
  double _panningStartingHeight;
  BOOL _isLandscape;
}

/* instance methods */
- (BOOL)updatesGuideDuringRotation;
- (void)_determinePortraitHeights;
- (void)_handlePan:(id)pan;
- (void)_installGrabber;
- (void)presentationTransitionWillBegin;
- (void)presentationTransitionDidEnd:(BOOL)end;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)end;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
@end

#endif /* UIKeyboardCameraOverlayPresentationController_h */

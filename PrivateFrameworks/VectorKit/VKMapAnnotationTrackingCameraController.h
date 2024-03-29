//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKMapAnnotationTrackingCameraController_h
#define VKMapAnnotationTrackingCameraController_h
@import Foundation;

#include "VKAnnotationTrackingCameraController.h"

@interface VKMapAnnotationTrackingCameraController : VKAnnotationTrackingCameraController {
  /* instance variables */
  float _currentAnimationCompletedFraction;
  BOOL _zooming;
}

/* instance methods */
- (double)_zoomLevelForCameraPosition:(struct Matrix<double, 3, 1> { double x0[3] })position;
- (double)_minTrackingCameraDistance:(BOOL)distance;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x0; float x1; float x2; float x3; })insets;
- (struct VKEdgeInsets { float x0; float x1; float x2; float x3; })_effectiveEdgeInsets;
- (void)updateFramerate;
- (void)_goToAnnotationAnimated:(BOOL)animated duration:(double)duration timingFunction:(id /* block */)function isInitial:(BOOL)initial;
- (void)_rotateToHeadingAnimated:(BOOL)animated duration:(double)duration;
@end

#endif /* VKMapAnnotationTrackingCameraController_h */

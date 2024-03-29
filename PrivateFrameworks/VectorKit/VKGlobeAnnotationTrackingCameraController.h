//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKGlobeAnnotationTrackingCameraController_h
#define VKGlobeAnnotationTrackingCameraController_h
@import Foundation;

#include "VKAnnotationTrackingCameraController.h"
#include "VKCameraRegionRestriction.h"

@interface VKGlobeAnnotationTrackingCameraController : VKAnnotationTrackingCameraController {
  /* instance variables */
  void * _anchor;
  struct { double latitude; double longitude; double altitude; } _currentAnimationStartCoordinate;
  struct { double latitude; double longitude; } _currentAnimationPresentationStartCoordinate;
  struct { double latitude; double longitude; } _currentAnimationPresentationEndCoordinate;
  struct { double latitude; double longitude; } _currentAnimationEndCoordinate;
}

@property (nonatomic) void * globeView;
@property (retain, nonatomic) VKCameraRegionRestriction *regionRestriction;

/* instance methods */
- (id)init;
- (void)dealloc;
- (struct Matrix<int, 2, 1> { int x0[2] })_nonOffsetCenterCursor;
- (struct VKEdgeInsets { float x0; float x1; float x2; float x3; })_effectiveEdgeInsets;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x0; float x1; float x2; float x3; })insets;
- (struct Matrix<int, 2, 1> { int x0[2] })_centerCursor;
- (void)_goToAnnotationAnimated:(BOOL)animated duration:(double)duration timingFunction:(id /* block */)function isInitial:(BOOL)initial;
- (void)_rotateToHeadingAnimated:(BOOL)animated duration:(double)duration;
@end

#endif /* VKGlobeAnnotationTrackingCameraController_h */

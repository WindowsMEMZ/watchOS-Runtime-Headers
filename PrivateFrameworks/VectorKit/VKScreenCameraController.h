//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKScreenCameraController_h
#define VKScreenCameraController_h
@import Foundation;

#include "VKCameraController.h"
#include "VKAnimation.h"
#include "VKAnnotationTrackingCameraController-Protocol.h"
#include "VKAnnotationTrackingCameraController.h"
#include "VKCameraRegionRestriction.h"
#include "VKGestureCameraBehavior.h"
#include "VKGesturingCameraController-Protocol.h"
#include "VKTimedAnimation.h"

@class NSString;
@protocol VKTrackableAnnotation;

@interface VKScreenCameraController : VKCameraController<VKAnnotationTrackingCameraController, VKGesturingCameraController> {
  /* instance variables */
  VKAnimation *_zoomAnimation;
  VKTimedAnimation *_pitchAnimation;
  VKTimedAnimation *_rotationAnimation;
  VKTimedAnimation *_regionAnimation;
  VKAnnotationTrackingCameraController *_annotationTrackingCameraController;
  VKGestureCameraBehavior *_gestureCameraControllerBehavior;
  long long _annotationTrackingHeadingAnimationDisplayRate;
  BOOL _isPitchIncreasing;
  BOOL _zoomAnimationCanBeInterrupted;
}

@property (nonatomic) BOOL userChangedZoomSinceLastProgrammaticRegionChange;
@property (nonatomic) struct { double x0; double x1; BOOL x2; } centerCoordinateDistanceRange;
@property (retain, nonatomic) VKCameraRegionRestriction *regionRestriction;
@property (nonatomic) struct { BOOL x0; double x1; BOOL x2; BOOL x3; } annotationTrackingBehavior;
@property (nonatomic) BOOL hasVehicleHeading;
@property (readonly, nonatomic) BOOL animatingToTrackAnnotation;
@property (readonly, nonatomic) NSObject<VKTrackableAnnotation> *trackingAnnotation;
@property (readonly, nonatomic) BOOL trackingHeading;
@property (readonly, nonatomic) BOOL isAnimatingToTrackAnnotation;
@property (readonly, nonatomic) BOOL isTrackingHeading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMapDataAccess:(struct MapDataAccess *)access animationRunner:(struct AnimationRunner *)runner runLoopController:(struct RunLoopController *)controller cameraDelegate:(id)delegate;
- (void)dealloc;
- (void)startTrackingAnnotation:(id)annotation trackHeading:(BOOL)heading animated:(BOOL)animated duration:(double)duration timingFunction:(id /* block */)function;
- (void)stopTrackingAnnotation;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x0; float x1; float x2; float x3; })insets;
- (void)stopSnappingAnimations;
- (void)stopRegionAnimation;
- (void)stopAnimations;
- (BOOL)isAnimating;
- (BOOL)snapMapIfNecessary:(BOOL)necessary;
- (void)clampZoomLevelIfNecessary;
- (void)clampZoomLevelIfNecessaryAnimated:(BOOL)animated;
- (void)updateState;
- (void)setCenterCoordinateDistanceRange:(struct { double x0; double x1; BOOL x2; })range duration:(double)duration timingFunction:(id /* block */)function;
- (void)setRegionRestriction:(id)restriction duration:(double)duration timingFunction:(id /* block */)function;
- (void)zoom:(double)zoom withFocusPoint:(struct CGPoint { double x0; double x1; })point completionHandler:(id /* block */)handler;
- (void)startPinchingWithFocusPoint:(struct CGPoint { double x0; double x1; })point;
- (void)updatePinchWithFocusPoint:(struct CGPoint { double x0; double x1; })point oldFactor:(double)factor newFactor:(double)factor;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { double x0; double x1; })point;
- (void)startPanningAtPoint:(struct CGPoint { double x0; double x1; })point panAtStartPoint:(BOOL)point;
- (void)updatePanWithTranslation:(struct CGPoint { double x0; double x1; })translation;
- (void)stopPanningAtPoint:(struct CGPoint { double x0; double x1; })point;
- (void)startRotatingWithFocusPoint:(struct CGPoint { double x0; double x1; })point;
- (void)updateRotationWithFocusPoint:(struct CGPoint { double x0; double x1; })point newValue:(double)value;
- (void)stopRotatingWithFocusPoint:(struct CGPoint { double x0; double x1; })point;
- (void)startPitchingWithFocusPoint:(struct CGPoint { double x0; double x1; })point;
- (void)updatePitchWithFocusPoint:(struct CGPoint { double x0; double x1; })point translation:(double)translation;
- (void)updatePitchWithFocusPoint:(struct CGPoint { double x0; double x1; })point degrees:(double)degrees;
- (void)stopPitchingWithFocusPoint:(struct CGPoint { double x0; double x1; })point;
- (void)transferGestureState:(id)state;
- (BOOL)tapAtPoint:(struct CGPoint { double x0; double x1; })point;
- (double)durationToAnimateToMapRegion:(id)region;
- (void)setMapRegion:(id)region pitch:(double)pitch yaw:(double)yaw duration:(double)duration timingCurve:(id /* block */)curve completion:(id /* block */)completion;
- (void)setCenterCoordinate:(struct { double x0; double x1; })coordinate altitude:(double)altitude yaw:(double)yaw pitch:(double)pitch duration:(double)duration animationStyle:(long long)style timingCurve:(id /* block */)curve completion:(id /* block */)completion;
- (void)setCenterCoordinate3D:(struct { double x0; double x1; double x2; })d altitude:(double)altitude yaw:(double)yaw pitch:(double)pitch duration:(double)duration animationStyle:(long long)style timingCurve:(id /* block */)curve completion:(id /* block */)completion;
- (void)setYaw:(double)yaw animated:(BOOL)animated;
- (long long)tileSize;
- (void)panWithOffset:(struct CGPoint { double x0; double x1; })offset relativeToScreenPoint:(struct CGPoint { double x0; double x1; })point animated:(BOOL)animated duration:(double)duration completionHandler:(id /* block */)handler;
- (void)enter3DMode;
- (void)exit3DMode;
- (BOOL)canEnter3DMode;
- (void)setVkCamera:(id)camera;
- (void)setCamera:(struct shared_ptr<gdc::Camera> { struct Camera * x0; struct __shared_weak_count * x1; })camera;
- (void)updateWithTimestamp:(double)timestamp withContext:(void *)context;
@end

#endif /* VKScreenCameraController_h */

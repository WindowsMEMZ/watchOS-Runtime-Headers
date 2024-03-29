//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 266.1.0.0.0
//
#ifndef MDLInteractiveCameraController_h
#define MDLInteractiveCameraController_h
@import Foundation;

#include "MDLStereoscopicCamera.h"

@interface MDLInteractiveCameraController : NSObject {
  /* instance variables */
   _lookAt;
   _dragVector;
  float _pitch;
  float _yaw;
  float _targetElevation;
}

@property (copy, nonatomic) MDLStereoscopicCamera *camera;
@property (nonatomic)  clickPoint;
@property (nonatomic)  dragPoint;
@property (nonatomic)  trackVector;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) float tumbleSpeed;
@property (nonatomic) float zoomSpeed;
@property (nonatomic) float trackSpeed;
@property (nonatomic)  targetPosition;
@property (nonatomic) float targetDistance;
@property (nonatomic)  position;
@property (nonatomic) struct MDLAABB framingBounds;
@property (nonatomic)  viewSize;
@property (nonatomic) float zoom;

/* instance methods */
- (id)init;
- (void)frameBounds;
- (void)mouseMotionX:(float)x Y:(float)y;
- (void)frameObject;
- (void)update:(float)update;
@end

#endif /* MDLInteractiveCameraController_h */

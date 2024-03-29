//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKNavigationPuck_h
#define VKNavigationPuck_h
@import Foundation;

#include "VKAnnotation-Protocol.h"
#include "VKTimedAnimation.h"
#include "VKTrackableAnnotationPresentation-Protocol.h"

@class NSString;

@interface VKNavigationPuck : NSObject<VKTrackableAnnotationPresentation> {
  /* instance variables */
  VKTimedAnimation *_puckStyleAnimation;
  struct AnimationRunner { struct MapEngine * x0; } * _animationRunner;
  void * _navigationPuck;
}

@property (retain, nonatomic) NSObject<VKAnnotation> *annotation;
@property (nonatomic) struct { double x0; double x1; } presentationCoordinate;
@property (nonatomic) double presentationCourse;
@property (nonatomic) int mode;
@property (nonatomic) BOOL tracking;
@property (nonatomic) BOOL animatingToCoordinate;
@property (nonatomic) BOOL showCourse;
@property (nonatomic) BOOL stale;
@property (nonatomic) float scale;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL animatingAccuracy;
@property (nonatomic) double presentationAccuracy;
@property (readonly, nonatomic) double minimumAccuracy;
@property (readonly, nonatomic) struct VKEdgeInsets { float x0; float x1; float x2; float x3; } annotationTrackingEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAnimationRunner:(struct AnimationRunner { struct MapEngine * x0; } *)runner;
- (void)dealloc;
- (void)destroyAnimationRunner;
- (void)runAnimation:(id)animation;
- (void *)puck;
- (BOOL)isAnimatingAccuracy;
@end

#endif /* VKNavigationPuck_h */

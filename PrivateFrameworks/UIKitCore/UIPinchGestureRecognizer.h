//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIPinchGestureRecognizer_h
#define UIPinchGestureRecognizer_h
@import Foundation;

#include "UIGestureRecognizer.h"
#include "_UIGestureRecognizerTransformAnalyzer.h"

@interface UIPinchGestureRecognizer : UIGestureRecognizer {
  /* instance variables */
  double _initialTouchDistance;
  double _initialScale;
  double _lastEventTime;
  double _previousVelocity;
  double _lastNonZeroTimestampDelta;
  struct CGPoint { double x; double y; } _anchorSceneReferencePoint;
  UITouch * _touches[2];
  _UIGestureRecognizerTransformAnalyzer *_transformAnalyzer;
  unsigned int x :1 _loggedPinchStatistic;
  unsigned int x :1 _loggedZoomStatistic;
  unsigned int x :1 _endsOnSingleTouch;
}

@property (nonatomic) double scaleThreshold;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } anchorPoint;
@property (nonatomic) double hysteresis;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (nonatomic) BOOL _enableNestedHysteresis;
@property (nonatomic) double scale;
@property (readonly, nonatomic) double velocity;

/* class methods */
+ (BOOL)_shouldDefaultToTouches;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (BOOL)_endsOnSingleTouch;
- (void)_setEndsOnSingleTouch:(BOOL)touch;
- (id)initWithTarget:(id)target action:(SEL)action;
- (id)initWithCoder:(id)coder;
- (void)_resetGestureRecognizer;
- (double)_hysteresisForTouches:(id)touches;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)_applyScale:(double)scale atLocation:(struct CGPoint { double x0; double x1; })location touchDistance:(double)distance withEvent:(id)event;
- (void)_cancelOrFail;
- (void)_endOrFail;
- (void)_logStatisticsForScale:(double)scale;
- (double)_hysteresis;
- (void)_setHysteresis:(double)hysteresis;
@end

#endif /* UIPinchGestureRecognizer_h */

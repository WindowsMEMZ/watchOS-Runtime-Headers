//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITouchForceObservable_h
#define _UITouchForceObservable_h
@import Foundation;

#include "NSObservationSource.h"
#include "NSObserver-Protocol.h"
#include "UIView.h"
#include "_UITouchesObservingGestureRecognizer.h"

@class CADisplayLink, NSObservation, NSSet, NSString;

@interface _UITouchForceObservable : NSObservationSource<NSObserver> {
  /* instance variables */
  UIView *_view;
  long long _observerCount;
  _UITouchesObservingGestureRecognizer *_gestureRecognizer;
  NSObservation *_touchesObservation;
  CADisplayLink *_continuousEvaluationDisplayLink;
  NSSet *_currentTouches;
  double _lastObservationTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithView:(id)view;
- (void)dealloc;
- (void)receiveObservedValue:(id)value;
- (double)_unclampedTouchForceForTouches:(id)touches;
- (double)_timestampForTouches:(id)touches;
- (double)_maximumPossibleForceForTouches:(id)touches;
- (BOOL)_shouldFilterDueToSystemGesturesForTouches:(id)touches;
- (id)addObserver:(id)observer;
- (void)removeObservation:(id)observation;
- (void)_willBeginHavingAnyObservers;
- (void)_didEndHavingAnyObservers;
- (id)_touchForceMessageForTouches:(id)touches;
- (void)_updateForContinuousEvaluation:(id)evaluation;
- (void)_cancelContinuousEvaluation;
@end

#endif /* _UITouchForceObservable_h */

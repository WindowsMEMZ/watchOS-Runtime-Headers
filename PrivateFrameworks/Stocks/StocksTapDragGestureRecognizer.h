//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.0.0.0.0
//
#ifndef StocksTapDragGestureRecognizer_h
#define StocksTapDragGestureRecognizer_h
@import Foundation;

#include "UIGestureRecognizer.h"

@class NSMutableSet, NSSet, NSTimer;

@interface StocksTapDragGestureRecognizer : UIGestureRecognizer {
  /* instance variables */
  NSTimer *_touchDelayTimer;
  struct CGPoint { double x; double y; } _startingPosition;
}

@property (readonly, nonatomic) NSSet *touches;
@property (nonatomic) double requiredPressDelay;
@property (nonatomic) unsigned long long minimumNumberOfTouches;
@property (nonatomic) unsigned long long maximumNumberOfTouches;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } touchableBounds;

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchDelayTimerFired:(id)fired;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)reset;
@end

#endif /* StocksTapDragGestureRecognizer_h */

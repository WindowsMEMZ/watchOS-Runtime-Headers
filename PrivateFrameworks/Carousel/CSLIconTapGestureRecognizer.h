//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLIconTapGestureRecognizer_h
#define CSLIconTapGestureRecognizer_h
@import Foundation;

#include "UIGestureRecognizer.h"

@class NSTimer, UITouch;

@interface CSLIconTapGestureRecognizer : UIGestureRecognizer {
  /* instance variables */
  UITouch *_trackingTouch;
  struct CGPoint { double x; double y; } _startLocation;
  NSTimer *_longPressTimer;
}

@property (readonly, nonatomic) BOOL isLongPress;
@property (nonatomic) double longPressDuration;
@property (nonatomic) BOOL longPressEnabled;

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (struct CGPoint { double x0; double x1; })locationInView:(id)view;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)reset;
- (void)_longPressTimerFired:(id)fired;
@end

#endif /* CSLIconTapGestureRecognizer_h */

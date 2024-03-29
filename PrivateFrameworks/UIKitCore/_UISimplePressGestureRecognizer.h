//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UISimplePressGestureRecognizer_h
#define _UISimplePressGestureRecognizer_h
@import Foundation;

#include "UIGestureRecognizer.h"
#include "UIDelayedAction.h"

@class NSArray, NSValue;

@interface _UISimplePressGestureRecognizer : UIGestureRecognizer

@property (retain, nonatomic) UIDelayedAction *delayedAction;
@property (retain, nonatomic) NSArray *triggers;
@property (readonly, nonatomic) NSValue *activeTrigger;
@property (copy, nonatomic) NSArray *allowedTouchTypes;
@property (copy, nonatomic) NSArray *allowedPressTypes;

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action;
- (void)dealloc;
- (void)pressesBegan:(id)began withEvent:(id)event;
- (void)pressesEnded:(id)ended withEvent:(id)event;
- (void)pressesCancelled:(id)cancelled withEvent:(id)event;
- (void)reset;
- (void)_begin;
- (void)_endOrFail;
- (void)_cancelOrFail;
@end

#endif /* _UISimplePressGestureRecognizer_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITapTapHoldGestureRecognizer_h
#define _UITapTapHoldGestureRecognizer_h
@import Foundation;

#include "UITapGestureRecognizer.h"

@interface _UITapTapHoldGestureRecognizer : UITapGestureRecognizer

@property (nonatomic) int currentNumberOfPresses;
@property (nonatomic) double startTime;
@property (nonatomic) double pressEventBeginTimestamp;
@property (nonatomic) BOOL isWaitingForHoldToAction;
@property (nonatomic) BOOL isInHoldToAction;
@property (nonatomic) BOOL isWaitingForTooSlowForDoubleTap;
@property (nonatomic) long long gestureType;

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action;
- (void)reset;
- (void)pressesBegan:(id)began withEvent:(id)event;
- (void)pressesEnded:(id)ended withEvent:(id)event;
- (void)tooSlowForDoubleTap:(id)tap;
- (void)scheduleTooSlowForDoubleTap;
- (void)cancelPendingTooSlowForDoubleTap;
- (void)holdToAction:(id)action;
- (void)scheduleHoldToAction;
- (void)cancelPendingHoldToAction;
- (BOOL)_shouldFailInResponseToPresses:(id)presses withEvent:(id)event;
@end

#endif /* _UITapTapHoldGestureRecognizer_h */

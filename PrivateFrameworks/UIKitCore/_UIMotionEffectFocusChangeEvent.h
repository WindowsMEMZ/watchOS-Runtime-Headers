//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIMotionEffectFocusChangeEvent_h
#define _UIMotionEffectFocusChangeEvent_h
@import Foundation;

#include "_UIMotionEffectEvent.h"

@interface _UIMotionEffectFocusChangeEvent : _UIMotionEffectEvent

@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } focusPosition;

/* instance methods */
- (id)initWithTimestamp:(double)timestamp focusPosition:(struct CGPoint { double x0; double x1; })position;
- (id)copyWithTimestamp:(double)timestamp;
- (double)velocityRelativeToPreviousEvent:(id)event;
@end

#endif /* _UIMotionEffectFocusChangeEvent_h */

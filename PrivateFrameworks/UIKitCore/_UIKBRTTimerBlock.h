//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIKBRTTimerBlock_h
#define _UIKBRTTimerBlock_h
@import Foundation;

@class NSTimer;
@protocol OS_dispatch_queue;

@interface _UIKBRTTimerBlock : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *selfQueue;
@property (readonly, nonatomic) NSTimer *timer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) id /* block */ onTimer;
@property (readonly, nonatomic) id owner;

/* instance methods */
- (id)initWithTimeInterval:(double)interval onQueue:(id)queue do:(id /* block */)do owner:(id)owner;
- (void)dealloc;
- (void)fireNow;
- (void)invalidate;
- (void)timerFired:(id)fired;
@end

#endif /* _UIKBRTTimerBlock_h */

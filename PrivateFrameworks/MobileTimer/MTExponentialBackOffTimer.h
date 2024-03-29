//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTExponentialBackOffTimer_h
#define MTExponentialBackOffTimer_h
@import Foundation;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MTExponentialBackOffTimer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double initialTime;
@property (nonatomic) unsigned long long currentBackoff;
@property (nonatomic) unsigned long long backoffFactor;

/* class methods */
+ (id)timerWithInitialTime:(double)time fireBlock:(id /* block */)block;
+ (id)timerWithInitialTime:(double)time backoffFactor:(unsigned long long)factor fireBlock:(id /* block */)block;
+ (id)timerWithInitialTime:(double)time backoffFactor:(unsigned long long)factor fireBlock:(id /* block */)block queue:(id)queue;

/* instance methods */
- (id)initWithInitialTime:(double)time backoffFactor:(unsigned long long)factor fireBlock:(id /* block */)block queue:(id)queue;
- (void)start;
- (void)timerFinished;
- (void)stop;
- (void)reset;
- (void)_cancel;
- (id)description;
@end

#endif /* MTExponentialBackOffTimer_h */

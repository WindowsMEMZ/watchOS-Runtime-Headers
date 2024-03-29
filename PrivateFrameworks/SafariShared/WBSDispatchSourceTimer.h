//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSDispatchSourceTimer_h
#define WBSDispatchSourceTimer_h
@import Foundation;

@protocol OS_dispatch_source;

@interface WBSDispatchSourceTimer : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_source> *_timer;
}

@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) double startDelay;
@property (readonly, nonatomic) BOOL repeats;
@property (readonly, copy, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) BOOL valid;

/* class methods */
+ (id)scheduledTimerWithInterval:(double)interval repeats:(BOOL)repeats handler:(id /* block */)handler;
+ (id)scheduledRepeatingTimerWithStartDelay:(double)delay interval:(double)interval handler:(id /* block */)handler;

/* instance methods */
- (id)_initWithStartDelay:(double)delay interval:(double)interval repeats:(BOOL)repeats handler:(id /* block */)handler;
- (void)dealloc;
- (BOOL)isValid;
- (void)schedule;
- (void)resetFireDate;
- (void)invalidate;
- (void)_scheduleTimer;
@end

#endif /* WBSDispatchSourceTimer_h */

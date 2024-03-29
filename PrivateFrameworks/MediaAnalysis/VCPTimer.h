//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPTimer_h
#define VCPTimer_h
@import Foundation;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface VCPTimer : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_source> *_source;
  atomic BOOL _active;
  BOOL _isOneShot;
  id /* block */ _block;
}

/* class methods */
+ (id)timerWithInterval:(unsigned long long)interval unit:(unsigned long long)unit oneShot:(BOOL)shot andBlock:(id /* block */)block;
+ (id)timerWithIntervalSeconds:(unsigned long long)seconds isOneShot:(BOOL)shot andBlock:(id /* block */)block;

/* instance methods */
- (id)initWithIntervalNanoseconds:(unsigned long long)nanoseconds isOneShot:(BOOL)shot andBlock:(id /* block */)block;
- (void)dealloc;
- (void)handleTimerEvent;
- (void)destroy;
@end

#endif /* VCPTimer_h */

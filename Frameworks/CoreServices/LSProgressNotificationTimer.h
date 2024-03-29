//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1299.2.3.1.0
//
#ifndef LSProgressNotificationTimer_h
#define LSProgressNotificationTimer_h
@import Foundation;

@class NSDate, NSMutableSet, NSTimer;
@protocol OS_dispatch_queue;

@interface LSProgressNotificationTimer : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSDate *lastFiredDate;
@property (retain, nonatomic) NSMutableSet *applications;
@property (readonly, nonatomic) double minInterval;
@property (readonly, nonatomic) double latency;
@property SEL appObserverSelector;

/* instance methods */
- (id)initWithQueue:(id)queue;
- (void)dealloc;
- (void)stopTimer;
- (void)addApplication:(id)application;
- (void)removeApplication:(id)application;
- (void)clear;
- (void)notifyObservers:(id)observers withApplications:(id)applications;
- (void)sendMessage:(id)message;
- (id)description;
@end

#endif /* LSProgressNotificationTimer_h */

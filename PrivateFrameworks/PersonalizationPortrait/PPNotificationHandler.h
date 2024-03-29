//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPNotificationHandler_h
#define PPNotificationHandler_h
@import Foundation;

@class NSString, _PASLock;
@protocol OS_dispatch_queue;

@interface PPNotificationHandler : NSObject {
  /* instance variables */
  _PASLock *_lock;
  NSObject<OS_dispatch_queue> *_waiterQueue;
}

@property (nonatomic) double waitSeconds;
@property (retain, nonatomic) NSString *name;

/* instance methods */
- (void)waitOnQueueToDrain;
- (id)initWithName:(id)name waitSeconds:(double)seconds;
- (void)_executeBlocksWithGuardedData:(id)data;
- (void)_delayedExecutionAfterSeconds:(double)seconds;
- (void)fireWithObjects:(id)objects;
- (void)addObserverBlock:(id /* block */)block forLifetimeOfObject:(id)object;
- (id)description;
@end

#endif /* PPNotificationHandler_h */

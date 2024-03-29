//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDBackgroundTaskScheduler_h
#define HDBackgroundTaskScheduler_h
@import Foundation;

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface HDBackgroundTaskScheduler : NSObject {
  /* instance variables */
  NSMutableDictionary *_clients;
  NSMutableDictionary *_tasksQueuedForDelivery;
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_queue> *_clientQueue;
}

/* instance methods */
- (id)init;
- (void)registerClientWithName:(id)name taskHandler:(id /* block */)handler;
- (void)unregisterClientWithName:(id)name;
- (void)addTask:(id)task withName:(id)name forClientNamed:(id)named;
- (void)removeTaskWithName:(id)name forClientNamed:(id)named;
- (id)taskWithName:(id)name forClientNamed:(id)named;
@end

#endif /* HDBackgroundTaskScheduler_h */

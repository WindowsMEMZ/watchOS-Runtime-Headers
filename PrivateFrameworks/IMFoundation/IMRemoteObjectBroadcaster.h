//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1003.300.71.0.0
//
#ifndef IMRemoteObjectBroadcaster_h
#define IMRemoteObjectBroadcaster_h
@import Foundation;

@protocol OS_dispatch_queue;

@interface IMRemoteObjectBroadcaster : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
}

/* class methods */
+ (id)defaultBroadcaster;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)_queue;
- (id)broadcastProxyForTarget:(id)target messageContext:(id)context protocol:(id)protocol;
- (id)broadcastProxyForTarget:(id)target messageContext:(id)context protocol:(id)protocol priority:(int)priority;
- (id)broadcastProxyForTarget:(id)target messageContext:(id)context protocol:(id)protocol priority:(int)priority completion:(id /* block */)completion;
- (id)broadcastProxyForTargets:(id)targets messageContext:(id)context protocol:(id)protocol;
- (void)blockUntilSendQueueIsEmpty;
- (void)flushProxy:(id)proxy;
@end

#endif /* IMRemoteObjectBroadcaster_h */

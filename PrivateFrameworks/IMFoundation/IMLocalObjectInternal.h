//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1003.300.71.0.0
//
#ifndef IMLocalObjectInternal_h
#define IMLocalObjectInternal_h
@import Foundation;

#include "IMMessageContext.h"

@class NSArray, NSMutableArray, NSProtocolChecker, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface IMLocalObjectInternal : NSObject {
  /* instance variables */
  IMMessageContext *_currentMessageContext;
  struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
  id _target;
  NSObject<OS_xpc_object> *_connection;
  NSObject<OS_dispatch_queue> *_queue;
  NSString *_portName;
  NSString *_processName;
  NSProtocolChecker *_protocolChecker;
  NSArray *_allowlistedClasses;
  struct __CFRunLoopSource * _runloopSource;
  NSMutableArray *_componentQueue;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _componentQueueLock;
  BOOL _pendingComponentQueueProcessing;
  BOOL _busyForwarding;
  BOOL _offMainThread;
  BOOL _wasInterrupted;
}

/* instance methods */
- (void)dealloc;
@end

#endif /* IMLocalObjectInternal_h */

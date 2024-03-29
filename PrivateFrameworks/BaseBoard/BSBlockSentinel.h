//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef BSBlockSentinel_h
#define BSBlockSentinel_h
@import Foundation;

@class NSString;
@protocol OS_dispatch_queue;

@interface BSBlockSentinel : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  id /* block */ _lock_handler;
  unsigned long long _lock_signalCount;
  unsigned long long _lock_expectedSignals;
  NSString *_lock_identifier;
  NSObject<OS_dispatch_queue> *_explicitQueue;
}

/* class methods */
+ (id)sentinelWithQueue:(id)queue completion:(id /* block */)completion;
+ (id)sentinelWithQueue:(id)queue signalCount:(unsigned long long)count completion:(id /* block */)completion;
+ (id)sentinelWithQueue:(id)queue signalHandler:(id /* block */)handler;
+ (id)sentinelWithQueue:(id)queue signalCount:(unsigned long long)count signalHandler:(id /* block */)handler;
+ (id)sentinelWithExceptionReason:(id)reason;
+ (id)sentinelWithSignalCount:(unsigned long long)count exceptionReason:(id)reason;
+ (id)sentinelWithCompletion:(id /* block */)completion;
+ (id)sentinelWithSignalCount:(unsigned long long)count signalHandler:(id /* block */)handler;

/* instance methods */
- (void)dealloc;
- (void)setIdentifier:(id)identifier;
- (BOOL)signal;
- (BOOL)signalWithContext:(id)context;
@end

#endif /* BSBlockSentinel_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDDatabaseCoalescedWritePool_h
#define HDDatabaseCoalescedWritePool_h
@import Foundation;

#include "HDCoalescedTaskPoolQuota.h"
#include "HDProfile.h"

@class NSMutableArray, NSString, _HKDelayedOperation;
@protocol OS_dispatch_queue, OS_os_log;

@interface HDDatabaseCoalescedWritePool : NSObject {
  /* instance variables */
  NSString *_name;
  NSObject<OS_os_log> *_loggingCategory;
  NSObject<OS_dispatch_queue> *_writeQueue;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  _HKDelayedOperation *_pendingWriteOperation;
  NSMutableArray *_pendingWriteQueue;
}

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (copy, nonatomic) HDCoalescedTaskPoolQuota *quota;

/* instance methods */
- (id)init;
- (id)initWithProfile:(id)profile name:(id)name loggingCategory:(id)category;
- (void)performWriteWithMaximumLatency:(double)latency block:(id /* block */)block completion:(id /* block */)completion;
- (void)flushPendingWriteQueueWithCompletion:(id /* block */)completion;
@end

#endif /* HDDatabaseCoalescedWritePool_h */

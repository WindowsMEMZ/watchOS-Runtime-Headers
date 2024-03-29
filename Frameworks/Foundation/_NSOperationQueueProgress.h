//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef _NSOperationQueueProgress_h
#define _NSOperationQueueProgress_h
@import Foundation;

#include ".h"
#include "NSOperationQueue.h"

@interface _NSOperationQueueProgress :  {
  /* instance variables */
  NSOperationQueue *_queue;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _queueLock;
}

/* instance methods */
- (void)setTotalUnitCount:(long long)count;
@end

#endif /* _NSOperationQueueProgress_h */

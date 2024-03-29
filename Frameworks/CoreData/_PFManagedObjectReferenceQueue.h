//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef _PFManagedObjectReferenceQueue_h
#define _PFManagedObjectReferenceQueue_h
@import Foundation;

#include "NSManagedObjectContext.h"

@interface _PFManagedObjectReferenceQueue : NSObject {
  /* instance variables */
  int _cd_rc;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _spinLock;
  int _flags;
  int _signalRunloop;
  NSManagedObjectContext *_context;
  struct __CFArray * _queue;
  struct __CFRunLoopObserver * _rlObserver;
  int _processing;
}

/* instance methods */
- (id)retain;
- (void)release;
- (unsigned long long)retainCount;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (void)dealloc;
@end

#endif /* _PFManagedObjectReferenceQueue_h */

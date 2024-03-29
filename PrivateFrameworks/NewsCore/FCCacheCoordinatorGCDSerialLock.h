//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCCacheCoordinatorGCDSerialLock_h
#define FCCacheCoordinatorGCDSerialLock_h
@import Foundation;

#include "FCCacheCoordinatorLocking-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface FCCacheCoordinatorGCDSerialLock : NSObject<FCCacheCoordinatorLocking> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)performReadSync:(id /* block */)sync;
- (void)performWriteSync:(id /* block */)sync;
@end

#endif /* FCCacheCoordinatorGCDSerialLock_h */

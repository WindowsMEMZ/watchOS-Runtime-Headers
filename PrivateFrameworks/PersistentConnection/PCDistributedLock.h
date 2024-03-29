//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 543.100.1.0.0
//
#ifndef PCDistributedLock_h
#define PCDistributedLock_h
@import Foundation;

#include "NSLocking-Protocol.h"

@class NSString;

@interface PCDistributedLock : NSObject<NSLocking> {
  /* instance variables */
  NSString *_path;
  int _fd;
}

/* instance methods */
- (id)initWithPath:(id)path;
- (id)initWithName:(id)name;
- (void)dealloc;
- (BOOL)_lockBlocking:(BOOL)blocking;
- (BOOL)tryLock;
- (void)lock;
- (void)unlock;
@end

#endif /* PCDistributedLock_h */

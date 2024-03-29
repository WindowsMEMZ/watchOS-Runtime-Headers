//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFLock_h
#define MFLock_h
@import Foundation;

#include "NSLock.h"
#include "MFLockObject-Protocol.h"

@class NSString;

@interface MFLock : NSLock<MFLockObject> {
  /* instance variables */
  NSString *_name;
  id _delegate;
}

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)init;
- (id)initWithName:(id)name andDelegate:(id)delegate;
- (BOOL)isLockedByMe;
- (void)lock;
- (BOOL)tryLock;
- (BOOL)lockBeforeDate:(id)date;
- (void)unlock;
- (id)description;
- (void)dealloc;
@end

#endif /* MFLock_h */

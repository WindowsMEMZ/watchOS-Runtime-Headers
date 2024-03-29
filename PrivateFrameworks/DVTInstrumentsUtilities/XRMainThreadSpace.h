//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef XRMainThreadSpace_h
#define XRMainThreadSpace_h
@import Foundation;

#include "XRSpace.h"

@class NSMutableSet;

@interface XRMainThreadSpace : XRSpace {
  /* instance variables */
  NSMutableSet *_mainThreadOps;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)initWithQueue:(id)queue;
- (id)spaceName;
- (BOOL)isSerial;
- (void)_executeOp:(id)op;
- (id)_activeRunLoopModes;
- (void)_queueOperationToRunOnMainThread:(id)thread;
- (id)_scheduleOperationFromCurrentQueue:(id)queue;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
@end

#endif /* XRMainThreadSpace_h */

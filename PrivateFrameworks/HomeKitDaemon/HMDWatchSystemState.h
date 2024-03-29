//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDWatchSystemState_h
#define HMDWatchSystemState_h
@import Foundation;

#include "HMFObject.h"

@class NSHashTable;

@interface HMDWatchSystemState : HMFObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSHashTable *watchSystemStateDelegates;
@property (nonatomic) BOOL companionReachable;

/* class methods */
+ (id)sharedState;

/* instance methods */
- (id)init;
- (BOOL)isCompanionReachable;
- (void)registerDelegate:(id)delegate;
- (void)_callDidUpdateReachabilityChangeForCompanion:(BOOL)companion forDelegate:(id)delegate;
@end

#endif /* HMDWatchSystemState_h */

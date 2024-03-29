//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKSPImmediateScheduler_h
#define _HKSPImmediateScheduler_h
@import Foundation;

#include "HKSPScheduler-Protocol.h"
#include "_HKSPOrderPreservingScheduler.h"

@class NSString;

@interface _HKSPImmediateScheduler : NSObject<HKSPScheduler>

@property (readonly, nonatomic) _HKSPOrderPreservingScheduler *backingScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)afterDelay:(double)delay performBlock:(id /* block */)block;
- (void)performBlock:(id /* block */)block;
- (id)performCancelableBlock:(id /* block */)block;
- (void)resume;
- (void)suspend;
@end

#endif /* _HKSPImmediateScheduler_h */

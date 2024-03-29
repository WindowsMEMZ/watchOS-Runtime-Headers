//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPXPCActivityScheduler_h
#define HDSPXPCActivityScheduler_h
@import Foundation;

#include "HDSPActivityScheduler-Protocol.h"

@class NSMutableSet, NSString;
@protocol NAScheduler;

@interface HDSPXPCActivityScheduler : NSObject<HDSPActivityScheduler>

@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly, nonatomic) NSMutableSet *eventNames;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int x0; } eventNamesLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCallbackScheduler:(id)scheduler;
- (void)_withLock:(id /* block */)lock;
- (void)scheduleActivity:(id)activity activityHandler:(id /* block */)handler;
- (void)unscheduleActivities;
@end

#endif /* HDSPXPCActivityScheduler_h */

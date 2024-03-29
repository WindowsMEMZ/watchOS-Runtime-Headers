//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDProcessMonitor_h
#define HMDProcessMonitor_h
@import Foundation;

#include "HMFObject.h"
#include "HMFLogging-Protocol.h"
#include "HMFTimerDelegate-Protocol.h"

@class HMFTimer, NSArray, NSMutableSet, NSString, RBSProcessMonitor;
@protocol OS_dispatch_queue;

@interface HMDProcessMonitor : HMFObject<HMFLogging, HMFTimerDelegate> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  RBSProcessMonitor *_internal;
  BOOL _activeHomeKitApps;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *xpcListenerQueue;
@property (retain, nonatomic) HMFTimer *spiClientTerminationDelayTimer;
@property (readonly, nonatomic) NSMutableSet *pendingTerminatedApplications;
@property (readonly, copy) NSArray *processes;
@property (readonly, copy) NSArray *foregroundProcesses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)init;
- (id)initWithXpcListenerQueue:(id)queue;
- (void)dealloc;
- (void)updateApplicationMonitor;
- (id)processInfoForPID:(int)pid;
- (id)processInfoForConnection:(id)connection;
- (void)addProcess:(id)process;
- (void)removeProcess:(id)process;
- (void)_removeProcess:(id)process;
- (void)removeFromPendingTerminated:(id)terminated;
- (void)_processAppStateChange:(id)change;
- (void)timerDidFire:(id)fire;
@end

#endif /* HMDProcessMonitor_h */

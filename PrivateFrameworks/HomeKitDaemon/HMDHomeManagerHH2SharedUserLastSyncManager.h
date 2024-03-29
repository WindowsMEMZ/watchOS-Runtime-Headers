//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHomeManagerHH2SharedUserLastSyncManager_h
#define HMDHomeManagerHH2SharedUserLastSyncManager_h
@import Foundation;

#include "HMFObject.h"
#include "HMDHomeManager.h"
#include "HMFTimerDelegate-Protocol.h"

@class HMFTimer, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface HMDHomeManagerHH2SharedUserLastSyncManager : HMFObject<HMFTimerDelegate> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSObject<OS_dispatch_queue> *_workQueue;
  HMDHomeManager *_homeManager;
  NSMutableArray *_userLastSyncs;
  NSMutableDictionary *_homeToUserMap;
  NSMutableSet *_managedMergeIDs;
  NSDate *_creationDate;
  HMFTimer *_delayTimer;
}

@property (readonly) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)shortDescription;

/* instance methods */
- (id)initWithHomeManager:(id)manager archivePaths:(id)paths;
- (void)configure;
- (BOOL)isManagingUserWithMergeID:(id)id;
- (double)_interval;
- (double)_expireInterval;
- (double)_pushInterval;
- (BOOL)_shouldPushNow;
- (BOOL)_shouldExpire;
- (double)_nextInterval;
- (void)scheduleNextPush;
- (void)_scheduleNextPush;
- (void)_removeAllUserLastSyncData;
- (void)removeUserLastSyncData:(id)data;
- (void)_pushAllUserSyncData;
- (void)timerDidFire:(id)fire;
- (id)shortDescription;
- (id)privateDescription;
- (BOOL)isValid;
@end

#endif /* HMDHomeManagerHH2SharedUserLastSyncManager_h */

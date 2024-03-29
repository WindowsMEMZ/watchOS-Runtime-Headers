//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLPrelaunchActivityManager_h
#define CSLPrelaunchActivityManager_h
@import Foundation;

#include "CSLJetsamBandManager.h"
#include "CSLPrelaunchActivityStateMachine.h"
#include "CSLPrelaunchAllowList.h"
#include "CSLPrelaunchDataSource.h"
#include "CSLPrelaunchDenylist.h"
#include "CSLPrelaunchDuetController.h"
#include "CSLPrelaunchMetricCollector.h"
#include "CSLPrelaunchSyncCoordinator.h"

@class NSOrderedSet;

@interface CSLPrelaunchActivityManager : NSObject {
  /* instance variables */
  NSOrderedSet *_appsToPrelaunch;
  long long _lastPriority;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  CSLPrelaunchActivityStateMachine *_stateMachine;
  CSLPrelaunchDuetController *_duetController;
  CSLPrelaunchDenylist *_denylist;
  CSLPrelaunchAllowList *_allowList;
  CSLPrelaunchDataSource *_prelaunchDataSource;
  CSLPrelaunchSyncCoordinator *_prelaunchSyncCoordinator;
  CSLJetsamBandManager *_jetsamBandManager;
  BOOL _test;
  CSLPrelaunchMetricCollector *_metricCollector;
}

@property (readonly, nonatomic) long long state;

/* instance methods */
- (id)init;
- (id)initWithDataSource:(id)source denylist:(id)denylist allowList:(id)list jetsamBandManager:(id)manager duetController:(id)controller test:(BOOL)test;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)_withLock:(id /* block */)lock;
- (void)_withLockIfNecessary:(id /* block */)necessary;
- (void)_whileLocked:(id /* block */)locked;
- (void)dealloc;
- (void)setTest:(BOOL)test;
- (BOOL)isTest;
- (id)_removeAlreadyAttemptedApps:(id)apps;
- (void)_lock_processAppsToPrelaunch:(id)prelaunch;
- (BOOL)willPerformInitialPrelaunch;
- (void)_lock_transitionToStateIfNecessary:(long long)necessary;
- (id)description;
- (void)transitionToState:(long long)state;
- (void)prelaunchDataSource:(id)source prelaunchableAppsChanged:(id)changed;
@end

#endif /* CSLPrelaunchActivityManager_h */

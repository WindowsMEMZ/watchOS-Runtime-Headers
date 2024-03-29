//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSAppFocusConfigurationCoordinator_h
#define DNDSAppFocusConfigurationCoordinator_h
@import Foundation;

#include "DNDSAppConfigurationManager.h"
#include "DNDSAppConfigurationManagerDelegate-Protocol.h"
#include "DNDSAppFocusConfigurationCoordinatorDelegate-Protocol.h"
#include "DNDSKeybagStateProviding-Protocol.h"
#include "DNDSXPCEventPublisher.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface DNDSAppFocusConfigurationCoordinator : NSObject<DNDSAppConfigurationManagerDelegate> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_workQueue;
  NSMutableDictionary *_queuedTasksByBundleIdentifier;
  NSMutableDictionary *_taskGroups;
  NSMutableDictionary *_groupDetails;
  DNDSAppConfigurationManager *_appConfigurationManager;
  DNDSXPCEventPublisher *_xpcEventPublisher;
  NSObject<DNDSKeybagStateProviding> *_keybag;
}

@property (weak, nonatomic) NSObject<DNDSAppFocusConfigurationCoordinatorDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAppConfigurationManager:(id)manager keybagProviding:(id)providing xpcEventPublisher:(id)publisher;
- (void)handleStateUpdate:(id)update;
- (void)appConfigurationManager:(id)manager didClearActionWithIdentifier:(id)identifier forApplicationIdentifier:(id)identifier modeIdentifier:(id)identifier;
- (void)appConfigurationManager:(id)manager didSetAction:(id)action forApplicationIdentifier:(id)identifier modeIdentifier:(id)identifier;
- (void)appConfigurationManager:(id)manager didClearActionsForAppsInModeIdentifiers:(id)identifiers;
- (void)keybagDidUnlockForTheFirstTime:(id)time;
- (id)_currentModeIdentifier;
- (void)_executeAction:(id)action orActionIdentifier:(id)identifier withBundleIdentifier:(id)identifier modeIdentifier:(id)identifier groupIdentifier:(id)identifier exiting:(BOOL)exiting metadataProvider:(id)provider;
- (void)_executeAction:(id)action withBundleIdentifier:(id)identifier modeIdentifier:(id)identifier groupIdentifier:(id)identifier;
- (void)_executeOrQueueTask:(id)task completion:(id /* block */)completion;
- (void)_executeQueuedTaskFollowingTask:(id)task;
- (id)_groupIdentifierForStateUpdate:(id)update;
- (void)_incrementTasksExecutedForGroupWithIdentifier:(id)identifier;
- (void)_groupWithIdentifierCompleted:(id)completed;
- (void)_addTask:(id)task toGroupWithIdentifier:(id)identifier;
- (BOOL)_removeTask:(id)task fromGroupWithIdentifier:(id)identifier;
- (BOOL)_shouldExecuteActionOnApplicationWithBundleIdentifier:(id)identifier;
- (void)_workQueue_handleFirstLaunch;
- (void)_xpcCheckIn;
@end

#endif /* DNDSAppFocusConfigurationCoordinator_h */

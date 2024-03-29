//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDUserManagementOperationManager_h
#define HMDUserManagementOperationManager_h
@import Foundation;

#include "HMFObject.h"
#include "HMDHomeManager.h"
#include "HMFTimerDelegate-Protocol.h"

@class HMFTimer, NSArray, NSHashTable, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface HMDUserManagementOperationManager : HMFObject<HMFTimerDelegate> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) HMFTimer *saveTimer;
@property (readonly, nonatomic) NSHashTable *observedAccessories;
@property (readonly, nonatomic) NSArray *operations;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;
+ (id)sharedManager;
+ (void)setSharedManager:(id)manager;

/* instance methods */
- (id)init;
- (id)initWithOperations:(id)operations;
- (void)dealloc;
- (id)shortDescription;
- (id)_filteredOperationsForAccessory:(id)accessory;
- (id)_filteredOperationsWithDependency:(id)dependency;
- (void)_cleanPriorOperations:(id)operations;
- (void)addOperation:(id)operation;
- (void)_handleAddedOperation:(id)operation;
- (void)removeOperationWithIdentifier:(id)identifier;
- (void)removeOperation:(id)operation;
- (void)_handleRemovedOperation:(id)operation;
- (void)cancelAllOperations;
- (void)operationCancelled:(id)cancelled;
- (void)operationStoppedBackingOff:(id)off;
- (void)__executeOperation:(id)operation;
- (void)__removeOperationAndProcessDependantOperations:(id)operations;
- (void)_handleAccessoryIsReachable:(id)reachable;
- (void)__registerIfNeededForReachablityChangeNotifications;
- (void)__registerIfNeededForReachablityChangeNotificationsForAccessory:(id)accessory;
- (void)__deregisterIfNeededForReachablityChangeNotificationsForAccessory:(id)accessory;
- (void)__save;
- (void)_reallySave;
- (void)timerDidFire:(id)fire;
@end

#endif /* HMDUserManagementOperationManager_h */

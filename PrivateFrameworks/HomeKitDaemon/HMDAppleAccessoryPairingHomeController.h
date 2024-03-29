//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAppleAccessoryPairingHomeController_h
#define HMDAppleAccessoryPairingHomeController_h
@import Foundation;

#include "HMFObject.h"
#include "HMBLocalZoneModelObserver-Protocol.h"
#include "HMDAppleAccessoryPairingControllerDataSource-Protocol.h"
#include "HMDAppleAccessoryPairingHomeState.h"
#include "HMDHomeManager.h"
#include "HMFTimerDelegate-Protocol.h"

@class HMBLocalZone, HMFFuture, HMFTimer, NSString;

@interface HMDAppleAccessoryPairingHomeController : HMFObject<HMBLocalZoneModelObserver, HMFTimerDelegate>

@property (readonly) HMBLocalZone *localZone;
@property (readonly) HMDHomeManager *homeManager;
@property (readonly) HMFTimer *upgradeCheckTimer;
@property (readonly, nonatomic) HMDAppleAccessoryPairingHomeState *state;
@property (readonly, nonatomic) NSObject<HMDAppleAccessoryPairingControllerDataSource> *dataSource;
@property (retain, nonatomic) HMFFuture *queryFuture;
@property (nonatomic) unsigned long long suppressedQueries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithState:(id)state homeManager:(id)manager dataSource:(id)source;
- (void)timerDidFire:(id)fire;
- (BOOL)handleMessage:(id)message from:(id)from;
- (void)startWithLocalZone:(id)zone;
- (id)workContext;
- (void)cleanupLegacyZone;
- (void)postNotificationOfDeviceUpdated;
- (void)checkDeviceVersionAndSendUpgrade;
- (void)postSoftwareUpdateEventForSoftwareUpdate:(id)update;
- (void)postSoftwareUpdateEventForDescriptor:(id)descriptor;
- (void)_handleDeviceNotification:(id)notification;
- (id)localZone:(id)zone didProcessModelCreation:(id)creation;
- (id)localZone:(id)zone didProcessModelDeletion:(id)deletion;
- (id)localZone:(id)zone didProcessModelUpdate:(id)update;
- (void)processHMDResidentDeviceModel:(id)model;
- (void)processHMDAppleMediaAccessoryModel:(id)model;
- (id)logIdentifier;
@end

#endif /* HMDAppleAccessoryPairingHomeController_h */

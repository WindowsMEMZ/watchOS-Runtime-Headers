//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDPhotosPersonManager_h
#define HMDPhotosPersonManager_h
@import Foundation;

#include "HMDPersonManager.h"
#include "HMDDatabaseZoneManagerDataSource-Protocol.h"
#include "HMDUser.h"
#include "HMFLogging-Protocol.h"

@class HMPhotosPersonManagerSettings, NSString;

@interface HMDPhotosPersonManager : HMDPersonManager<HMFLogging, HMDDatabaseZoneManagerDataSource>

@property (readonly, copy) HMPhotosPersonManagerSettings *dataUnavailableExternalSettings;
@property (weak) HMDUser *user;
@property (readonly, copy) HMPhotosPersonManagerSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)zoneNameForZoneUUID:(id)uuid;
+ (id)logCategory;

/* instance methods */
- (id)initWithUser:(id)user zoneUUID:(id)uuid workQueue:(id)queue;
- (id)initWithUUID:(id)uuid zoneManager:(id)manager dataInterfaces:(id)interfaces workQueue:(id)queue user:(id)user;
- (BOOL)sharesFaceClassifications;
- (void)handleUpdatedSettings:(id)settings;
- (BOOL)manager:(id)manager shouldShareWithUser:(id)user;
- (BOOL)zoneManager:(id)manager shouldRequestShareInvitationFromUser:(id)user;
@end

#endif /* HMDPhotosPersonManager_h */

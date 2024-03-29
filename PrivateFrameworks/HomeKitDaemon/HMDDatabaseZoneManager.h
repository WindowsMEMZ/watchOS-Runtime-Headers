//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDDatabaseZoneManager_h
#define HMDDatabaseZoneManager_h
@import Foundation;

#include "HMFObject.h"
#include "HMDCloudShareMessenger.h"
#include "HMDCloudShareMessengerDelegate-Protocol.h"
#include "HMDCloudShareParticipantsManager.h"
#include "HMDCloudShareParticipantsManagerDelegate-Protocol.h"
#include "HMDDatabase-Protocol.h"
#include "HMDDatabaseDelegate-Protocol.h"
#include "HMDDatabaseZoneManagerConfiguration.h"
#include "HMDDatabaseZoneManagerDataSource-Protocol.h"
#include "HMDDatabaseZoneManagerDelegate-Protocol.h"
#include "HMDHome.h"
#include "HMFLogging-Protocol.h"

@class HMBCloudZone, HMBLocalZone, NSString, NSUUID;
@protocol HMBLocalZoneDelegate><HMBCloudZoneDelegate, OS_dispatch_queue;

@interface HMDDatabaseZoneManager : HMFObject<HMFLogging, HMDDatabaseDelegate, HMDCloudShareMessengerDelegate, HMDCloudShareParticipantsManagerDelegate>

@property long long state;
@property (readonly) NSObject<HMDDatabase> *database;
@property (readonly) HMDCloudShareMessenger *shareMessenger;
@property (weak) NSObject<HMBLocalZoneDelegate><HMBCloudZoneDelegate> *zoneDelegate;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) HMDCloudShareParticipantsManager *participantsManager;
@property (retain) HMBLocalZone *localZone;
@property (retain) HMBCloudZone *cloudZone;
@property (copy) id /* block */ participantsManagerFactory;
@property (weak) NSObject<HMDDatabaseZoneManagerDataSource> *dataSource;
@property (weak) NSObject<HMDDatabaseZoneManagerDelegate> *delegate;
@property (readonly, copy) NSString *containerIdentifier;
@property (readonly, copy) NSString *zoneName;
@property (readonly, weak) HMDHome *home;
@property (readonly, copy) NSUUID *messageTargetUUID;
@property (copy) HMDDatabaseZoneManagerConfiguration *defaultConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithDatabase:(id)database zoneName:(id)name home:(id)home messageTargetUUID:(id)uuid zoneDelegate:(id)delegate workQueue:(id)queue;
- (id)initWithDatabase:(id)database zoneName:(id)name home:(id)home shareMessenger:(id)messenger zoneDelegate:(id)delegate workQueue:(id)queue;
- (void)configure;
- (BOOL)start;
- (BOOL)startWithConfiguration:(id)configuration;
- (id)remove;
- (void)updateShareParticipants;
- (BOOL)_fetchPrivateZonesWithConfiguration:(id)configuration;
- (BOOL)_fetchExistingPrivateZonesWithConfiguration:(id)configuration;
- (BOOL)_fetchSharedZonesWithConfiguration:(id)configuration;
- (BOOL)_handleFetchZonesResult:(id)result configuration:(id)configuration;
- (void)_sendShareInvitation:(id)invitation toUser:(id)user device:(id)device;
- (void)_requestShareInvitationWithConfiguration:(id)configuration;
- (void)_tearDownState;
- (void)messenger:(id)messenger didReceiveInvitationData:(id)data completion:(id /* block */)completion;
- (void)messenger:(id)messenger didReceiveInvitationRequestFromUser:(id)user device:(id)device;
- (void)messengerDidReceiveShareAccessRevocation:(id)revocation;
- (void)manager:(id)manager didRequestSendForInvitation:(id)invitation toUser:(id)user;
- (void)manager:(id)manager didRequestSendForInvitation:(id)invitation toDevice:(id)device;
- (void)manager:(id)manager didRevokeShareAccessForUser:(id)user;
- (void)database:(id)database didCreateZoneWithName:(id)name isPrivate:(BOOL)private;
- (void)database:(id)database didRemoveZoneWithName:(id)name isPrivate:(BOOL)private;
- (void)database:(id)database didReceiveMessageWithUserInfo:(id)info;
- (id)logIdentifier;
@end

#endif /* HMDDatabaseZoneManager_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDBulletinBoardNotificationServiceGroup_h
#define HMDBulletinBoardNotificationServiceGroup_h
@import Foundation;

#include "HMFObject.h"
#include "HMDBulletinBoardNotification.h"
#include "HMFDumpState-Protocol.h"
#include "HMFLogging-Protocol.h"
#include "HMFMessageReceiver-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class HMFMessageDispatcher, NSArray, NSHashTable, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDBulletinBoardNotificationServiceGroup : HMFObject<NSSecureCoding, HMFMessageReceiver, HMFLogging, HMFDumpState> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) HMFMessageDispatcher *msgDispatcher;
@property (readonly, copy, nonatomic) NSHashTable *cameraProfilesTable;
@property (readonly, copy, nonatomic) NSHashTable *associatedServicesTable;
@property (retain, nonatomic) NSSet *cameraProfileUUIDs;
@property (retain, nonatomic) NSSet *associatedServiceUUIDs;
@property (weak) HMDBulletinBoardNotification *bulletinBoardNotification;
@property (retain, nonatomic) NSArray *associatedServices;
@property (retain, nonatomic) NSArray *cameraProfiles;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithBulletinBoardNotification:(id)notification;
- (void)dealloc;
- (void)configureWithWorkQueue:(id)queue messageDispatcher:(id)dispatcher;
- (void)_registerNotificationHandlers;
- (void)_handleBulletinBoardNotificationServiceGroupRequest:(id)request;
- (BOOL)_isSupportedAssociationService:(id)service;
- (BOOL)_isAlarmService:(id)service;
- (BOOL)_isNotificationGeneratingService:(id)service;
- (void)configureBulletinNotification;
- (BOOL)_isDefaultRoom:(id)room ofHome:(id)home;
- (id)_accessoriesInRoom:(id)room ofHome:(id)home;
- (id)_cameraNotificationGeneratingServicesForAccessory:(id)accessory;
- (void)_configureServices;
- (void)_updateAssociatedServices:(id)services associatedCameras:(id)cameras;
- (void)_updateAssociatedServicesTable:(id)table;
- (id)_prepareServiceGroupPayload;
- (void)_sendNotification:(id)notification;
- (id)dumpState;
- (id)_cameraProfileWithID:(id)id;
- (id)actionContextForCameraProfileID:(id)id;
- (id)logIdentifier;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HMDBulletinBoardNotificationServiceGroup_h */

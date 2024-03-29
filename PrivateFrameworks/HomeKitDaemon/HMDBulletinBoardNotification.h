//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDBulletinBoardNotification_h
#define HMDBulletinBoardNotification_h
@import Foundation;

#include "HMFObject.h"
#include "HMDBulletinBoardNotificationServiceGroup.h"
#include "HMDHome.h"
#include "HMDService.h"
#include "HMFDumpState-Protocol.h"
#include "HMFLogging-Protocol.h"
#include "HMFMessageReceiver-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class HMFMessageDispatcher, NSPredicate, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDBulletinBoardNotification : HMFObject<NSSecureCoding, HMFMessageReceiver, HMFLogging, HMFDumpState> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) HMFMessageDispatcher *msgDispatcher;
@property (readonly) HMDHome *home;
@property (weak, nonatomic) HMDService *service;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSPredicate *condition;
@property (retain, nonatomic) HMDBulletinBoardNotificationServiceGroup *notificationServiceGroup;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsBulletinNotificationGroup:(id)group;
+ (id)logCategory;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithService:(id)service;
- (id)initWithService:(id)service enabled:(BOOL)enabled condition:(id)condition;
- (void)dealloc;
- (void)configureWithWorkQueue:(id)queue messageDispatcher:(id)dispatcher;
- (void)registerNotificationHandlers;
- (BOOL)isEnabled;
- (void)configureBulletinNotification;
- (void)_handleBulletinBoardNotificationCommitRequest:(id)request;
- (void)_updateLocalSettingsWithEnabled:(BOOL)enabled condition:(id)condition forMessage:(id)message;
- (id)dumpState;
- (void)updateRegistrations;
- (void)_updateAccessoryBulletinNotificationManagerWithEnabled:(BOOL)enabled condition:(id)condition completion:(id /* block */)completion;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HMDBulletinBoardNotification_h */

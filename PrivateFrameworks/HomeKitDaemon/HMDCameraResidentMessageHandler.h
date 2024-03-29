//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCameraResidentMessageHandler_h
#define HMDCameraResidentMessageHandler_h
@import Foundation;

#include "HMFObject.h"
#include "HMDAccessory.h"
#include "HMDDevice.h"
#include "HMDMessageDispatcher.h"
#include "HMFLogging-Protocol.h"

@class NSMutableDictionary, NSString;

@interface HMDCameraResidentMessageHandler : HMFObject<HMFLogging> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) HMDMessageDispatcher *messageDispatcher;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) NSMutableDictionary *queuedMessagesByDeviceIdentifier;
@property (readonly, weak) HMDAccessory *accessory;
@property (readonly) HMDDevice *remoteAccessDevice;
@property (readonly) BOOL usingCompanionForRemoteAccessDevice;
@property (readonly) BOOL remoteAccessDeviceReachable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithAccessory:(id)accessory logIdentifier:(id)identifier;
- (id)initWithAccessory:(id)accessory logIdentifier:(id)identifier messageDispatcher:(id)dispatcher;
- (void)sendMessageWithName:(id)name cameraSessionID:(id)id payload:(id)payload target:(id)target device:(id)device responseQueue:(id)queue responseHandler:(id /* block */)handler;
- (void)sendMessageWithName:(id)name cameraSessionID:(id)id payload:(id)payload target:(id)target responseQueue:(id)queue responseHandler:(id /* block */)handler;
- (BOOL)isUsingCompanionForRemoteAccessDevice;
- (BOOL)isRemoteAccessDeviceReachable;
- (void)enqueueMessage:(id)message forDeviceIdentifier:(id)identifier;
- (void)dequeueRespondedMessageForDeviceIdentifier:(id)identifier;
- (id)nextMessageForDeviceIdentifier:(id)identifier;
- (void)sendNextMessageForDeviceIdentifier:(id)identifier;
@end

#endif /* HMDCameraResidentMessageHandler_h */

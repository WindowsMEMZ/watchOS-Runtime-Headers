//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDMessageHandler_h
#define HMDMessageHandler_h
@import Foundation;

#include "HMFObject.h"
#include "HMDAppleAccountManager.h"
#include "HMDMessageHandlerDataSource-Protocol.h"
#include "HMDMessageHandlerMetricsDispatcher.h"
#include "HMDMessageHandlerQueuedMessageDelegate-Protocol.h"
#include "HMFLogging-Protocol.h"
#include "HMFMessageReceiver-Protocol.h"

@class HMFMessageDispatcher, NSArray, NSDictionary, NSMutableDictionary, NSNotificationCenter, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDMessageHandler : HMFObject<HMDMessageHandlerQueuedMessageDelegate, HMFLogging, HMFMessageReceiver> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSMutableDictionary *_messageNameToQueuedIncomingMessages;
  NSMutableDictionary *_messageNameToQueuedOutgoingMessage;
  NSMutableDictionary *_deviceIdentifierToQueuedOutgoingMessageNames;
}

@property (readonly) HMDMessageHandlerMetricsDispatcher *metricsDispatcher;
@property (readonly) HMDAppleAccountManager *appleAccountManager;
@property (weak) NSObject<HMDMessageHandlerDataSource> *dataSource;
@property (readonly, copy) NSArray *ownerPrivateRemoteMessages;
@property (readonly, copy) NSArray *adminPrivateRemoteMessages;
@property (readonly, copy) NSArray *internalMessages;
@property (readonly, copy) NSArray *notifications;
@property (readonly, copy) NSDictionary *notificationsToObject;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) BOOL hasQueuedIncomingMessages;
@property (readonly) BOOL hasQueuedOutgoingMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithMessageTargetUUID:(id)uuid messageDispatcher:(id)dispatcher notificationCenter:(id)center ownerPrivateRemoteMessages:(id)messages adminPrivateRemoteMessages:(id)messages internalMessages:(id)messages notifications:(id)notifications notificationsToObject:(id)object;
- (id)initWithMessageTargetUUID:(id)uuid messageDispatcher:(id)dispatcher notificationCenter:(id)center ownerPrivateRemoteMessages:(id)messages adminPrivateRemoteMessages:(id)messages internalMessages:(id)messages notifications:(id)notifications notificationsToObject:(id)object appleAccountManager:(id)manager metricsDispatcher:(id)dispatcher;
- (void)configureWithHome:(id)home;
- (void)registerForMessagesWithHome:(id)home;
- (void)registerForSPIRemoteMessages:(id)messages home:(id)home userPrivilege:(unsigned long long)privilege internalBuildOnly:(BOOL)only;
- (void)registerForNotifications;
- (id)queuedIncomingMessages;
- (void)queueIncomingMessage:(id)message;
- (id)dequeueIncomingMessage:(id)message;
- (id)dequeueQueuedIncomingMessages;
- (BOOL)hasQueuedIncomingMessage:(id)message;
- (void)queueOutgoingMessage:(id)message;
- (void)associateDevice:(id)device withOutgoingMessage:(id)message;
- (id)dequeueOutgoingMessage:(id)message;
- (void)_cleanUpDeviceMappingsForMessage:(id)message;
- (BOOL)hasQueuedOutgoingMessage:(id)message;
- (id)queuedOutgoingMessages;
- (id)queuedOutgoingMessagesForDevice:(id)device;
- (void)routeMessage:(id)message;
- (void)routeMessage:(id)message shouldQueue:(BOOL)queue;
- (void)relayMessage:(id)message;
- (void)relayMessage:(id)message shouldQueue:(BOOL)queue;
- (BOOL)isReadyForIncomingMessage:(id)message error:(id *)error;
- (BOOL)shouldRelayIncomingMessage:(id)message error:(id *)error;
- (BOOL)hasQueuedOutgoingMessagesForDevice:(id)device;
- (void)sendQueuedOutgoingMessages;
- (void)sendQueuedOutgoingMessagesForDevice:(id)device;
- (void)sendQueuedOutgoingMessages:(id)messages;
- (void)routeQueuedIncomingMessages;
- (SEL)selectorForName:(id)name;
- (id)deviceForMessage:(id)message;
- (id)currentAccountDevice;
- (BOOL)isReadyForOutgoingMessaging;
- (void)handleAccountAddedDeviceNotification:(id)notification;
- (void)triggerQueuedOutgoingMessagesTimeouts;
- (void)triggerQueuedIncomingMessagesTimeouts;
- (void)didTriggerMessageHandlerQueuedMessage:(id)message;
- (void)didTriggerQueuedIncomingMessage:(id)message;
- (void)didTriggerQueuedOutgoingMessage:(id)message;
- (id)privateDescription;
- (id)attributeDescriptions;
- (id)logIdentifier;
@end

#endif /* HMDMessageHandler_h */

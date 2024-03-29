//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMXPCEventRouterClient_h
#define HMXPCEventRouterClient_h
@import Foundation;

#include "HMEPersistentConnectionClientDelegate-Protocol.h"
#include "HMFLogging-Protocol.h"
#include "HMFMessageReceiver-Protocol.h"

@class HMEPersistentConnectionClient, HMFMessageDispatcher, NSNotificationCenter, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMXPCEventRouterClient : NSObject<HMFMessageReceiver, HMEPersistentConnectionClientDelegate, HMFLogging> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly, copy) NSString *changeRegistrationsMessageName;
@property (readonly, copy) NSString *updateMessageName;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMEPersistentConnectionClient *eventRouterClient;
@property (readonly) BOOL useBackgroundTaskAssertion;
@property BOOL isActive;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithMessageTargetUUID:(id)uuid queue:(id)queue messageDispatcher:(id)dispatcher changeRegistrationsMessageName:(id)name updateMessageName:(id)name storeReadHandle:(id)handle storeWriteHandle:(id)handle useBackgroundTaskAssertion:(BOOL)assertion;
- (id)initWithMessageTargetUUID:(id)uuid queue:(id)queue messageDispatcher:(id)dispatcher changeRegistrationsMessageName:(id)name updateMessageName:(id)name notificationCenter:(id)center useBackgroundTaskAssertion:(BOOL)assertion eventRouterClientFactory:(id /* block */)factory;
- (id)messageDestination;
- (id)logIdentifier;
- (void)sendChangeRegistrationsMessageWithAddedFilters:(id)filters removedFilters:(id)filters completion:(id /* block */)completion;
- (id)forwardingTopicsForTopics:(id)topics;
- (BOOL)isActiveForSaving;
- (unsigned long long)willWriteToStore;
- (void)finishedWritingToStore:(unsigned long long)store;
- (void)_handleUpdateEventsMessage:(id)message;
- (void)handleActiveAssertionSendState:(id)state;
- (void)handleWillResignActive:(id)active;
- (void)handleDidBecomeActive:(id)active;
- (void)configure;
- (id)eventRouter;
@end

#endif /* HMXPCEventRouterClient_h */

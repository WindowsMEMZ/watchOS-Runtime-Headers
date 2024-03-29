//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDUserCloudShareController_h
#define HMDUserCloudShareController_h
@import Foundation;

#include "HMDUserCloudShareControllerDelegate-Protocol.h"
#include "HMFLogging-Protocol.h"
#include "HMFTimerDelegate-Protocol.h"

@class HMFTimer, NSHashTable, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_os_log;

@interface HMDUserCloudShareController : NSObject<HMFTimerDelegate, HMFLogging> {
  /* instance variables */
  NSObject<OS_os_log> *_logger;
}

@property (weak) NSObject<HMDUserCloudShareControllerDelegate> *delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) NSHashTable *connectedClients;
@property (retain, nonatomic) NSMutableDictionary *containerIdToConnectionIdentifierMap;
@property (readonly, nonatomic) NSMutableArray *pendingRequests;
@property (readonly, nonatomic) double pendingRequestTimeoutInterval;
@property (retain, nonatomic) HMFTimer *pendingRequestTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)identifierForConnection:(id)connection;
+ (id)logCategory;

/* instance methods */
- (id)initWithDelegate:(id)delegate queue:(id)queue pendingRequestTimeoutInterval:(double)interval;
- (void)configure;
- (id)_connectionForContainerID:(id)id;
- (void)_startTimerIfNeeded;
- (void)_removeTimerIfNotNeeded;
- (void)_addRequestToPending:(id)pending;
- (void)_handlePendingRequestTimeouts;
- (void)_resumeRequestsForContainerID:(id)id connection:(id)connection;
- (void)_sendShareRequest:(id)request toConnection:(id)connection;
- (void)_sendRepairRequest:(id)request toConnection:(id)connection;
- (void)_handleShareForRemoteClientRequest:(id)request;
- (void)handleShareForRemoteClientRequest:(id)request home:(id)home completionHandler:(id /* block */)handler;
- (void)handleShareRepairForRemoteClientRequest:(id)request home:(id)home completion:(id /* block */)completion;
- (void)timerDidFire:(id)fire;
- (void)_registerWithXpcClient:(id)client containerIDs:(id)ids;
- (void)registerWithXpcClient:(id)client containerIDs:(id)ids;
- (void)_deregisterXpcClient:(id)client;
- (void)deregisterXpcClient:(id)client;
- (void)_invalidateXpcClient:(id)client;
- (void)invalidateXpcClient:(id)client;
@end

#endif /* HMDUserCloudShareController_h */

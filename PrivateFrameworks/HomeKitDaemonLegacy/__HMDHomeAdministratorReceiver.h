//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef __HMDHomeAdministratorReceiver_h
#define __HMDHomeAdministratorReceiver_h
@import Foundation;

#include "HMFObject.h"
#include "HMDHomeAdministratorHandler.h"
#include "HMFLogging-Protocol.h"
#include "HMFMessageReceiver-Protocol.h"

@class NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface __HMDHomeAdministratorReceiver : HMFObject<HMFLogging, HMFMessageReceiver>

@property (readonly, weak) NSObject<HMFMessageReceiver> *receiver;
@property (readonly, weak) HMDHomeAdministratorHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithReceiver:(id)receiver handler:(id)handler;
- (void)dealloc;
- (id)shortDescription;
- (void)registerForMessage:(id)message policies:(id)policies;
- (void)__handleXPCMessage:(id)xpcmessage;
- (id)logIdentifier;
@end

#endif /* __HMDHomeAdministratorReceiver_h */

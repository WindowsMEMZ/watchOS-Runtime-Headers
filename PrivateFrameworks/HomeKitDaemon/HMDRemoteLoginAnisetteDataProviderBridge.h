//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDRemoteLoginAnisetteDataProviderBridge_h
#define HMDRemoteLoginAnisetteDataProviderBridge_h
@import Foundation;

#include "HMFObject.h"
#include "HMDHomeMessageReceiver-Protocol.h"
#include "HMDRemoteLoginMessageSender.h"
#include "HMFLogging-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class HMFMessageDispatcher, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDRemoteLoginAnisetteDataProviderBridge : HMFObject<HMFLogging, HMDHomeMessageReceiver, NSSecureCoding>

@property (readonly, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (retain, nonatomic) HMDRemoteLoginMessageSender *remoteMessageSender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

/* class methods */
+ (id)logCategory;
+ (BOOL)hasMessageReceiverChildren;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithUUID:(id)uuid;
- (id)logIdentifier;
- (void)configureWithWorkQueue:(id)queue messageDispatcher:(id)dispatcher remoteMessageSender:(id)sender;
- (void)registerForMessages;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HMDRemoteLoginAnisetteDataProviderBridge_h */

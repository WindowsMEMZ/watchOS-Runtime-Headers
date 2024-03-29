//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMSiriEndpointProfilesMessenger_h
#define HMSiriEndpointProfilesMessenger_h
@import Foundation;

#include "HMFLogging-Protocol.h"

@class HMFMessageDispatcher, NSString, NSUUID;

@interface HMSiriEndpointProfilesMessenger : NSObject<HMFLogging>

@property (readonly, copy) NSUUID *messageTargetUUID;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)messageTargetUUIDWithHomeUUID:(id)uuid;
+ (id)logCategory;

/* instance methods */
- (id)initWithMessageTargetUUID:(id)uuid messageDispatcher:(id)dispatcher;
- (void)sendApplyOnboardingSelectionsRequestWithAccessoryUUID:(id)uuid onboardingSelections:(id)selections completionHandler:(id /* block */)handler;
- (void)sendDeleteSiriHistoryRequestWithAccessoryUUID:(id)uuid completionHandler:(id /* block */)handler;
- (id)logIdentifier;
@end

#endif /* HMSiriEndpointProfilesMessenger_h */

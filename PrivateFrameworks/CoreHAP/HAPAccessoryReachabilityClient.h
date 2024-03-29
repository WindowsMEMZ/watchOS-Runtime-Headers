//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPAccessoryReachabilityClient_h
#define HAPAccessoryReachabilityClient_h
@import Foundation;

#include "HMFObject.h"
#include "HAP2PropertyLock.h"
#include "HAP2SerializedOperationQueue.h"
#include "HAPAccessoryReachabilityClient-Protocol.h"
#include "HAPAccessoryReachabilityDelegate-Protocol.h"
#include "HAPAccessoryReachabilityProfile-Protocol.h"
#include "HAPDeviceID.h"
#include "HMFLogging-Protocol.h"
#include "HMFTimerDelegate-Protocol.h"

@class HMFTimer, NSString;

@interface HAPAccessoryReachabilityClient : HMFObject<HMFLogging, HMFTimerDelegate, HAPAccessoryReachabilityClient> {
  /* instance variables */
  HAP2SerializedOperationQueue *_operationQueue;
  HAP2PropertyLock *_propertyLock;
  HAPDeviceID *_identifier;
  HMFTimer *_activityTimer;
}

@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HAPAccessoryReachabilityDelegate> *delegate;
@property (copy, nonatomic) NSObject<HAPAccessoryReachabilityProfile> *profile;
@property (readonly, nonatomic) double confirmInterval;

/* class methods */
+ (id)new;
+ (void)initialize;
+ (id)logCategory;
+ (id)shortDescription;

/* instance methods */
- (id)init;
- (id)initWithIdentifier:(id)identifier profile:(id)profile operationQueue:(id)queue;
- (void)startWithCompletionHandler:(id /* block */)handler;
- (void)stopWithCompletionHandler:(id /* block */)handler;
- (BOOL)isRunning;
- (void)kick;
- (void)confirm;
- (void)_runStateMachine;
- (void)_enterState:(long long)state;
- (void)_processProfile;
- (void)_wait;
- (void)_poll;
- (void)_stop;
- (void)timerDidFire:(id)fire;
- (void)_timerDidFire:(id)fire;
- (id)shortDescription;
@end

#endif /* HAPAccessoryReachabilityClient_h */

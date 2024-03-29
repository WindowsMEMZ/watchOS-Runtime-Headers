//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMSoftwareUpdateManager_h
#define HMSoftwareUpdateManager_h
@import Foundation;

#include "HMFMessageReceiver-Protocol.h"
#include "HMSoftwareUpdate.h"
#include "_HMContext.h"

@class NSString, NSUUID;
@protocol HMSoftwareUpdateManagerDelegate, OS_dispatch_queue;

@interface HMSoftwareUpdateManager : NSObject<HMFMessageReceiver> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) _HMContext *context;
@property (readonly) NSUUID *identifier;
@property (nonatomic) BOOL started;
@property (weak) NSObject<HMSoftwareUpdateManagerDelegate> *delegate;
@property (readonly) HMSoftwareUpdate *availableUpdate;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithContext:(id)context;
- (id)init;
- (void)__registerForMessages;
- (void)startWithCompletionHandler:(id /* block */)handler;
- (void)reconnect;
- (void)_reallyStartWithCompletionHandler:(id /* block */)handler;
- (void)stop;
- (void)_handleUpdatedAvailableUpdate:(id)update;
- (void)updateAvailableUpdate:(id)update completionHandler:(id /* block */)handler;
- (void)_handleFetch:(id)fetch;
- (void)_handleStartUpdate:(id)update;
- (id)messageDestination;
- (BOOL)isStarted;
@end

#endif /* HMSoftwareUpdateManager_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDWiFiManagementController_h
#define HMDWiFiManagementController_h
@import Foundation;

#include "HMFObject.h"
#include "HMDHAPAccessory.h"
#include "HMDService.h"
#include "HMDWiFiReconfigurationLogEvent.h"
#include "HMFLogging-Protocol.h"
#include "HMFTimerDelegate-Protocol.h"

@class HMFTimer, NSNotificationCenter, NSString;
@protocol OS_dispatch_queue;

@interface HMDWiFiManagementController : HMFObject<HMFTimerDelegate, HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic) long long reconfigurationState;
@property (nonatomic) unsigned short reconfigurationCookie;
@property (retain, nonatomic) HMFTimer *reconfigurationTimeoutTimer;
@property (copy, nonatomic) id /* block */ reconfigurationVerificationCallback;
@property (copy, nonatomic) id /* block */ reconfigurationCompletion;
@property (retain, nonatomic) HMDWiFiReconfigurationLogEvent *reconfigurationLogEvent;
@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly) HMDService *service;
@property (readonly) BOOL supportsStationConfiguration;
@property (readonly) long long capabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedPSKForNetworkWithSSID:(id)ssid;
+ (id)logCategory;

/* instance methods */
- (id)initWithAccessory:(id)accessory wiFiTransportService:(id)service workQueue:(id)queue;
- (void)reconfigureWithSSID:(id)ssid PSK:(id)psk logEvent:(id)event completion:(id /* block */)completion;
- (void)safelyReconfigureWithSSID:(id)ssid PSK:(id)psk verificationCallback:(id /* block */)callback logEvent:(id)event completion:(id /* block */)completion;
- (void)_accessoryDidBecomeReachable:(id)reachable;
- (void)timerDidFire:(id)fire;
- (void)_commitConfigurationUpdate;
- (void)_reconfigurationCompletedWithSuccess:(BOOL)success error:(id)error;
- (void)_performWiFiConfigurationControlRequest:(id)request withDescription:(id)description completion:(id /* block */)completion;
- (id)logIdentifier;
@end

#endif /* HMDWiFiManagementController_h */

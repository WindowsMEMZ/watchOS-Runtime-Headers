//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMobilityWalkingSteadinessFeatureStatusManager_h
#define HKMobilityWalkingSteadinessFeatureStatusManager_h
@import Foundation;

#include "HKMobilityWalkingSteadinessFeatureStatusManagerClient-Protocol.h"
#include "_HKXPCExportable-Protocol.h"

@class HKObserverSet, HKTaskServerProxyProvider, NSString;

@interface HKMobilityWalkingSteadinessFeatureStatusManager : NSObject<HKMobilityWalkingSteadinessFeatureStatusManagerClient, _HKXPCExportable> {
  /* instance variables */
  HKObserverSet *_observers;
  HKTaskServerProxyProvider *_proxyProvider;
  long long _onboardingState;
  long long _notificationState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithHealthStore:(id)store;
- (id)onboardingStatusWithError:(id *)error;
- (void)resetOnboarding;
- (id)notificationStatusWithError:(id *)error;
- (void)setNotificationsEnabled:(BOOL)enabled;
- (BOOL)isFitnessTrackingEnabled;
- (void)addObserver:(id)observer queue:(id)queue;
- (void)removeObserver:(id)observer;
- (void)client_didUpdateOnboardingStatus:(id)status;
- (void)client_didUpdateNotificationStatus:(id)status;
- (void)client_didUpdateFitnessTrackingEnabled:(BOOL)enabled;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)remoteInterface;
@end

#endif /* HKMobilityWalkingSteadinessFeatureStatusManager_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDPrimaryResidentCapabilitiesAggregator_h
#define HMDPrimaryResidentCapabilitiesAggregator_h
@import Foundation;

#include "HMDPrimaryResidentCapabilitiesAggregatorDataSource-Protocol.h"
#include "HMDPrimaryResidentCapabilitiesAggregatorDelegate-Protocol.h"
#include "HMEEventConsumer-Protocol.h"
#include "HMFLogging-Protocol.h"

@class NSMutableSet, NSNotificationCenter, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDPrimaryResidentCapabilitiesAggregator : NSObject<HMEEventConsumer, HMFLogging> {
  /* instance variables */
  BOOL _isPrimaryResident;
  NSObject<HMDPrimaryResidentCapabilitiesAggregatorDataSource> *_dataSource;
  NSObject<HMDPrimaryResidentCapabilitiesAggregatorDelegate> *_delegate;
  NSUUID *_homeUUID;
  NSObject<OS_dispatch_queue> *_queue;
  NSNotificationCenter *_notificationCenter;
  NSMutableSet *_accessories;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)logIdentifier;
- (id)initWithDataSource:(id)source delegate:(id)delegate queue:(id)queue notificationCenter:(id)center homeUUID:(id)uuid accessories:(id)accessories;
- (void)startIfPrimaryResident;
- (void)didAddAccessory:(id)accessory;
- (void)didRemoveAccessory:(id)accessory;
- (id)accessoryCapabilitiesForAccessory:(id)accessory ifDifferentFrom:(id)from;
- (id)residentCapabilitiesForAccessory:(id)accessory ifDifferentFrom:(id)from;
- (id)publicPairingIdentityForAccessory:(id)accessory ifDifferentFrom:(id)from;
- (void)handlePrimaryResidentIsCurrentDeviceChangeNotification:(id)notification;
- (void)didReceiveEvent:(id)event topic:(id)topic;
- (void)didReceiveCachedEvent:(id)event topic:(id)topic source:(id)source;
@end

#endif /* HMDPrimaryResidentCapabilitiesAggregator_h */

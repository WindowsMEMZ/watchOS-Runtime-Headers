//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAccessoryReachabilityChangedLogEvent_h
#define HMDAccessoryReachabilityChangedLogEvent_h
@import Foundation;

#include "HMMLogEvent.h"
#include "HMDAccessoryTransportReachabilityReport.h"
#include "HMMCoreAnalyticsLogging-Protocol.h"

@class NSDictionary, NSNumber, NSString, NSUUID;

@interface HMDAccessoryReachabilityChangedLogEvent : HMMLogEvent<HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) BOOL accessoryBatteryPowered;
@property (readonly, nonatomic) BOOL accessoryBridged;
@property (readonly, copy, nonatomic) NSString *accessoryCategory;
@property (readonly, copy, nonatomic) NSString *accessoryFirmwareVersion;
@property (readonly, copy, nonatomic) NSString *accessoryManufacturer;
@property (readonly, copy, nonatomic) NSString *accessoryModel;
@property (readonly, copy, nonatomic) NSNumber *accessoryNumber;
@property (readonly, nonatomic) BOOL batteryLow;
@property (readonly, nonatomic) BOOL changed;
@property (readonly, nonatomic) long long duration;
@property (readonly, nonatomic) BOOL reachable;
@property (readonly, copy, nonatomic) HMDAccessoryTransportReachabilityReport *transportReport;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eventWithReachable:(BOOL)reachable changed:(BOOL)changed duration:(double)duration accessory:(id)accessory transportReport:(id)report;
+ (BOOL)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

/* instance methods */
- (id)init;
- (id)__initWithReachable:(BOOL)reachable changed:(BOOL)changed duration:(double)duration accessory:(id)accessory transportReport:(id)report;
@end

#endif /* HMDAccessoryReachabilityChangedLogEvent_h */

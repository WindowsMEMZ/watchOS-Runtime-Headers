//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSPSleepHealthDataSource_h
#define HKSPSleepHealthDataSource_h
@import Foundation;

#include "HKFeatureAvailabilityHealthDataSource-Protocol.h"
#include "HKSPSleepStore.h"

@class HKProfileIdentifier, NSString;

@interface HKSPSleepHealthDataSource : NSObject<HKFeatureAvailabilityHealthDataSource>

@property (readonly, weak, nonatomic) NSObject<HKFeatureAvailabilityHealthDataSource> *weakHealthDataSource;
@property (readonly, nonatomic) NSObject<HKFeatureAvailabilityHealthDataSource> *strongHealthDataSource;
@property (readonly, nonatomic) HKSPSleepStore *sleepStore;
@property (readonly, nonatomic) NSObject<HKFeatureAvailabilityHealthDataSource> *healthDataSource;
@property (readonly, nonatomic) HKProfileIdentifier *profileIdentifier;
@property (readonly, nonatomic) BOOL requiresWeakRetention;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSleepStore:(id)store healthDataSource:(id)source;
- (id)featureAvailabilityProvidingForFeatureIdentifier:(id)identifier;
- (id)requirementSatisfactionOverridesDataSource;
- (id)watchLowPowerModeDataSource;
- (id)wristDetectionSettingManager;
@end

#endif /* HKSPSleepHealthDataSource_h */

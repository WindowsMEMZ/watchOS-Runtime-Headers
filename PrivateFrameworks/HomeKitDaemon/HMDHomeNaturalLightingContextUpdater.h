//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHomeNaturalLightingContextUpdater_h
#define HMDHomeNaturalLightingContextUpdater_h
@import Foundation;

#include "HMFObject.h"
#include "HMDHome.h"
#include "HMDLightProfileDataSource-Protocol.h"
#include "HMDNaturalLightingCurve.h"
#include "HMFLogging-Protocol.h"

@class NSNotificationCenter, NSString;
@protocol OS_dispatch_queue;

@interface HMDHomeNaturalLightingContextUpdater : HMFObject<HMFLogging>

@property (readonly, weak) HMDHome *home;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSObject<HMDLightProfileDataSource> *dataSource;
@property long long curveMinimumBrightness;
@property long long curveMaximumBrightness;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (copy) HMDNaturalLightingCurve *curve;
@property (readonly) BOOL demoModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithHome:(id)home demoModeEnabled:(BOOL)enabled;
- (id)initWithHome:(id)home workQueue:(id)queue demoModeEnabled:(BOOL)enabled logIdentifier:(id)identifier notificationCenter:(id)center dataSource:(id)source;
- (void)configure;
- (void)handleResidentDeviceUpdated:(id)updated;
- (void)initalizeCurve;
- (BOOL)areEncodedBrightnessLevelTransitionPointsValid:(id)valid;
- (id)colorTemperatureTransitionPointsForMaximumBrightnessWithEncodeNaturalLightingCurve:(id)curve;
- (id)colorTemperatureTransitionPointsForMinimumBrightnessWithEncodeNaturalLightingCurve:(id)curve;
- (long long)timeOfDayForMinimumBrightnessTransitionPoint:(id)point maximumBrighnessTransitionPoint:(id)point;
- (long long)colorTemperatureForTransitionPoint:(id)point;
- (void)updateNaturalLightingContext;
- (BOOL)isDemoModeEnabled;
@end

#endif /* HMDHomeNaturalLightingContextUpdater_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDMutableNaturalLightingCurve_h
#define HMDMutableNaturalLightingCurve_h
@import Foundation;

#include "HMDNaturalLightingCurve.h"

@interface HMDMutableNaturalLightingCurve : HMDNaturalLightingCurve

@property (@dynamic) unsigned long long colorTemperatureNotifyValueChangeThreshold;
@property (@dynamic) unsigned long long colorTemperatureNotifyIntervalThresholdInMilliseconds;
@property (@dynamic) unsigned long long colorTemperatureUpdateIntervalInMilliseconds;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* HMDMutableNaturalLightingCurve_h */

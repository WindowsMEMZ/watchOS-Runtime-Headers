//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDNaturalLightingCurve_h
#define HMDNaturalLightingCurve_h
@import Foundation;

#include "HMFObject.h"
#include "HMFLogging-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface HMDNaturalLightingCurve : HMFObject<HMFLogging, NSSecureCoding, NSCopying>

@property unsigned long long colorTemperatureNotifyIntervalThresholdInMilliseconds;
@property unsigned long long colorTemperatureUpdateIntervalInMilliseconds;
@property unsigned long long colorTemperatureNotifyValueChangeThreshold;
@property (readonly) unsigned long long version;
@property (readonly, copy) NSArray *transitionPoints;
@property (readonly) long long minimumBrightness;
@property (readonly) long long maximumBrightness;
@property (readonly) long long minimumColorTemperature;
@property (readonly) long long maximumColorTemperature;
@property (readonly) unsigned long long checksum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (long long)colorTemperatureMiredsFromKelvins:(long long)kelvins;
+ (id)logCategory;

/* instance methods */
- (id)initWithVersion:(unsigned long long)version transitionPoints:(id)points minimumBrightness:(long long)brightness maximumBrightness:(long long)brightness minimumColorTemperature:(long long)temperature maximumColorTemperature:(long long)temperature;
- (id)initWithCurve:(id)curve minimumColorTemperature:(long long)temperature maximumColorTemperature:(long long)temperature;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)attributeDescriptions;
- (id)colorTemperatureForBrightness:(long long)brightness millisecondsElapsedSinceStartOfDay:(unsigned long long)day;
- (id)transitionPointsWithmillisecondsElapsedSinceStartOfDay:(unsigned long long)day;
@end

#endif /* HMDNaturalLightingCurve_h */

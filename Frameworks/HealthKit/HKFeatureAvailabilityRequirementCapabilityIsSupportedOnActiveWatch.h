//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKFeatureAvailabilityRequirementCapabilityIsSupportedOnActiveWatch_h
#define HKFeatureAvailabilityRequirementCapabilityIsSupportedOnActiveWatch_h
@import Foundation;

#include "_HKFeatureAvailabilityRequirementCapabilityIsSupportedOnActiveRemoteDevice.h"

@interface HKFeatureAvailabilityRequirementCapabilityIsSupportedOnActiveWatch : _HKFeatureAvailabilityRequirementCapabilityIsSupportedOnActiveRemoteDevice

@property (readonly, nonatomic) BOOL supportedOnLocalDevice;

/* class methods */
+ (id)requirementIdentifier;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithFeatureIdentifier:(id)identifier supportedOnLocalDevice:(BOOL)device;
- (id)requirementDescription;
- (id)isSatisfiedWithDataSource:(id)source error:(id *)error;
- (void)registerObserver:(id)observer forDataSource:(id)source;
- (void)unregisterObserver:(id)observer fromDataSource:(id)source;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* HKFeatureAvailabilityRequirementCapabilityIsSupportedOnActiveWatch_h */

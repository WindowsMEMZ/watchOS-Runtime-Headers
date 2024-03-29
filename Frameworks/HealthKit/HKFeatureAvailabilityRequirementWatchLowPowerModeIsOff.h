//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKFeatureAvailabilityRequirementWatchLowPowerModeIsOff_h
#define HKFeatureAvailabilityRequirementWatchLowPowerModeIsOff_h
@import Foundation;

#include "HKFeatureAvailabilityBaseRequirement.h"
#include "HKObservableFeatureAvailabilityRequirement-Protocol.h"

@class NSString;

@interface HKFeatureAvailabilityRequirementWatchLowPowerModeIsOff : HKFeatureAvailabilityBaseRequirement<HKObservableFeatureAvailabilityRequirement>

@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)requirementIdentifier;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)isSatisfiedWithDataSource:(id)source error:(id *)error;
- (void)registerObserver:(id)observer forDataSource:(id)source;
- (void)unregisterObserver:(id)observer fromDataSource:(id)source;
- (BOOL)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* HKFeatureAvailabilityRequirementWatchLowPowerModeIsOff_h */

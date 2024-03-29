//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKHearingLevelMetrics_h
#define HKHearingLevelMetrics_h
@import Foundation;

#include "HKQuantity.h"

@interface HKHearingLevelMetrics : NSObject

@property (readonly, nonatomic) unsigned long long hearingLevelClassification;
@property (readonly, copy, nonatomic) HKQuantity *averageSensitivity;
@property (readonly, copy, nonatomic) HKQuantity *minimumSensitivity;
@property (readonly, copy, nonatomic) HKQuantity *maximumSensitivity;

/* instance methods */
- (id)initWithAverageSensitivity:(id)sensitivity minimumSensitivity:(id)sensitivity maximumSensitivity:(id)sensitivity;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* HKHearingLevelMetrics_h */

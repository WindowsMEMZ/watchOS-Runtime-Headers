//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKRaceRouteLocationSeriesQueryServerConfiguration_h
#define _HKRaceRouteLocationSeriesQueryServerConfiguration_h
@import Foundation;

#include "HKQueryServerConfiguration.h"

@class NSUUID;

@interface _HKRaceRouteLocationSeriesQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSUUID *clusterUUID;
@property (nonatomic) unsigned long long workoutSelection;
@property (copy, nonatomic) NSUUID *workoutUUID;
@property (nonatomic) double timestampAnchor;
@property (nonatomic) unsigned long long limit;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* _HKRaceRouteLocationSeriesQueryServerConfiguration_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDMutableMediaGroupsAggregateData_h
#define HMDMutableMediaGroupsAggregateData_h
@import Foundation;

#include "HMDMediaGroupsAggregateData.h"

@class NSArray;

@interface HMDMutableMediaGroupsAggregateData : HMDMediaGroupsAggregateData

@property (copy, @dynamic) NSArray *destinations;
@property (copy, @dynamic) NSArray *destinationControllersData;
@property (copy, @dynamic) NSArray *groups;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* HMDMutableMediaGroupsAggregateData_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 236.12.0.0.0
//
#ifndef SHTimeAndPlaceAffinityGroup_h
#define SHTimeAndPlaceAffinityGroup_h
@import Foundation;

#include "SHAffinityGroup.h"

@class NSArray, NSDictionary;

@interface SHTimeAndPlaceAffinityGroup : NSObject

@property (readonly, nonatomic) NSDictionary *geohashKeyedRegions;
@property (readonly, nonatomic) NSArray *regions;
@property (readonly, nonatomic) SHAffinityGroup *affinityGroup;

/* instance methods */
- (id)initWithRegions:(id)regions affinityGroup:(id)group;
- (id)regionsForGeohash:(id)geohash;
@end

#endif /* SHTimeAndPlaceAffinityGroup_h */

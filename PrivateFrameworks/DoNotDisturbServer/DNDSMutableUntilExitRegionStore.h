//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSMutableUntilExitRegionStore_h
#define DNDSMutableUntilExitRegionStore_h
@import Foundation;

#include "DNDSUntilExitRegionStore.h"

@class CLRegion, NSArray, NSNumber;

@interface DNDSMutableUntilExitRegionStore : DNDSUntilExitRegionStore

@property (copy, @dynamic, nonatomic) NSArray *activeLifetimeAssertionUUIDs;
@property (copy, @dynamic, nonatomic) CLRegion *currentRegion;
@property (copy, @dynamic, nonatomic) NSNumber *regionEntered;
@property (copy, @dynamic, nonatomic) NSNumber *hasActiveLifetimes;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* DNDSMutableUntilExitRegionStore_h */

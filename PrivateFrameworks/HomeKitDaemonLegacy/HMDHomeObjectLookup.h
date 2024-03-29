//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHomeObjectLookup_h
#define HMDHomeObjectLookup_h
@import Foundation;

#include "HMDObjectLookup.h"
#include "HMDHome.h"

@interface HMDHomeObjectLookup : HMDObjectLookup

@property (weak) HMDHome *home;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithHome:(id)home;
- (void)scanObjects;
- (void)_scanAccessoriesAndServices;
- (void)_scanSettings:(id)settings;
- (void)_scanRooms;
- (void)_scanZones;
- (void)_scanActionSets;
- (void)_scanServiceGroups;
- (void)_scanTriggers;
- (void)_scanResidentDevices;
- (void)_scanMediaSystems;
- (void)_scanUsers;
- (id)logIdentifier;
@end

#endif /* HMDHomeObjectLookup_h */

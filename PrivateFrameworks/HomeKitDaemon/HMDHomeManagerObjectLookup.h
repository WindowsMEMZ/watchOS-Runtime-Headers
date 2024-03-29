//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHomeManagerObjectLookup_h
#define HMDHomeManagerObjectLookup_h
@import Foundation;

#include "HMDObjectLookup.h"
#include "HMDHomeManager.h"

@interface HMDHomeManagerObjectLookup : HMDObjectLookup

@property (weak) HMDHomeManager *homeManager;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithHomeManager:(id)manager;
- (void)scanObjects;
- (void)_scanHomes;
- (void)_scanCloudZones;
- (void)_scanAccounts;
@end

#endif /* HMDHomeManagerObjectLookup_h */

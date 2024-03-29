//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4416.36.0.0.0
//
#ifndef SBSAbstractSystemService_h
#define SBSAbstractSystemService_h
@import Foundation;

#include "SBSAbstractFacilityService.h"
#include "SBSSystemServiceClient.h"

@interface SBSAbstractSystemService : SBSAbstractFacilityService

@property (readonly, nonatomic) SBSSystemServiceClient *client;

/* class methods */
+ (Class)serviceFacilityClientClass;
@end

#endif /* SBSAbstractSystemService_h */

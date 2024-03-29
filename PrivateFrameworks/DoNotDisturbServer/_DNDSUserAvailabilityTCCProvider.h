//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef _DNDSUserAvailabilityTCCProvider_h
#define _DNDSUserAvailabilityTCCProvider_h
@import Foundation;

#include "DNDSUserAvailabilityTCCProviding-Protocol.h"

@class NSString;

@interface _DNDSUserAvailabilityTCCProvider : NSObject<DNDSUserAvailabilityTCCProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)userAvailabilityTCCApprovedBundleIds;
@end

#endif /* _DNDSUserAvailabilityTCCProvider_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDNotificationRegistryRequest_h
#define HMDNotificationRegistryRequest_h
@import Foundation;

#include "HMFObject.h"
#include "HMDUser.h"

@class NSString;

@interface HMDNotificationRegistryRequest : HMFObject

@property (readonly) BOOL enable;
@property (readonly, copy) NSString *deviceIdsDestination;
@property (readonly) HMDUser *user;
@property long long retryCount;

/* instance methods */
- (id)initWithEnable:(BOOL)enable user:(id)user deviceIdsDestination:(id)destination;
- (id)attributeDescriptions;
@end

#endif /* HMDNotificationRegistryRequest_h */

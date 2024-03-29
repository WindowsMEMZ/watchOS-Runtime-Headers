//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCloudHomeManagerZone_h
#define HMDCloudHomeManagerZone_h
@import Foundation;

#include "HMDCloudZone.h"

@interface HMDCloudHomeManagerZone : HMDCloudZone
/* class methods */
+ (id)zoneRootRecordName;
+ (id)zoneSubscriptionName:(id)name;
+ (void)createHomeManagerZoneWithName:(id)name owner:(id)owner cacheZone:(id)zone cloudCache:(id)cache completion:(id /* block */)completion;

/* instance methods */
- (id)createCloudZoneChangeTemporaryCache:(BOOL)cache;
- (void)setServerChangeToken:(id)token;
@end

#endif /* HMDCloudHomeManagerZone_h */

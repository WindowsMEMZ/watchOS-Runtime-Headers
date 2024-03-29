//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAP2AccessoryServerDiscoveryAccessoryInfo_h
#define HAP2AccessoryServerDiscoveryAccessoryInfo_h
@import Foundation;

#include "HAP2LoggingObject.h"
#include "HAPDeviceID.h"

@class NSDictionary, NSString;

@interface HAP2AccessoryServerDiscoveryAccessoryInfo : HAP2LoggingObject

@property (readonly, nonatomic) HAPDeviceID *deviceID;
@property (readonly, copy, nonatomic) NSString *airPlayDeviceUUIDString;
@property (readonly, nonatomic) NSDictionary *rawDiscoveryInfo;

/* class methods */
+ (id)new;

/* instance methods */
- (id)init;
- (id)initWithDeviceID:(id)id rawDiscoveryInfo:(id)info;
@end

#endif /* HAP2AccessoryServerDiscoveryAccessoryInfo_h */

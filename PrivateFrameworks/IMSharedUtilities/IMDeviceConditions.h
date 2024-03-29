//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDeviceConditions_h
#define IMDeviceConditions_h
@import Foundation;

@interface IMDeviceConditions : NSObject

@property (readonly) BOOL isDeviceCharging;
@property (readonly) BOOL isDeviceOnWifi;
@property (readonly) BOOL isDeviceOnData;
@property (readonly) BOOL isOnLowBandwidthCellular;

/* class methods */
+ (id)sharedInstance;
@end

#endif /* IMDeviceConditions_h */

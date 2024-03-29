//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef CLLocationManager_HomeLocation_h
#define CLLocationManager_HomeLocation_h
@import Foundation;

@interface CLLocationManager (HomeLocation)
/* class methods */
+ (BOOL)hm_isLocationAllowedForAuthorizationStatus:(int)status;
+ (long long)hm_hmdLocationAuthorizationFromCLAuthorizationStatus:(int)status;
+ (long long)hm_hmdRegionStateFromCLRegionState:(long long)state;
@end

#endif /* CLLocationManager_HomeLocation_h */

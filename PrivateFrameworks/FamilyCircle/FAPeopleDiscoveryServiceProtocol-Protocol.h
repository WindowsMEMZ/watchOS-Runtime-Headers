//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 198.4.0.0.0
//
#ifndef FAPeopleDiscoveryServiceProtocol_Protocol_h
#define FAPeopleDiscoveryServiceProtocol_Protocol_h
@import Foundation;

@protocol FAPeopleDiscoveryServiceProtocol <NSObject>
/* class methods */
+ (id)sharedInstance;
/* instance methods */
- (void)startMonitoringProximity;
- (void)stopMonitoringProximity;
- (id)getNearbyPeople;
@end

#endif /* FAPeopleDiscoveryServiceProtocol_Protocol_h */

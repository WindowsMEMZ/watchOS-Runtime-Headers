//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 217.20.3.0.0
//
#ifndef NSArray_HMHome_Announce_h
#define NSArray_HMHome_Announce_h
@import Foundation;

@interface NSArray (HMHome_Announce)
/* instance methods */
- (id)activeAccessoryDevicesSupportingAnnounce;
- (id)activeDevicesSupportingAnnounce;
- (id)activePersonalDevicesSupportingAnnounce;
- (id)pairedCompanion;
- (id)devicesInHome:(id)home;
- (id)devicesByRemovingNonAccessoryDevicesNotBelongingToUsers:(id)users;
- (id)personalDevicesForUser:(id)user;
- (id)an_homesSupportingAnnounce;
@end

#endif /* NSArray_HMHome_Announce_h */

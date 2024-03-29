//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 217.20.3.0.0
//
#ifndef HMHome_Announce_h
#define HMHome_Announce_h
@import Foundation;

@interface HMHome (Announce)
/* instance methods */
- (BOOL)isAnnounceSupported;
- (BOOL)isAnnounceAvailable;
- (BOOL)isAnnounceEnabledForAnyAccessory;
- (BOOL)isAnnounceEnabledForAnyAccessoryOrUser;
- (BOOL)announceAccessAllowedForCurrentUser;
- (BOOL)announceAccessAllowedForUser:(id)user;
- (id)usersIncludingCurrentUserWithAnnounceEnabled;
- (id)usersWithAnnounceEnabled;
- (id)usersIncludingCurrentUserWithAnnounceAndRemoteAccessEnabled;
- (id)homePodsIncludingCurrentAccessorySupportingAnnounce;
- (id)homePodsIncludingCurrentAccessoryWithAnnounceEnabled;
- (BOOL)an_announceNotificationsEnabledForCurrentUserWithOverrideHomeLocationStatus:(long long)status;
- (id)_usersWithAnnounceEnabledIncludingCurrentUser:(BOOL)user;
- (id)_homePodsWithAnnounceEnabledIncludingCurrentAccessory:(BOOL)accessory;
- (id)_homePodsSupportingAnnounceIncludingCurrentAccessory:(BOOL)accessory;
@end

#endif /* HMHome_Announce_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUDiscoverabilitySignal_h
#define TUDiscoverabilitySignal_h
@import Foundation;

@interface TUDiscoverabilitySignal : NSObject
/* class methods */
+ (void)logAnalyticsEventNamed:(id)named;
+ (BOOL)isSeniorUser;
+ (void)logAnalyticsEventFaceTimeLink;
+ (void)logAnalyticsEventPhoneAddFavorites;
+ (void)logAnalyticsEventPhoneRecentlyDialed;
+ (void)logAnalyticsEventSpeakerphone;
@end

#endif /* TUDiscoverabilitySignal_h */

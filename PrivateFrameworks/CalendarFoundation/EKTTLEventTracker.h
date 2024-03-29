//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1547.1.1.3.0
//
#ifndef EKTTLEventTracker_h
#define EKTTLEventTracker_h
@import Foundation;

@interface EKTTLEventTracker : NSObject
/* class methods */
+ (void)trackTTLCandidateEventHasSuggestedLocation:(BOOL)location isOnSharedCalendar:(BOOL)calendar;
+ (void)trackEventFiredTTLAlertWithAlertType:(unsigned long long)type transportType:(unsigned long long)type etaType:(unsigned long long)type travelState:(unsigned long long)state hasSuggestedLocation:(BOOL)location isOnSharedCalendar:(BOOL)calendar;
+ (void)trackDirectionsEngagedForTTLAlertWithTransportType:(unsigned long long)type etaType:(unsigned long long)type hasSuggestedLocation:(BOOL)location isOnSharedCalendar:(BOOL)calendar;
+ (void)trackEmailEngagedForTTLAlertWithTransportType:(unsigned long long)type etaType:(unsigned long long)type hasSuggestedLocation:(BOOL)location isOnSharedCalendar:(BOOL)calendar;
+ (id)_valueForAlertType:(unsigned long long)type;
+ (id)_valueForTransportType:(unsigned long long)type;
+ (id)_valueForETAType:(unsigned long long)etatype;
+ (id)_valueForTravelState:(unsigned long long)state;
@end

#endif /* EKTTLEventTracker_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSMutableHeartbeatMetricsProtocol_Protocol_h
#define DNDSMutableHeartbeatMetricsProtocol_Protocol_h
@import Foundation;

@protocol DNDSMutableHeartbeatMetricsProtocol <DNDSHeartbeatMetricsProtocol>

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL manuallyEnabled;
@property (copy, nonatomic) NSNumber *numberOfSessions;
@property (copy, nonatomic) NSNumber *numberOfManualSessions;
@property (nonatomic) BOOL enabledFromControlCenterPhone;
@property (nonatomic) BOOL enabledFromControlCenterWatch;
@property (nonatomic) BOOL enabledForOneHour;
@property (nonatomic) BOOL enabledUntilEvening;
@property (nonatomic) BOOL enabledUntilMorning;
@property (nonatomic) BOOL enabledAtLocation;
@property (nonatomic) BOOL enabledDuringEvent;
@property (nonatomic) BOOL enabledDrivingMode;
@property (nonatomic) BOOL enabledSleepMode;

@end

#endif /* DNDSMutableHeartbeatMetricsProtocol_Protocol_h */

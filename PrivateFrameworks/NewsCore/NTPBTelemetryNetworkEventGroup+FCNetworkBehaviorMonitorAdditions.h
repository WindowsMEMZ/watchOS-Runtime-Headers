//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBTelemetryNetworkEventGroup_FCNetworkBehaviorMonitorAdditions_h
#define NTPBTelemetryNetworkEventGroup_FCNetworkBehaviorMonitorAdditions_h
@import Foundation;

@interface NTPBTelemetryNetworkEventGroup (FCNetworkBehaviorMonitorAdditions)
/* instance methods */
- (id)startDate;
- (id)endDate;
- (id)totalDurationStats;
- (id)dnsDurationStats;
- (id)connectDurationStats;
- (id)timeToFirstByteStats;
- (unsigned long long)cacheHitCount;
- (unsigned long long)cacheMissCount;
@end

#endif /* NTPBTelemetryNetworkEventGroup_FCNetworkBehaviorMonitorAdditions_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 121.0.0.0.0
//
#ifndef SignpostSupportObjectExtractor_Notifications_h
#define SignpostSupportObjectExtractor_Notifications_h
@import Foundation;

@interface SignpostSupportObjectExtractor (Notifications)
/* class methods */
+ (id)_eventSourceForPath:(id)path errorOut:(id *)out;
+ (BOOL)dateRangeOfLogArchiveWithPath:(id)path startDateOut:(id *)out endDateOut:(id *)out errorOut:(id *)out;

/* instance methods */
- (BOOL)processTraceFileWithPath:(id)path errorOut:(id *)out;
- (void)_processOSLogEventProxy:(id)proxy;
- (BOOL)_processLogEventStream:(id)stream startDate:(id)date endDate:(id)date errorOut:(id *)out;
- (BOOL)processLogArchiveWithPath:(id)path startDate:(id)date endDate:(id)date errorOut:(id *)out;
- (BOOL)processNotificationsWithIntervalTimeoutInSeconds:(unsigned long long)seconds errorOut:(id *)out;
- (void)_processStreamedOSLogEventProxy:(id)proxy shouldCalculateFramerate:(BOOL)framerate;
- (BOOL)processNotificationsWithIntervalTimeoutInSeconds:(unsigned long long)seconds shouldCalculateAnimationFramerate:(BOOL)framerate targetQueue:(id)queue errorOut:(id *)out;
@end

#endif /* SignpostSupportObjectExtractor_Notifications_h */

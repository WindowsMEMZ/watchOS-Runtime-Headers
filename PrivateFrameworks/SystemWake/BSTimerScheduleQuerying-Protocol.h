//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef BSTimerScheduleQuerying_Protocol_h
#define BSTimerScheduleQuerying_Protocol_h
@import Foundation;

@protocol BSTimerScheduleQuerying <NSObject>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL scheduled;
@property (readonly, nonatomic) double timeRemaining;

/* instance methods */
- (BOOL)isScheduled;
@end

#endif /* BSTimerScheduleQuerying_Protocol_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPWakeUpResultsNotificationBuilder_h
#define HDSPWakeUpResultsNotificationBuilder_h
@import Foundation;

@class NSArray, NSString;

@interface HDSPWakeUpResultsNotificationBuilder : NSObject

@property (readonly, nonatomic) NSArray *daySummaries;
@property (readonly, nonatomic) struct { long long x0; long long x1; } morningIndexRange;
@property (readonly, nonatomic) NSString *userFirstName;

/* instance methods */
- (id)initWithDaySummaries:(id)summaries morningIndexRange:(struct { long long x0; long long x1; })range userFirstName:(id)name;
- (id)buildNotification;
- (BOOL)_didMeetSleepDurationGoalLastNight;
- (id)_sleepDurationGoalAchievedTwoWeekNotification;
- (id)_sleepDurationGoalAchievedShortWeekNotification;
- (id)_sleepDurationGoalAchievedLastNightNotification;
- (long long)_randomNotificationVariantForCategory:(unsigned long long)category;
- (id)_notificationForCategory:(unsigned long long)category morningIndexRange:(struct { long long x0; long long x1; })range goalAchieved:(id)achieved;
@end

#endif /* HDSPWakeUpResultsNotificationBuilder_h */

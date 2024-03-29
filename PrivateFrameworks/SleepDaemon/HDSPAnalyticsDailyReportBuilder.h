//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPAnalyticsDailyReportBuilder_h
#define HDSPAnalyticsDailyReportBuilder_h
@import Foundation;

#include "HDSPEnvironment.h"

@class NSArray;

@interface HDSPAnalyticsDailyReportBuilder : NSObject

@property (readonly, weak, nonatomic) HDSPEnvironment *environment;
@property (readonly, nonatomic) NSArray *daySummaries;
@property (readonly, nonatomic) struct { long long x0; long long x1; } morningIndexRange;

/* class methods */
+ (unsigned long long)_stageDurationPercentage:(double)percentage ofTotalDuration:(double)duration;

/* instance methods */
- (id)initWithEnvironment:(id)environment daySummaries:(id)summaries morningIndexRange:(struct { long long x0; long long x1; })range;
- (id)buildReports;
- (id)currentDate;
- (id)healthStore;
- (id)sleepSchedule;
- (id)sleepSettings;
- (id)analyticsManager;
- (id)analyticsStore;
- (id)_dailyReportEvent;
- (long long)_daysWatchWornToSleepOverLastNumberOfDays:(long long)days excludeWeekdays:(BOOL)weekdays calendar:(id)calendar;
- (BOOL)_woreWatchToSleepLastNight;
- (double)_bucketedSleepDurationLastNight;
- (double)_sleepDurationLastNightIncludingAwake:(BOOL)awake;
- (double)_lastNightsDurationForSleepStage:(long long)stage;
- (id)_windDownEvents;
- (BOOL)_didInteractWithWindDownActionsWithinLastTwoDays;
- (BOOL)_changedSchedule:(id)schedule withinNumberOfDays:(unsigned long long)days currentDate:(id)date calendar:(id)calendar;
- (id)_weeksSinceOnboardDate:(id)date currentDate:(id)date calendar:(id)calendar;
- (id)_biologicalSex;
- (id)_userAgeForCurrentDate:(id)date;
@end

#endif /* HDSPAnalyticsDailyReportBuilder_h */

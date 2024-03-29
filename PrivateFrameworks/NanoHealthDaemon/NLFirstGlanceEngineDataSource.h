//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef NLFirstGlanceEngineDataSource_h
#define NLFirstGlanceEngineDataSource_h
@import Foundation;

#include "NLFirstGlanceEngineDataSource-Protocol.h"

@class ACHAchievementStore, FITypicalDayActivityModel, HDProfile, NSString;

@interface NLFirstGlanceEngineDataSource : NSObject<NLFirstGlanceEngineDataSource>

@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) FITypicalDayActivityModel *typicalDayModel;
@property (weak, nonatomic) ACHAchievementStore *achievementStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProfile:(id)profile typicalDayModel:(id)model;
- (id)achievementWithUniqueName:(id)name;
- (id)achievementsCompletedOnDay:(id)day calendar:(id)calendar;
- (id)monthlyChallengeForDate:(id)date calendar:(id)calendar;
- (id)weeklySummaryInfoForDate:(id)date;
- (double)recommendedGoalForDate:(id)date;
- (id)yesterdayActivitySummary;
- (BOOL)enumerateActivitySummariesDuringInterval:(id)interval calendar:(id)calendar error:(id *)error handler:(id /* block */)handler;
- (id)allActivitySharingFriends;
- (id)workoutsCompletedDuringInterval:(id)interval;
- (double)projectedDayDuration;
@end

#endif /* NLFirstGlanceEngineDataSource_h */

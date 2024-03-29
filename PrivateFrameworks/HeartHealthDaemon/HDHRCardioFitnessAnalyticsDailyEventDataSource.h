//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDHRCardioFitnessAnalyticsDailyEventDataSource_h
#define HDHRCardioFitnessAnalyticsDailyEventDataSource_h
@import Foundation;

#include "HKHRCardioFitnessAnalyticsDailyEventDataSourceInterface-Protocol.h"

@class HDProfile;

@interface HDHRCardioFitnessAnalyticsDailyEventDataSource : NSObject<HKHRCardioFitnessAnalyticsDailyEventDataSourceInterface> {
  /* instance variables */
  HDProfile *_profile;
}

/* class methods */
+ (id)localGregorianCalendar;

/* instance methods */
- (id)initWithProfile:(id)profile;
- (id)determineDaysSinceLastLowNotificationWithCurrentDate:(id)date isImproveHealthAndActivityAllowed:(BOOL)allowed error:(id *)error;
- (id)determineDaysSinceLastVO2MaxSampleWithCurrentDate:(id)date isImproveHealthAndActivityAllowed:(BOOL)allowed error:(id *)error;
- (id)determineNumberOfLowNotificationsInPastYearWithCurrentDate:(id)date isImproveHealthAndActivityAllowed:(BOOL)allowed error:(id *)error;
- (id)determineIsBlockersEnabledWithIsImproveHealthAndActivityAllowed:(BOOL)allowed error:(id *)error;
- (id)determineIsHeartRateEnabledWithIsImproveHealthAndActivityAllowed:(BOOL)allowed;
- (id)determineIsWristDetectionEnabledWithIsImproveHealthAndActivityAllowed:(BOOL)allowed;
- (long long)determineWeeksSinceOnboardingWithCurrentDate:(id)date error:(id *)error;
- (BOOL)determineIsNotificationsEnabled;
- (id)latestClassificationWithIsOnboarded:(BOOL)onboarded isImproveHealthAndActivityAllowed:(BOOL)allowed error:(id *)error;
- (long long)_determineDaysSinceLastSampleWithSampleType:(id)type currentDate:(id)date error:(id *)error;
- (long long)numberOfDaysBetweenStartDate:(id)date endDate:(id)date;
@end

#endif /* HDHRCardioFitnessAnalyticsDailyEventDataSource_h */

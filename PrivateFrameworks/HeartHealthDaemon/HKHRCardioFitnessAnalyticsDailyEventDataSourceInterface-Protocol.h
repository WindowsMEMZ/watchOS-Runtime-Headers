//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKHRCardioFitnessAnalyticsDailyEventDataSourceInterface_Protocol_h
#define HKHRCardioFitnessAnalyticsDailyEventDataSourceInterface_Protocol_h
@import Foundation;

@protocol HKHRCardioFitnessAnalyticsDailyEventDataSourceInterface 
/* instance methods */
- (id)determineDaysSinceLastLowNotificationWithCurrentDate:(id)date isImproveHealthAndActivityAllowed:(BOOL)allowed error:(id *)error;
- (id)determineDaysSinceLastVO2MaxSampleWithCurrentDate:(id)date isImproveHealthAndActivityAllowed:(BOOL)allowed error:(id *)error;
- (id)determineNumberOfLowNotificationsInPastYearWithCurrentDate:(id)date isImproveHealthAndActivityAllowed:(BOOL)allowed error:(id *)error;
- (id)determineIsBlockersEnabledWithIsImproveHealthAndActivityAllowed:(BOOL)allowed error:(id *)error;
- (id)determineIsHeartRateEnabledWithIsImproveHealthAndActivityAllowed:(BOOL)allowed;
- (id)determineIsWristDetectionEnabledWithIsImproveHealthAndActivityAllowed:(BOOL)allowed;
- (long long)determineWeeksSinceOnboardingWithCurrentDate:(id)date error:(id *)error;
- (BOOL)determineIsNotificationsEnabled;
- (id)latestClassificationWithIsOnboarded:(BOOL)onboarded isImproveHealthAndActivityAllowed:(BOOL)allowed error:(id *)error;
@end

#endif /* HKHRCardioFitnessAnalyticsDailyEventDataSourceInterface_Protocol_h */

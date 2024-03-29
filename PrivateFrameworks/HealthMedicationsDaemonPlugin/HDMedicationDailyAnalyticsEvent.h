//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDMedicationDailyAnalyticsEvent_h
#define HDMedicationDailyAnalyticsEvent_h
@import Foundation;

#include "HDMedicationDoseEventDailyAnalytics.h"
#include "HDMedicationOntologyDailyAnalytics.h"
#include "HDMedicationScheduleDailyAnalytics.h"
#include "HDMedicationUserDomainConceptDailyAnalytics.h"
#include "HKAnalyticsEvent-Protocol.h"

@class HDKeyValueDomain, HDProfile, NSCalendar, NSDate, NSString, NSUserDefaults;

@interface HDMedicationDailyAnalyticsEvent : NSObject<HKAnalyticsEvent> {
  /* instance variables */
  HDProfile *_profile;
  HDKeyValueDomain *_medicationsKeyValueDomain;
  NSUserDefaults *_medicationsUserDefaults;
  NSCalendar *_calendar;
  NSDate *_currentDate;
  HDMedicationDoseEventDailyAnalytics *_doseEventAnalytics;
  HDMedicationUserDomainConceptDailyAnalytics *_medicationConceptAnalytics;
  HDMedicationOntologyDailyAnalytics *_ontologyAnalytics;
  HDMedicationScheduleDailyAnalytics *_scheduleAnalytics;
}

@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

/* instance methods */
- (id)initWithProfile:(id)profile;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)source error:(id *)error;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)source error:(id *)error;
- (id)_userCharacteristicsAnalyticsPayloadWithDataSource:(id)source;
- (id)_reminderAnalyticsPayload;
- (id)_lifestyleInteractionsAnalyticsPayload;
- (id)_readValueFromKeyValueDomainForKey:(id)key;
- (id)_isImproveHealthRecordsAllowedPayloadWithDataSource:(id)source;
- (id)_fetchDeviceContextAnalytics;
- (id)_fetchNotificationSettingsAnalyticsWithDataSource:(id)source includingCriticalMedsCount:(BOOL)count;
- (long long)_bucketedWeeksSinceDate:(id)date dataSource:(id)source;
@end

#endif /* HDMedicationDailyAnalyticsEvent_h */

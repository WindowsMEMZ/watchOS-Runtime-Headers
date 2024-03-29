//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef NLReminderAnalyticsTracker_h
#define NLReminderAnalyticsTracker_h
@import Foundation;

#include "HDPeriodicActivityDelegate-Protocol.h"
#include "NLMindfulnessReminderProvider.h"

@class HDPeriodicActivity, HDProfile, NSString;

@interface NLReminderAnalyticsTracker : NSObject<HDPeriodicActivityDelegate> {
  /* instance variables */
  HDProfile *_profile;
  HDPeriodicActivity *_scheduler;
  NLMindfulnessReminderProvider *_reminderProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProfile:(id)profile reminderProvider:(id)provider;
- (void)periodicActivity:(id)activity configureXPCActivityCriteria:(id)criteria;
- (void)performPeriodicActivity:(id)activity completion:(id /* block */)completion;
- (void)_reportReminderCountMetric;
@end

#endif /* NLReminderAnalyticsTracker_h */

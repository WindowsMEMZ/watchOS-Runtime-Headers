//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1502.1.1.3.0
//
#ifndef CALNDefaultTriggeredEventNotificationTriggerHelper_h
#define CALNDefaultTriggeredEventNotificationTriggerHelper_h
@import Foundation;

#include "CALNTravelAdvisoryAuthority-Protocol.h"
#include "CALNTriggeredEventNotificationTriggerHelper-Protocol.h"

@class NSString;
@protocol CalDateProvider;

@interface CALNDefaultTriggeredEventNotificationTriggerHelper : NSObject<CALNTriggeredEventNotificationTriggerHelper>

@property (readonly, nonatomic) NSObject<CALNTravelAdvisoryAuthority> *travelAdvisoryAuthority;
@property (readonly, nonatomic) NSObject<CalDateProvider> *dateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTravelAdvisoryAuthority:(id)authority dateProvider:(id)provider;
- (BOOL)shouldTriggerForSourceClientIdentifier:(id)identifier trigger:(unsigned long long)trigger sourceNotificationInfo:(id)info oldNotificationData:(id)data;
- (BOOL)_shouldTriggerForTravelAdviceReceivedForSourceClientIdentifier:(id)identifier sourceNotificationInfo:(id)info oldNotificationData:(id)data;
- (BOOL)_shouldTriggerForTravelAdviceReceivedGivenHasExistingNotificationDataForSourceClientIdentifier:(id)identifier hypothesis:(id)hypothesis sourceNotificationInfo:(id)info oldNotificationData:(id)data hasExistingTravelAdvice:(BOOL)advice satisfiesMinimumTravelTimeThreshold:(BOOL)threshold;
- (BOOL)_shouldTriggerForTimeToLeaveRefreshForSourceClientIdentifier:(id)identifier sourceNotificationInfo:(id)info oldNotificationData:(id)data;
- (BOOL)_shouldTriggerForTimeToLeaveRefreshGivenImmediateDepartureTimelinessStatusForSourceClientIdentifier:(id)identifier oldNotificationData:(id)data;
- (BOOL)_eventWillEndBeforeUserArrivesForHypothesis:(id)hypothesis eventEndDate:(id)date;
- (BOOL)_exceededMaximumTravelTimeThresholdForHypothesis:(id)hypothesis;
@end

#endif /* CALNDefaultTriggeredEventNotificationTriggerHelper_h */

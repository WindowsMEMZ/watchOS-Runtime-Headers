//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1870.2.1.0.0
//
#ifndef EKFrozenReminderAlarm_h
#define EKFrozenReminderAlarm_h
@import Foundation;

#include "EKFrozenReminderObject.h"
#include "EKFrozenReminderStructuredLocation.h"

@class NSArray, NSString, REMAlarm;

@interface EKFrozenReminderAlarm : EKFrozenReminderObject {
  /* instance variables */
  REMAlarm *_timeAlarm;
  REMAlarm *_locationAlarm;
}

@property (readonly) NSArray *alarms;
@property (readonly) NSArray *triggers;
@property (readonly) NSString *externalID;
@property (readonly) EKFrozenReminderStructuredLocation *structuredLocation;

/* class methods */
+ (Class)meltedClass;
+ (long long)remAlarmProximityToEKAlarmProximity:(long long)proximity;
+ (long long)ekAlarmProximityToEKAlarmProximity:(long long)proximity;
+ (id)triggersFromAbsoluteDate:(id)date relativeOffset:(double)offset timeValuesRelevant:(BOOL)relevant structuredLocation:(id)location proximity:(long long)proximity;
+ (id)uniqueIdentifierForREMObject:(id)remobject;
+ (id)semanticIdentifierFromREMAlarm:(id)remalarm;
+ (id)semanticIdentifierFromDateComponents:(id)components;

/* instance methods */
- (id)initWithREMObject:(id)remobject inStore:(id)store withChanges:(id)changes;
- (id)initWithAlarms:(id)alarms inStore:(id)store;
- (id)initWithAlarms:(id)alarms inStore:(id)store withChanges:(id)changes;
- (id)initWithAlternateUniverseObject:(id)object inEventStore:(id)store withUpdatedChildObjects:(id)objects;
- (id)updatedFrozenObjectWithChanges:(id)changes updatedChildren:(id)children;
- (void)_setTimeAndLocationAlarms:(id)alarms;
- (id)_setTimeOrLocationAlarm:(id)alarm;
- (id)_timeAlarm;
- (id)_locationAlarm;
- (id)remObjectID;
- (id)uniqueIdentifier;
- (double)relativeOffset;
- (id)absoluteDate;
- (id)modifiedStructuredLocation;
- (id)_remStructuredLocation;
- (BOOL)_applyChanges:(id)changes error:(id *)error;
- (BOOL)_applyChangesToSaveRequest:(id)request error:(id *)error;
- (id)updatedAlarmWithLocation:(id)location;
- (long long)proximity;
- (id)UUID;
- (id)_effectiveAlarm;
- (id)acknowledgedDate;
- (long long)type;
- (void)setType:(long long)type;
- (id)emailAddress;
- (void)setEmailAddress:(id)address;
- (id)urlWrapper;
- (void)setUrlWrapper:(id)wrapper;
- (id)snoozedAlarmsSet;
- (id)calendarOwner;
- (void)setCalendarOwner:(id)owner;
- (id)calendarItemOwner;
- (void)setCalendarItemOwner:(id)owner;
- (id)originalAlarm;
- (BOOL)isDefaultAlarm;
@end

#endif /* EKFrozenReminderAlarm_h */

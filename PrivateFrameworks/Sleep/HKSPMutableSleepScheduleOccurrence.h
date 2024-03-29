//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSPMutableSleepScheduleOccurrence_h
#define HKSPMutableSleepScheduleOccurrence_h
@import Foundation;

#include "HKSPSleepScheduleOccurrence.h"
#include "HKSPAlarmConfiguration.h"
#include "HKSPChangeSet.h"
#include "HKSPMutableObject-Protocol.h"
#include "HKSPObject-Protocol.h"
#include "HKSPSleepScheduleDayOccurrence.h"

@class NSDate, NSDateComponents, NSString;

@interface HKSPMutableSleepScheduleOccurrence : HKSPSleepScheduleOccurrence<HKSPMutableObject>

@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *backingOccurrence;
@property (copy, @dynamic, nonatomic) NSDateComponents *bedtimeComponents;
@property (copy, @dynamic, nonatomic) NSDateComponents *wakeUpComponents;
@property (nonatomic) unsigned long long weekdays;
@property (retain, @dynamic, nonatomic) HKSPAlarmConfiguration *alarmConfiguration;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) HKSPChangeSet *changeSet;
@property (readonly, nonatomic) NSObject<HKSPObject> *originalObject;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initFromObject:(id)object;
- (id)initWithCoder:(id)coder;
- (id)initWithTemplateOccurrence:(id)occurrence;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopy;
- (void)freeze;
- (void)revert;
- (void)turnOnWeekdays:(unsigned long long)weekdays;
- (void)turnOffWeekdays:(unsigned long long)weekdays;
- (void)turnOnAlarm;
- (void)turnOffAlarm;
- (void)applyHourAndMinuteFromBedtimeComponents:(id)components wakeUpComponents:(id)components gregorianCalendar:(id)calendar;
@end

#endif /* HKSPMutableSleepScheduleOccurrence_h */

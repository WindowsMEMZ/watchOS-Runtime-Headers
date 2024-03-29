//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSPMutableSleepEventRecord_h
#define HKSPMutableSleepEventRecord_h
@import Foundation;

#include "HKSPSleepEventRecord.h"
#include "HKSPChangeSet.h"
#include "HKSPMutableObject-Protocol.h"
#include "HKSPObject-Protocol.h"

@class NSDate, NSString;

@interface HKSPMutableSleepEventRecord : HKSPSleepEventRecord<HKSPMutableObject>

@property (copy, nonatomic) NSDate *wakeUpEarlyNotificationConfirmedDate;
@property (copy, nonatomic) NSDate *wakeUpConfirmedUntilDate;
@property (copy, nonatomic) NSDate *wakeUpAlarmDismissedDate;
@property (copy, nonatomic) NSDate *wakeUpOverriddenDate;
@property (copy, nonatomic) NSDate *wakeUpAlarmSnoozedUntilDate;
@property (copy, nonatomic) NSDate *goodMorningDismissedDate;
@property (nonatomic) long long sleepCoachingOnboardingCompletedVersion;
@property (copy, nonatomic) NSDate *sleepCoachingOnboardingFirstCompletedDate;
@property (nonatomic) long long sleepTrackingOnboardingCompletedVersion;
@property (copy, nonatomic) NSDate *sleepTrackingOnboardingFirstCompletedDate;
@property (nonatomic) long long sleepWindDownShortcutsOnboardingCompletedVersion;
@property (copy, nonatomic) NSDate *sleepWindDownShortcutsOnboardingFirstCompletedDate;
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
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopy;
- (void)freeze;
- (void)revert;
- (void)updateSleepCoachingOnboardingCompletedVersion:(long long)version completedDate:(id)date;
- (void)updateSleepTrackingOnboardingCompletedVersion:(long long)version completedDate:(id)date;
- (void)updateSleepWindDownShortcutsOnboardingCompletedVersion:(long long)version completedDate:(id)date;
@end

#endif /* HKSPMutableSleepEventRecord_h */

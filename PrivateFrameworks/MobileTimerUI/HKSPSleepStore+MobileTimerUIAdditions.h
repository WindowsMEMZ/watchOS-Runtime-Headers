//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef HKSPSleepStore_MobileTimerUIAdditions_h
#define HKSPSleepStore_MobileTimerUIAdditions_h
@import Foundation;

@interface HKSPSleepStore (MobileTimerUIAdditions)
/* class methods */
+ (id)mt_getDetailedAlarmTitleForDate:(id)date calendar:(id)calendar onlyAppliesOnce:(BOOL)once;

/* instance methods */
- (id)mt_sleepMetaDataForUpcomingAlarmInCalendar:(id)calendar error:(id *)error;
@end

#endif /* HKSPSleepStore_MobileTimerUIAdditions_h */

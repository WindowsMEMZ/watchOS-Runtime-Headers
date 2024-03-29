//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSPSleepScheduleRange_h
#define HKSPSleepScheduleRange_h
@import Foundation;

@class NSDateComponents;

@interface HKSPSleepScheduleRange : NSObject

@property (readonly, copy, nonatomic) NSDateComponents *latestWakeUpComponents;
@property (readonly, copy, nonatomic) NSDateComponents *earliestWakeUpComponents;
@property (readonly, copy, nonatomic) NSDateComponents *latestBedtimeComponents;
@property (readonly, copy, nonatomic) NSDateComponents *earliestBedtimeComponents;
@property (readonly, nonatomic) BOOL earliestBedtimeIsOnPreviousDay;

/* instance methods */
- (id)initWithLatestWakeUpComponents:(id)components latestBedtimeComponents:(id)components earliestWakeUpComponents:(id)components earliestBedtimeComponents:(id)components earliestBedtimeIsOnPreviousDay:(BOOL)day;
- (id)description;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
@end

#endif /* HKSPSleepScheduleRange_h */

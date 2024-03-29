//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 38.0.15.0.0
//
#ifndef SCLScheduleAttributes_h
#define SCLScheduleAttributes_h
@import Foundation;

#include "SCLSchedule.h"

@class NSError;

@interface SCLScheduleAttributes : NSObject

@property (readonly, nonatomic) SCLSchedule *schedule;
@property (readonly, nonatomic) unsigned long long validationOptions;
@property (readonly, nonatomic) BOOL valid;
@property (readonly, nonatomic) NSError *validationError;
@property (readonly, nonatomic) long long scheduledDays;
@property (readonly, nonatomic) BOOL hasUniformIntervals;
@property (readonly, nonatomic) BOOL hasSingleIntervalPerDay;

/* instance methods */
- (id)initWithSchedule:(id)schedule;
- (id)initWithSchedule:(id)schedule options:(unsigned long long)options;
- (void)_prepareWithRecurrences:(id)recurrences;
- (BOOL)isValid;
@end

#endif /* SCLScheduleAttributes_h */

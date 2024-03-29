//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1158.1.1.0.0
//
#ifndef VCSAlarm_h
#define VCSAlarm_h
@import Foundation;

#include "VCSEntity.h"
#include "VCSDate.h"

@class NSString;

@interface VCSAlarm : VCSEntity

@property (readonly, nonatomic) unsigned long long alarmType;
@property (readonly, nonatomic) NSString *summary;
@property (readonly, nonatomic) NSString *body;
@property (readonly, nonatomic) unsigned long long triggerType;
@property (readonly, nonatomic) VCSDate *triggerDate;
@property (readonly, nonatomic) double triggerDuration;

/* class methods */
+ (id)_componentsWithISO8601DurationString:(id)string;

/* instance methods */
- (id)initWithLine:(id)line parseState:(id)state property:(const struct { long long x0; unsigned long long x1; unsigned long long x2; BOOL x3; id x4; } *)property;
- (unsigned long long)entityType;
- (void)ensureRelativeAlarmWithStartDate:(id)date;
- (id)dictify;
@end

#endif /* VCSAlarm_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 503.2.0.0.0
//
#ifndef STDowntimeOverride_h
#define STDowntimeOverride_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSCalendar, NSDate;

@interface STDowntimeOverride : NSObject<NSCopying>

@property (readonly) long long type;
@property (readonly) long long state;
@property (readonly, copy) NSDate *creationDate;
@property (readonly, copy) NSCalendar *calendar;
@property (readonly, copy) NSDate *endDate;

/* class methods */
+ (id)overrideWithState:(long long)state creationDate:(id)date calendar:(id)calendar fixedDuration:(id)duration;
+ (id)overrideWithState:(long long)state creationDate:(id)date calendar:(id)calendar endDate:(id)date;

/* instance methods */
- (id)_initWithType:(long long)type state:(long long)state creationDate:(id)date calendar:(id)calendar endDate:(id)date;
- (BOOL)isActiveAtDate:(id)date;
- (BOOL)isExpiredAtDate:(id)date;
- (long long)modificationBasedOnScheduleChangeAtDate:(id)date;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToDowntimeOverride:(id)override;
- (unsigned long long)hash;
@end

#endif /* STDowntimeOverride_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1870.2.1.0.0
//
#ifndef EKRecurrenceDayOfWeek_h
#define EKRecurrenceDayOfWeek_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface EKRecurrenceDayOfWeek : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) long long dayOfTheWeek;
@property (readonly, nonatomic) long long weekNumber;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)dayOfWeek:(long long)week;
+ (id)dayOfWeek:(long long)week weekNumber:(long long)number;
+ (long long)icsWeekDayFromDayOfTheWeek:(long long)week;

/* instance methods */
- (id)initWithDayOfTheWeek:(long long)week weekNumber:(long long)number;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)iCalendarValueFromDayOfTheWeek:(long long)week;
- (id)iCalendarDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* EKRecurrenceDayOfWeek_h */

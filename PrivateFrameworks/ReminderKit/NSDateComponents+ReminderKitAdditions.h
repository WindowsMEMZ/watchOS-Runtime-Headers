//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef NSDateComponents_ReminderKitAdditions_h
#define NSDateComponents_ReminderKitAdditions_h
@import Foundation;

@interface NSDateComponents (ReminderKitAdditions)
/* class methods */
+ (id)rem_dateComponentsWithDateUsingArchivingTimeZone:(id)zone isAllDay:(BOOL)day;
+ (id)rem_dateComponentsWithDate:(id)date timeZone:(id)zone isAllDay:(BOOL)day;
+ (id)rem_dateWithDateComponentsUsingArchivingTimeZone:(id)zone;
+ (id)rem_dateWithDateComponents:(id)components timeZone:(id)zone;
+ (id)rem_dateComponentsWithYear:(long long)year month:(long long)month day:(long long)day hour:(long long)hour minute:(long long)minute second:(long long)second allDay:(BOOL)day timeZone:(id)zone;

/* instance methods */
- (id)rem_gregorianEquivalent;
- (id)rem_dateComponentsByAddingTimeInterval:(double)interval;
- (id)rem_strippingTimeZone;
- (id)rem_allDayDateComponents;
- (BOOL)rem_isValidDateComponents;
- (BOOL)rem_isAllDayDateComponents;
- (BOOL)rem_isWeekendDateComponents;
- (long long)rem_compare:(id)rem_compare;
- (id)rem_stringRepresentation;
@end

#endif /* NSDateComponents_ReminderKitAdditions_h */

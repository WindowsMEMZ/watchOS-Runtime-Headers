//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDatePickerCalendarMonth_h
#define _UIDatePickerCalendarMonth_h
@import Foundation;

#include "_UIDatePickerCalendarDateComponent.h"
#include "_UIDatePickerCalendarMonth.h"

@interface _UIDatePickerCalendarMonth : _UIDatePickerCalendarDateComponent

@property (readonly, nonatomic) _UIDatePickerCalendarMonth *previousMonth;
@property (readonly, nonatomic) _UIDatePickerCalendarMonth *nextMonth;

/* class methods */
+ (unsigned long long)representedCalendarUnits;

/* instance methods */
- (id)dayWithDate:(id)date assignedMonth:(id)month;
- (id)dayMatchingOrdinalDay:(id)day;
- (id)_monthWithOffset:(long long)offset;
@end

#endif /* _UIDatePickerCalendarMonth_h */

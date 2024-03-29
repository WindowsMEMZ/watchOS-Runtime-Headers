//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef NSDate_HKUIAdditions_h
#define NSDate_HKUIAdditions_h
@import Foundation;

@interface NSDate (HKUIAdditions)
/* class methods */
+ (id)hk_minimumDateForBirthDateWithCalendar:(id)calendar;

/* instance methods */
- (BOOL)hk_animatable;
- (id)hk_midPointToValue:(id)value percentage:(double)percentage;
- (id)hk_dateBeforeDateForCalendar:(id)calendar rangeUnit:(unsigned long long)unit;
- (id)hk_dateWithTruncatedSecond;
- (double)doubleValue;
- (id)hk_dateFromSourceTimeZone:(id)zone;
- (id)hkui_dateNormalizedFromDateInterval:(id)interval toDateInterval:(id)interval;
@end

#endif /* NSDate_HKUIAdditions_h */

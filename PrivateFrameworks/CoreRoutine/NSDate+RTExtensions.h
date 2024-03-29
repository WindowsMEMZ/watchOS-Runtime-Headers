//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 895.0.11.0.2
//
#ifndef NSDate_RTExtensions_h
#define NSDate_RTExtensions_h
@import Foundation;

@interface NSDate (RTExtensions)
/* class methods */
+ (id)startOfDay;
+ (id)endOfDay;
+ (id)stringFromTimestamp:(double)timestamp;
+ (id)dateFormatter;
+ (id)dateWithResolution:(unsigned long long)resolution;
+ (id)dateWithResolution:(unsigned long long)resolution calendar:(id)calendar;
+ (id)dateWithHour:(long long)hour minute:(long long)minute second:(long long)second;
+ (id)dateBisectingDate1:(id)date1 date2:(id)date2;
+ (id)roundingUpDate:(id)date bucketDurationMinute:(int)minute;

/* instance methods */
- (BOOL)betweenDate:(id)date andDate:(id)date;
- (BOOL)isBeforeDate:(id)date;
- (BOOL)isOnOrBefore:(id)before;
- (BOOL)isAfterDate:(id)date;
- (BOOL)isOnOrAfter:(id)after;
- (id)startOfDay;
- (id)endOfDay;
- (unsigned long long)hour;
- (unsigned long long)minute;
- (unsigned long long)weekday;
- (id)weekdayStringFromDate;
- (id)stringFromDate;
- (id)getFormattedDateString;
- (id)dateReducedToResolution:(unsigned long long)resolution;
- (id)dateReducedToResolution:(unsigned long long)resolution calendar:(id)calendar;
- (id)dateByAddingUnit:(unsigned long long)unit value:(long long)value;
- (id)dateByRoundingWithTimeQuantization:(long long)quantization;
@end

#endif /* NSDate_RTExtensions_h */

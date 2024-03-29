//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1547.1.1.3.0
//
#ifndef CalRecurrenceGenerator_h
#define CalRecurrenceGenerator_h
@import Foundation;

@class NSArray, NSCalendar, NSDate, NSTimeZone;

@interface CalRecurrenceGenerator : NSObject {
  /* instance variables */
  NSCalendar *_calendar;
}

@property (copy, nonatomic) NSDate *eventStartDate;
@property (copy, nonatomic) NSDate *eventEndDate;
@property (copy, nonatomic) NSTimeZone *eventTimeZone;
@property (nonatomic) BOOL allDay;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSArray *daysOfTheWeek;
@property (copy, nonatomic) NSArray *daysOfTheMonth;
@property (copy, nonatomic) NSArray *daysOfTheYear;
@property (copy, nonatomic) NSArray *weeksOfTheYear;
@property (copy, nonatomic) NSArray *monthsOfTheYear;
@property (copy, nonatomic) NSArray *setPositions;
@property (nonatomic) int interval;
@property (nonatomic) int frequency;
@property (nonatomic) unsigned long long weekStart;
@property (nonatomic) BOOL shouldPinMonthDays;
@property (nonatomic) BOOL onlyIncludeInitialDateIfItMatchesRecurrence;

/* instance methods */
- (id)init;
- (id)copyOccurrenceDatesWithInitialDate:(id)date allDay:(BOOL)day rangeStart:(id)start rangeEnd:(id)end timeZone:(id)zone limit:(long long)limit;
- (id)computeRecurrenceEndDate:(unsigned long long)date;
- (BOOL)_isSimpleYearlyRecurrence;
- (double)duration;
- (double)convertAbsoluteTime:(double)time fromTimeZone:(id)zone toTimeZone:(id)zone;
- (BOOL)requiresEndDateConversionFromGMTToEventTimeZone;
- (id)copyOccurrenceDatesBetweenStartDate:(id)date endDate:(id)date timeZone:(id)zone limit:(long long)limit;
- (id)_copyDailyOccurrencesWithInitialDate:(id)date startDate:(id)date endDate:(id)date count:(unsigned long long)count;
- (id)_copyWeeklyOccurrencesWithInitialDate:(id)date startDate:(id)date endDate:(id)date count:(unsigned long long)count;
- (id)_copyMonthlyOccurrencesWithInitialDate:(id)date startDate:(id)date endDate:(id)date count:(unsigned long long)count;
- (BOOL)_validateCalDate:(struct { int x0; char x1; char x2; char x3; char x4; double x5; })date pinned:(BOOL)pinned;
- (id)_copyYearlyOccurrencesWithInitialDate:(id)date startDate:(id)date endDate:(id)date count:(unsigned long long)count;
@end

#endif /* CalRecurrenceGenerator_h */

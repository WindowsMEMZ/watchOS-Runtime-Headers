//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKDateCache_h
#define HKDateCache_h
@import Foundation;

@class NSCalendar, NSDate, NSHashTable, NSSet;

@interface HKDateCache : NSObject {
  /* instance variables */
  NSDate *_startOfRollingYear;
  NSDate *_endOfRollingYear;
  NSDate *_currentDate;
  NSHashTable *_observers;
  NSSet *_weekendDays;
}

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSDate *startOfYesterdayMidnight;
@property (readonly, nonatomic) NSDate *endOfYesterdayMidnight;
@property (readonly, nonatomic) NSDate *startOfDayMidnight;
@property (readonly, nonatomic) NSDate *endOfDayMidnight;
@property (readonly, nonatomic) NSDate *oneMinuteBeforeEndOfDayMidnight;
@property (readonly, nonatomic) NSDate *oneSecondBeforeEndOfDayMidnight;
@property (readonly, nonatomic) NSDate *startOfTomorrowMidnight;
@property (readonly, nonatomic) NSDate *endOfTomorrowMidnight;
@property (readonly, nonatomic) NSDate *startOfRollingWeekMidnight;
@property (readonly, nonatomic) NSDate *endOfRollingWeekMidnight;
@property (readonly, nonatomic) NSDate *startOfRollingMonthMidnight;
@property (readonly, nonatomic) NSDate *endOfRollingMonthMidnight;
@property (readonly, nonatomic) NSDate *startOfRollingYearMidnight;
@property (readonly, nonatomic) NSDate *endOfRollingYearMidnight;

/* instance methods */
- (id)initWithCalendar:(id)calendar;
- (id)init;
- (void)dealloc;
- (void)_setCurrentDate:(id)date;
- (id)_currentDate;
- (id)startOfRollingDay:(id /* block */)day;
- (id)endOfRollingDay:(id /* block */)day;
- (id)startOfRollingWeek:(id /* block */)week;
- (id)endOfRollingWeek:(id /* block */)week;
- (id)startOfRollingMonth:(id /* block */)month;
- (id)endOfRollingMonth:(id /* block */)month;
- (id)startOfRollingYear:(id /* block */)year;
- (id)endOfRollingYear:(id /* block */)year;
- (void)registerObserver:(id)observer;
- (void)unregisterObserver:(id)observer;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)_notifyObserversDidUpdateOnNotification:(id)notification;
- (id)weekendDays;
- (BOOL)isDateInYesterday:(id)yesterday;
- (BOOL)isDateInToday:(id)today;
- (BOOL)isDateInTomorrow:(id)tomorrow;
- (BOOL)isDateInThisCalendarMonth:(id)month;
- (BOOL)isDateInThisCalendarYear:(id)year;
- (BOOL)isDateWithinLastRollingMonth:(id)month;
- (BOOL)isDateWithinLastRollingYear:(id)year;
- (BOOL)isDayOfWeekNumberOnWeekend:(id)weekend;
- (void)flushCache;
- (void)_flushCacheAndNotifyObservers:(id)observers;
@end

#endif /* HKDateCache_h */

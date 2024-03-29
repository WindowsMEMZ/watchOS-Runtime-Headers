//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 573.2.0.0.0
//
#ifndef ACHActivityAwardingDateCache_h
#define ACHActivityAwardingDateCache_h
@import Foundation;

@class NSCalendar, NSDate, NSDateComponents, NSNumber;

@interface ACHActivityAwardingDateCache : NSObject

@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSDate *currentDate;
@property (retain, nonatomic) NSDateComponents *currentDateComponents;
@property (readonly, nonatomic) NSNumber *dayOfWeekForToday;
@property (readonly, nonatomic) NSNumber *dayOfWeekForLastDayOfFitnessWeek;
@property (readonly, nonatomic) NSNumber *numberOfDaysInThisMonth;
@property (readonly, nonatomic) NSNumber *dayOfMonthForToday;

/* instance methods */
- (id)initWithCalendar:(id)calendar;
- (void)_clearDateVariables;
@end

#endif /* ACHActivityAwardingDateCache_h */

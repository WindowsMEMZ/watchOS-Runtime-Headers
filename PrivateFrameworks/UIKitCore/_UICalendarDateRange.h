//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICalendarDateRange_h
#define _UICalendarDateRange_h
@import Foundation;

@class NSDateComponents;

@interface _UICalendarDateRange : NSObject

@property (readonly, nonatomic) NSDateComponents *startDate;
@property (readonly, nonatomic) NSDateComponents *endDate;

/* instance methods */
- (id)initWithStartDate:(id)date endDate:(id)date;
- (id)allDatesInRangeForCalendar:(id)calendar;
@end

#endif /* _UICalendarDateRange_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef BSDateFormatterCache_h
#define BSDateFormatterCache_h
@import Foundation;

@class NSDateComponentsFormatter, NSDateFormatter, NSLocale, NSNumberFormatter;

@interface BSDateFormatterCache : NSObject {
  /* instance variables */
  NSLocale *_locale;
  NSDateFormatter *_dayOfWeekFormatter;
  NSDateFormatter *_dayOfWeekWithTimeFormatter;
  NSDateFormatter *_dayMonthYearFormatter;
  NSDateFormatter *_shortDayMonthTimeFormatter;
  NSDateFormatter *_abbrevDayOfWeekWithMonthDayFormatter;
  NSDateFormatter *_abbrevDayMonthFormatter;
  NSDateFormatter *_abbrevDayMonthTimeFormatter;
  NSDateFormatter *_timeFormatter;
  NSDateFormatter *_relativeDateTimeFormatter;
  NSDateFormatter *_relativeDateFormatter;
  NSDateFormatter *_dayOfWeekMonthDayFormatter;
  NSDateFormatter *_multiLineDayOfWeekMonthDayFormatter;
  NSDateFormatter *_timeNoAMPMFormatter;
  NSDateFormatter *_longYMDHMSZFormatter;
  NSDateFormatter *_longYMDHMSZPosixLocaleFormatter;
  NSDateFormatter *_longYMDHMSNoSpaceFormatter;
  NSNumberFormatter *_decimalFormatter;
  NSDateComponentsFormatter *_durationFormatter;
  NSNumberFormatter *_timerNumberFormatter;
  NSDateComponentsFormatter *_abbreviatedTimerFormatter;
  NSDateComponentsFormatter *_alarmSnoozeFormatter;
}

/* class methods */
+ (id)sharedInstance;
+ (id)formatterForDateAsTimeNoAMPMWithLocale:(id)locale;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)resetFormattersIfNecessary;
- (id)formatNumberAsDecimal:(id)decimal;
- (id)formatDateAsDayOfWeek:(id)week;
- (id)formatDateAsAbbreviatedDayOfWeekWithTime:(id)time;
- (id)formatDateAsDayMonthYearStyle:(id)style;
- (id)formatDateAsShortDayMonthWithTimeStyle:(id)style;
- (id)formatDateAsAbbreviatedDayOfWeekMonthDayStyle:(id)style;
- (id)formatDateAsAbbreviatedDayMonthStyle:(id)style;
- (id)formatDateAsAbbreviatedDayMonthWithTimeStyle:(id)style;
- (id)formatDateAsTimeStyle:(id)style;
- (id)formatDateAsRelativeDateAndTimeStyle:(id)style;
- (id)formatDateAsDayOfWeekMonthDayStyle:(id)style;
- (id)formatDateAsMultiLineDayOfWeekMonthDayStyle:(id)style;
- (id)formatDateAsTimeNoAMPM:(id)ampm;
- (id)formatDateAsLongYMDHMSZWithDate:(id)date;
- (id)formatDateAsLongYMDHMSZPosixLocaleWithDate:(id)date;
- (id)formatDateAsLongYMDHMSNoSpacesWithDate:(id)date;
- (id)formatDateAsRelativeDateStyle:(id)style;
- (id)formatDuration:(double)duration;
- (id)formatTimerDuration:(double)duration;
- (id)formatAbbreviatedTimerDuration:(double)duration;
- (id)formatAlarmSnoozeDuration:(double)duration;
- (BOOL)supportsMultiLineDayOfWeekMonthDayStyle;
- (void)_resetFormatters:(id)formatters;
- (void)_resetFormatters;
@end

#endif /* BSDateFormatterCache_h */

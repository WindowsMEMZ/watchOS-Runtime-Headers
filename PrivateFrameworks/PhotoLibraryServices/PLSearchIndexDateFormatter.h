//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLSearchIndexDateFormatter_h
#define PLSearchIndexDateFormatter_h
@import Foundation;

#include "PLDateRangeFormatter.h"

@class NSArray, NSDateFormatter, NSString;
@protocol OS_dispatch_queue;

@interface PLSearchIndexDateFormatter : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSDateFormatter *_dateFormatter;
  PLDateRangeFormatter *_dateRangeFormatter;
  NSString *_yearFormat;
  NSString *_monthFormat;
  NSString *_displayFormat;
  NSString *_parseFormat;
  NSArray *_monthSymbols;
  BOOL _didSetupLocaleAndFormats;
}

/* class methods */
+ (id)yearFormatForLocale:(id)locale;
+ (id)monthFormatForLocale:(id)locale;

/* instance methods */
- (id)init;
- (id)_arrangedMonthSymbols;
- (void)_inqSetupDateFormatter;
- (void)_inqUpdateDateFormat:(id)format;
- (id)localizedSeasonNameFromDate:(id)date;
- (id)localizedMonthStringsFromDate:(id)date;
- (id)newLocalizedComponentsFromDate:(id)date includeMonth:(BOOL)month;
- (id)_inqNewLocalizedStringFromDate:(id)date;
- (id)newLocalizedStringFromDate:(id)date;
- (id)newLocalizedStringFromYear:(id)year month:(id)month;
- (id)formattedDateRangeWithStartDate:(id)date endDate:(id)date;
@end

#endif /* PLSearchIndexDateFormatter_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKHRAFibBurdenTachogramClassificationsRetriever_h
#define HKHRAFibBurdenTachogramClassificationsRetriever_h
@import Foundation;

@class HDProfile, HKCalendarCache, HKSeriesType;

@interface HKHRAFibBurdenTachogramClassificationsRetriever : NSObject {
  /* instance variables */
  HDProfile *_profile;
  HKSeriesType *_seriesType;
  HKCalendarCache *_calendarCache;
  id /* block */ _dateGenerator;
}

/* instance methods */
- (id)initWithProfile:(id)profile calendarCache:(id)cache;
- (id)initWithProfile:(id)profile dateGenerator:(id /* block */)generator calendarCache:(id)cache;
- (id)tachogramClassificationsDayIndexRange:(struct { long long x0; long long x1; })range tachogramClassifier:(id)classifier error:(id *)error;
- (id)tachogramClassificationsForLastSixWeeksOfWeekday:(long long)weekday tachogramClassifier:(id)classifier error:(id *)error;
- (id)tachogramClassificationsForLastSixWeeksOfHoursFrom:(long long)from to:(long long)to julianDayToMajorityTimeZone:(id)zone tachogramClassifier:(id)classifier error:(id *)error;
- (id)_tachogramClassificationsWithPredicate:(id)predicate tachogramClassifier:(id)classifier error:(id *)error dayIndexBlock:(id /* block */)block filterBlock:(id /* block */)block;
- (id)_totalDatePredicateForStartDayIndex:(long long)index endDayIndex:(long long)index;
- (BOOL)_shouldAnalyzeSample:(id)sample;
@end

#endif /* HKHRAFibBurdenTachogramClassificationsRetriever_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDMCDaySummaryEnumerator_h
#define HDMCDaySummaryEnumerator_h
@import Foundation;

@class HDMultiTypeSortedSampleIterator, HDProfile, HKCalendarCache, NSArray;

@interface HDMCDaySummaryEnumerator : NSObject {
  /* instance variables */
  HDProfile *_profile;
  struct { long long start; long long duration; } _dayIndexRange;
  HDMultiTypeSortedSampleIterator *_iterator;
  BOOL _ascending;
  HKCalendarCache *_calendarCache;
}

@property (readonly, copy, nonatomic) NSArray *orderedWatchSources;

/* class methods */
+ (id)daySummaryAtIndex:(long long)index profile:(id)profile calendarCache:(id)cache error:(id *)error;
+ (id)daySummariesInIndexRange:(struct { long long x0; long long x1; })range profile:(id)profile calendarCache:(id)cache error:(id *)error;

/* instance methods */
- (id)initWithProfile:(id)profile calendarCache:(id)cache dayIndexRange:(struct { long long x0; long long x1; })range ascending:(BOOL)ascending includeFactors:(BOOL)factors includeWristTemperature:(BOOL)temperature;
- (BOOL)enumerateWithError:(id *)error handler:(id /* block */)handler;
- (void)_closeBuilders:(id)builders withIndexes:(id)indexes handler:(id /* block */)handler stop:(BOOL *)stop;
- (void)_addSample:(id)sample toBuilders:(id)builders atDayIndex:(long long)index;
- (void)_addSample:(id)sample toBuilders:(id)builders sampleRange:(struct { long long x0; long long x1; })range;
- (void)_addSample:(id)sample toBuilders:(id)builders inRange:(struct { long long x0; long long x1; })range;
@end

#endif /* HDMCDaySummaryEnumerator_h */

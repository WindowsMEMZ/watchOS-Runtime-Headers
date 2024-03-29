//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSAlwaysOnTimeline_h
#define BLSAlwaysOnTimeline_h
@import Foundation;

@protocol NSObject><NSCopying;

@interface BLSAlwaysOnTimeline : NSObject {
  /* instance variables */
  id /* block */ _configureEntryBlock;
}

@property (readonly, nonatomic) NSObject<NSObject><NSCopying> *identifier;

/* class methods */
+ (id)emptyTimelineWithIdentifier:(id)identifier;
+ (id)timelineWithPerMinuteUpdateFrequency:(long long)frequency identifier:(id)identifier configure:(id /* block */)configure;
+ (id)everyMinuteTimelineWithIdentifier:(id)identifier configure:(id /* block */)configure;
+ (id)timelineWithUpdateInterval:(double)interval startDate:(id)date identifier:(id)identifier configure:(id /* block */)configure;
+ (id)timelineWithEntries:(id)entries identifier:(id)identifier configure:(id /* block */)configure;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfEntries:(id)entries forDateInterval:(id)interval shouldIncludePrevious:(BOOL)previous;
+ (id)uncoalescedFrameSpecifiersForTimelines:(id)timelines dateInterval:(id)interval shouldConstructStartSpecifier:(BOOL)specifier framesPerSecond:(double)second previousSpecifier:(id)specifier;
+ (id)coalescedSpecifierFromEnumerator:(id)enumerator forDateInterval:(id)interval framesPerSecond:(double)second previousSpecifier:(id)specifier;
+ (id)coalesceSpecifiers:(id)specifiers forDateInterval:(id)interval framesPerSecond:(double)second previousSpecifier:(id)specifier;
+ (id)constructFrameSpecifiersForTimelines:(id)timelines dateInterval:(id)interval shouldConstructStartSpecifier:(BOOL)specifier framesPerSecond:(double)second previousSpecifier:(id)specifier;

/* instance methods */
- (id)initWithIdentifier:(id)identifier configure:(id /* block */)configure;
- (id)configureEntry:(id)entry previousEntry:(id)entry;
- (long long)requestedFidelityForStartEntryInDateInterval:(id)interval withPreviousEntry:(id)entry;
- (id)unconfiguredEntriesForDateInterval:(id)interval previousEntry:(id)entry;
- (id)configuredEntriesForDateInterval:(id)interval previousEntry:(id)entry shouldConstructStartEntry:(BOOL)entry;
@end

#endif /* BLSAlwaysOnTimeline_h */

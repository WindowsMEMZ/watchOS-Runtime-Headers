//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKInteractiveChartOverlaySleepViewController_h
#define HKInteractiveChartOverlaySleepViewController_h
@import Foundation;

#include "HKInteractiveChartOverlayViewController.h"
#include "HKSleepStageDayAxisDelegate-Protocol.h"

@class NSString;

@interface HKInteractiveChartOverlaySleepViewController : HKInteractiveChartOverlayViewController<HKSleepStageDayAxisDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)sleepDaySummaryForDate:(id)date;
- (void)configureDisplayTypes:(id)types timeScope:(long long)scope stackOffset:(long long)offset;
- (long long)defaultAlignmentForTimeScope:(long long)scope;
- (id)makePrimaryGraphViewControllerWithDateZoom:(long long)zoom previousDateZoom:(long long)zoom previousXAxisSpace:(double)space currentCalendar:(id)calendar;
- (id)_dayTimeScopeDateAxisStyleWithTextAlignment:(long long)alignment hyphenationFactor:(id)factor;
- (id)addNoDataEntries:(id)entries timeScope:(long long)scope targetSeries:(id)series;
- (id)descriptionForStartX:(double)x endX:(double)x chartData:(id)data timeScope:(long long)scope resolution:(long long)resolution graphView:(id)view;
- (BOOL)_isSleepSeries:(id)series;
- (void)graphView:(id)view didUpdateSeries:(id)series newDataArrived:(BOOL)arrived changeContext:(long long)context;
- (id)dateRangeFromSelectionContext:(id)context timeScope:(long long)scope;
- (void)updateSelectionAnnotationDataSourceForContext:(id)context displayType:(id)type timeScope:(long long)scope resolution:(long long)resolution;
- (id)stringForValueRange:(id)range timeScope:(long long)scope;
- (long long)effectiveAnnotationTimeScopeForTimeScope:(long long)scope displayType:(id)type segmentIndex:(long long)index sectionIndex:(long long)index;
- (id)_customDateAxisForTimeScope:(long long)scope segmentIndex:(long long)index sectionIndex:(long long)index currentCalendar:(id)calendar;
- (id)_sleepAnalysisDayAxisWithCalendar:(id)calendar;
- (id)_sleepComparisonDayAxisWithCalendar:(id)calendar;
- (id)_sleepStageDurationDayAxisWithCalendar:(id)calendar;
- (id)_sleepStageDayAxisWithCalendar:(id)calendar;
@end

#endif /* HKInteractiveChartOverlaySleepViewController_h */

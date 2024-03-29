//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKHRAFibBurdenSevenDayAnalysisModeDeterminer_h
#define HKHRAFibBurdenSevenDayAnalysisModeDeterminer_h
@import Foundation;

@class HDProfile, HKCalendarCache;

@interface HKHRAFibBurdenSevenDayAnalysisModeDeterminer : NSObject {
  /* instance variables */
  HDProfile *_profile;
  HKCalendarCache *_calendarCache;
}

/* instance methods */
- (id)initWithProfile:(id)profile calendarCache:(id)cache;
- (id)determineModeForAnalysisWeekRange:(struct { long long x0; long long x1; })range featureStatus:(id)status error:(id *)error;
- (id)_onboardingDateDayIndexWithFeatureStatus:(id)status error:(id *)error;
- (id)_mostRecentSampleEndDateDayIndexWithError:(id *)error;
@end

#endif /* HKHRAFibBurdenSevenDayAnalysisModeDeterminer_h */

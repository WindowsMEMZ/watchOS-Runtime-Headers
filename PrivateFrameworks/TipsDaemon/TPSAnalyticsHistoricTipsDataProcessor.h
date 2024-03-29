//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSAnalyticsHistoricTipsDataProcessor_h
#define TPSAnalyticsHistoricTipsDataProcessor_h
@import Foundation;

#include "TPSAnalyticsProcessor.h"

@class NSDate;

@interface TPSAnalyticsHistoricTipsDataProcessor : TPSAnalyticsProcessor {
  /* instance variables */
  NSDate *_currentDate;
}

/* instance methods */
- (id)init;
- (void)processAnalytics:(id /* block */)analytics;
- (void)resetAnalytics;
- (void)updateDisplayedCount:(long long *)count andFrequencyControlCount:(long long *)count forTipStatus:(id)status andLookbackDate:(id)date;
- (unsigned long long)_daysBetweenDate:(id)date andOtherDate:(id)date;
- (BOOL)_shouldProceedWithCrunching;
- (id)_furthestLookbackDate;
@end

#endif /* TPSAnalyticsHistoricTipsDataProcessor_h */

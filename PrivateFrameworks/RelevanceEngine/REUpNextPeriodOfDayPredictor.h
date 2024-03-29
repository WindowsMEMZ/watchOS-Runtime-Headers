//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REUpNextPeriodOfDayPredictor_h
#define REUpNextPeriodOfDayPredictor_h
@import Foundation;

#include "REObservableSingleton.h"

@class NSDateInterval;

@interface REUpNextPeriodOfDayPredictor : REObservableSingleton

@property (readonly, nonatomic) unsigned long long currentPeriodOfDay;
@property (readonly, nonatomic) NSDateInterval *intervalForCurrentPeriodOfDay;

/* instance methods */
- (id)dateIntervalForNextPeriodOfDay:(unsigned long long)day;
- (id)dateIntervalForPreviousPeriodOfDay:(unsigned long long)day;
@end

#endif /* REUpNextPeriodOfDayPredictor_h */

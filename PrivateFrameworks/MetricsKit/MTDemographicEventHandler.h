//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.8.10.0.0
//
#ifndef MTDemographicEventHandler_h
#define MTDemographicEventHandler_h
@import Foundation;

#include "MTEventHandler.h"

@interface MTDemographicEventHandler : MTEventHandler
/* instance methods */
- (id)ageDataForUserId:(id)id updateInterval:(double)interval;
- (void)clearUserDefaultsForTopic:(id)topic;
- (id)totalYearsSinceDate:(id)date calendar:(id)calendar;
- (id)eventVersion:(id)version;
- (id)eventType;
- (BOOL)mtIncludeBaseFields;
@end

#endif /* MTDemographicEventHandler_h */

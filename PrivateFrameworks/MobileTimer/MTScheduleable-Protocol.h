//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTScheduleable_Protocol_h
#define MTScheduleable_Protocol_h
@import Foundation;

@protocol MTScheduleable <NAEquatable, NSCopying>
/* instance methods */
- (id)identifier;
- (BOOL)shouldBeScheduled;
- (id)upcomingTriggersAfterDate:(id)date;
@optional
/* instance methods */
- (BOOL)isSingleTime;
- (BOOL)isSleepItem;
- (BOOL)isItemEnabled;
- (void)scheduleOverridenForDate:(id)date;
- (BOOL)overridesScheduledObject:(id)object calendar:(id)calendar;
@end

#endif /* MTScheduleable_Protocol_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CLKCComplicationDataSourceDelegate_Protocol_h
#define CLKCComplicationDataSourceDelegate_Protocol_h
@import Foundation;

@protocol CLKCComplicationDataSourceDelegate <NSObject>
/* instance methods */
- (void)invalidateEntries;
- (void)invalidateEntriesWithTritiumUpdatePriority:(long long)priority;
- (void)setTimelineEndDate:(id)date;
- (void)appendEntries:(id)entries;
- (void)appendEntries:(id)entries withTritiumUpdatePriority:(long long)priority;
- (double)minimumIntervalBetweenTimelineEntries;
- (void)invalidateSwitcherTemplate;
@end

#endif /* CLKCComplicationDataSourceDelegate_Protocol_h */

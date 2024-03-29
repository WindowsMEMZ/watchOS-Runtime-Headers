//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTTimerClient_Protocol_h
#define MTTimerClient_Protocol_h
@import Foundation;

@protocol MTTimerClient <NSObject>
/* instance methods */
- (void)timersAdded:(id)added;
- (void)timersUpdated:(id)updated;
- (void)timersRemoved:(id)removed;
- (void)timerFired:(id)fired;
- (void)timerDismissed:(id)dismissed;
- (void)nextTimerChanged:(id)changed;
- (void)recentTimerDurationsUpdated:(id)updated;
- (void)favoriteTimerDurationsUpdated:(id)updated;
- (void)latestTimerDurationUpdated:(id)updated;
@end

#endif /* MTTimerClient_Protocol_h */

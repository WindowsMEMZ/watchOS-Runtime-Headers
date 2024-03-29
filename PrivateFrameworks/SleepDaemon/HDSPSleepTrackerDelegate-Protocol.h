//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPSleepTrackerDelegate_Protocol_h
#define HDSPSleepTrackerDelegate_Protocol_h
@import Foundation;

@protocol HDSPSleepTrackerDelegate <NSObject>
/* instance methods */
- (void)sleepTrackerDidStartSession:(id)session;
- (void)sleepTracker:(id)tracker didEndSession:(id)session reason:(unsigned long long)reason;
@end

#endif /* HDSPSleepTrackerDelegate_Protocol_h */

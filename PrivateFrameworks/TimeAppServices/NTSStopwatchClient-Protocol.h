//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 912.3.3.0.0
//
#ifndef NTSStopwatchClient_Protocol_h
#define NTSStopwatchClient_Protocol_h
@import Foundation;

@protocol NTSStopwatchClient <NSObject>
/* instance methods */
- (void)updateModelWithState:(long long)state startTotalTime:(double)time elapsedTotalTime:(double)time startLapTime:(double)time elapsedLapTime:(double)time laps:(id)laps;
@end

#endif /* NTSStopwatchClient_Protocol_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTDisableAlarmIntentHandling_Protocol_h
#define MTDisableAlarmIntentHandling_Protocol_h
@import Foundation;

@protocol MTDisableAlarmIntentHandling <NSObject>
/* instance methods */
- (void)handleDisableAlarm:(id)alarm completion:(id /* block */)completion;
@optional
/* instance methods */
- (void)confirmDisableAlarm:(id)alarm completion:(id /* block */)completion;
@end

#endif /* MTDisableAlarmIntentHandling_Protocol_h */

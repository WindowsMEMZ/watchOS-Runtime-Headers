//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSVoiceTriggerHearstAPEnabledPolicy_h
#define CSVoiceTriggerHearstAPEnabledPolicy_h
@import Foundation;

#include "CSPolicy.h"

@interface CSVoiceTriggerHearstAPEnabledPolicy : CSPolicy
/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)_subscribeEventMonitors;
- (void)_addVoiceTriggerHearstAPEnabledPolicy;
- (BOOL)_isOtherStreamsActiveOnDoAPRoute;
@end

#endif /* CSVoiceTriggerHearstAPEnabledPolicy_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTUpdateTimerIntentHandler_h
#define MTUpdateTimerIntentHandler_h
@import Foundation;

#include "MTTimerIntentHandler.h"

@interface MTUpdateTimerIntentHandler : MTTimerIntentHandler
/* instance methods */
- (void)_updateTimer:(id)timer dryRun:(BOOL)run updateBlock:(id /* block */)block completion:(id /* block */)completion;
- (void)_updateTimer:(id)timer dryRun:(BOOL)run allowMultiple:(BOOL)multiple excludeStoppedTimers:(BOOL)timers filterBlock:(id /* block */)block updateBlock:(id /* block */)block completion:(id /* block */)completion;
- (id)_timerFromIntentTargetTimer:(id)timer defaultState:(long long)state;
@end

#endif /* MTUpdateTimerIntentHandler_h */

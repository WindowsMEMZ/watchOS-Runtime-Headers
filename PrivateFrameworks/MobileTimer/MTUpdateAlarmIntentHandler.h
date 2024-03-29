//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTUpdateAlarmIntentHandler_h
#define MTUpdateAlarmIntentHandler_h
@import Foundation;

#include "MTAlarmIntentHandler.h"
#include "MTUpdateAlarmIntentHandling-Protocol.h"

@class NSString;

@interface MTUpdateAlarmIntentHandler : MTAlarmIntentHandler<MTUpdateAlarmIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)confirmUpdateAlarm:(id)alarm completion:(id /* block */)completion;
- (void)handleUpdateAlarm:(id)alarm completion:(id /* block */)completion;
- (id)_alarmUserActivityWithIntent:(id)intent;
- (void)confirmMTUpdateAlarm:(id)alarm completion:(id /* block */)completion;
- (void)handleMTUpdateAlarm:(id)alarm completion:(id /* block */)completion;
@end

#endif /* MTUpdateAlarmIntentHandler_h */

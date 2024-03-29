//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTSetTimerAttributeIntentHandler_h
#define MTSetTimerAttributeIntentHandler_h
@import Foundation;

#include "MTUpdateTimerIntentHandler.h"
#include "INSetTimerAttributeIntentHandling-Protocol.h"

@class NSString;

@interface MTSetTimerAttributeIntentHandler : MTUpdateTimerIntentHandler<INSetTimerAttributeIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)handleSetTimerAttribute:(id)attribute completion:(id /* block */)completion;
- (void)confirmSetTimerAttribute:(id)attribute completion:(id /* block */)completion;
- (void)resolveToDurationForSetTimerAttribute:(id)attribute withCompletion:(id /* block */)completion;
- (void)resolveTargetTimerForSetTimerAttribute:(id)attribute withCompletion:(id /* block */)completion;
- (id)_responseToSetTimerAttributeIntent:(id)intent withUpdatedTimer:(id)timer error:(id)error dryRun:(BOOL)run;
- (void)_updateTimer:(id)timer toDuration:(double)duration toLabel:(id)label dryRun:(BOOL)run completion:(id /* block */)completion;
@end

#endif /* MTSetTimerAttributeIntentHandler_h */

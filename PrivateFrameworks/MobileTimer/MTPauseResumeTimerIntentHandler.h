//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTPauseResumeTimerIntentHandler_h
#define MTPauseResumeTimerIntentHandler_h
@import Foundation;

#include "MTUpdateTimerIntentHandler.h"
#include "INPauseTimerIntentHandling-Protocol.h"
#include "INResumeTimerIntentHandling-Protocol.h"

@class NSString;

@interface MTPauseResumeTimerIntentHandler : MTUpdateTimerIntentHandler<INPauseTimerIntentHandling, INResumeTimerIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)resolveTargetTimerForPauseTimer:(id)timer withCompletion:(id /* block */)completion;
- (void)resolvePauseMultipleForPauseTimer:(id)timer withCompletion:(id /* block */)completion;
- (void)confirmPauseTimer:(id)timer completion:(id /* block */)completion;
- (void)handlePauseTimer:(id)timer completion:(id /* block */)completion;
- (void)_handlePauseTimer:(id)timer dryRun:(BOOL)run completion:(id /* block */)completion;
- (void)resolveTargetTimerForResumeTimer:(id)timer withCompletion:(id /* block */)completion;
- (void)resolveResumeMultipleForResumeTimer:(id)timer withCompletion:(id /* block */)completion;
- (void)confirmResumeTimer:(id)timer completion:(id /* block */)completion;
- (void)handleResumeTimer:(id)timer completion:(id /* block */)completion;
- (void)_handleResumeTimer:(id)timer dryRun:(BOOL)run completion:(id /* block */)completion;
- (id)_responseToPauseTimerIntent:(id)intent withPausedTimers:(id)timers error:(id)error dryRun:(BOOL)run;
- (id)_responseToResumeTimerIntent:(id)intent withResumedTimers:(id)timers error:(id)error dryRun:(BOOL)run;
@end

#endif /* MTPauseResumeTimerIntentHandler_h */

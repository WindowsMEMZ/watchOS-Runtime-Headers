//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 498.300.11.0.0
//
#ifndef SOSCoreAnalyticsReporter_h
#define SOSCoreAnalyticsReporter_h
@import Foundation;

#include "SOSCoreAnalyticsReporting-Protocol.h"

@class NSString;

@interface SOSCoreAnalyticsReporter : NSObject<SOSCoreAnalyticsReporting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;
+ (void)reportSOSShouldPlayAudioDuringCountdown:(BOOL)countdown;
+ (void)reportSOSAutomaticCallCountdownEnabled:(BOOL)enabled;
+ (void)reportSOSLongPressTriggersEmergencySOS:(BOOL)sos;
+ (void)reportSOSAutomaticNewtonEnabled:(BOOL)enabled;
+ (void)reportSOSNumberOfVoiceLoops:(long long)loops;
+ (BOOL)isSensitiveTrigger:(long long)trigger;
+ (void)_AnalyticsSendEventLazy:(id)lazy data:(id)data;
+ (BOOL)_firstPartyEnablementForTrigger:(long long)trigger;
+ (BOOL)_thirdPartyEnablementForTrigger:(long long)trigger;
+ (id)SOSCoordinationDeviceString:(long long)string;

/* instance methods */
- (void)reportSOSTriggered:(long long)sostriggered;
- (void)reportSOSUserCancelled:(long long)cancelled lastFlowState:(long long)state countdownValue:(long long)value;
- (void)reportSOSTriggerHandoff:(long long)handoff source:(long long)source destination:(long long)destination result:(long long)result;
- (void)reportSOSRejectedWithTrigger:(long long)trigger currentTriggerMechanism:(long long)mechanism;
- (void)reportSOSRestingResponse:(long long)response restingResponse:(long long)response hasMedicalID:(BOOL)id;
- (void)reportSOSCancelationTimeout:(long long)timeout;
- (void)reportSOSEvent:(id)sosevent callDuration:(long long)duration isHandoffTrigger:(BOOL)trigger onWristState:(long long)state;
@end

#endif /* SOSCoreAnalyticsReporter_h */

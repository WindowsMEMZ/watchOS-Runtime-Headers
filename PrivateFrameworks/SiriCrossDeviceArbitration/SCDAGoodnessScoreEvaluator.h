//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.9.1.0.0
//
#ifndef SCDAGoodnessScoreEvaluator_h
#define SCDAGoodnessScoreEvaluator_h
@import Foundation;

#include "SCDAAssistantPreferences.h"
#include "SCDAInstrumentation.h"

@class AFInstanceContext, AFSettingsConnection;
@protocol OS_dispatch_queue;

@interface SCDAGoodnessScoreEvaluator : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _scoreEvaluationLock;
  unsigned char _myriadPlatformBias;
  AFInstanceContext *_deviceInstanceContext;
  unsigned long long _platformBiasAcquisitionState;
  SCDAAssistantPreferences *_pref;
  AFSettingsConnection *_settingsConnection;
  SCDAInstrumentation *_myriadInstrumentation;
}

@property (readonly, nonatomic) BOOL evaluateForAudioAccessory;
@property (nonatomic) double lastActivationTime;

/* instance methods */
- (id)initWithDeviceInstanceContext:(id)context queue:(id)queue;
- (id)initWithDeviceInstanceContext:(id)context preferences:(id)preferences queue:(id)queue;
- (id)initWithDeviceInstanceContext:(id)context preferences:(id)preferences queue:(id)queue instrumentation:(id)instrumentation;
- (unsigned char)_getRecentBump:(double)bump ignoreAdjustedBoost:(BOOL)boost recentlyWonBySmallAmount:(BOOL)amount;
- (unsigned char)getPlatformBias;
- (unsigned char)_bumpGoodnessScore:(id)score lastActivationTime:(double)time mediaPlaybackInterruptedTime:(double)time ignoreAdjustedBoost:(BOOL)boost recentlyWonBySmallAmount:(BOOL)amount;
- (void)_updatePlatformBias:(unsigned char)bias;
- (id)_createSettingsConnectionIfRequired;
- (void)_fetchDevicePlatformBiasIfRequired;
- (BOOL)_supportsConfigurableBoost;
- (void)_updateBiasValueWithDefault:(unsigned long long)default;
- (void)preheat;
- (unsigned char)getMyriadAdjustedBoostForGoodnessScoreContext:(id)context;
@end

#endif /* SCDAGoodnessScoreEvaluator_h */

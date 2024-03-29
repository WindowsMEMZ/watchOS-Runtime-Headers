//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 543.100.1.0.0
//
#ifndef PCMultiStageGrowthAlgorithm_h
#define PCMultiStageGrowthAlgorithm_h
@import Foundation;

#include "PCGrowthAlgorithm-Protocol.h"

@class NSDate, NSDictionary, NSString;
@protocol OS_os_log;

@interface PCMultiStageGrowthAlgorithm : NSObject<PCGrowthAlgorithm> {
  /* instance variables */
  double _previousMaximumKeepAliveInterval;
  double _lastKeepAliveInterval;
  double _highWatermark;
  double _initialGrowthStageHighWatermark;
  double _initialGrowthStageLastAttempt;
  NSDate *_leaveSteadyStateDate;
  NSDate *_leaveMinimumIntervalFallbackStateDate;
  NSString *_algorithmName;
  NSObject<OS_os_log> *_logObject;
  int _lastKeepAliveAlgorithmMode;
  int _currentKeepAliveAlgorithmMode;
}

@property (nonatomic) int previousAction;
@property (readonly, nonatomic) double currentKeepAliveInterval;
@property (nonatomic) BOOL isServerOriginatedKeepAlive;
@property (nonatomic) double minimumKeepAliveInterval;
@property (nonatomic) double maximumKeepAliveInterval;
@property (nonatomic) double serverStatsExpectedKeepAliveInterval;
@property (nonatomic) double serverStatsMaxKeepAliveInterval;
@property (nonatomic) double serverStatsMinKeepAliveInterval;
@property (nonatomic) double lastSuccessfulKeepAliveInterval;
@property (nonatomic) BOOL minimumIntervalFallbackEnabled;
@property (nonatomic) BOOL usingServerStatsAggressively;
@property (nonatomic) double minimumIntervalFallbackStateTimeout;
@property (readonly, nonatomic) unsigned long long countOfGrowthActions;
@property (nonatomic) struct _PCTimeRange { double x0; double x1; } signalAvoidanceRange;
@property (readonly, copy, nonatomic) NSDictionary *cacheInfo;
@property (readonly, nonatomic) int growthStage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)_loadDefaults;
+ (void)_loadDefaultValue:(double *)value forKey:(struct __CFString *)key;

/* instance methods */
- (id)initWithCacheInfo:(id)info loggingIdentifier:(id)identifier algorithmName:(id)name;
- (void)_setCurrentKeepAliveInterval:(double)interval varianceMode:(unsigned int)mode allowRoundUp:(BOOL)up;
- (void)_setCurrentKeepAliveInterval:(double)interval varianceMode:(unsigned int)mode;
- (void)_fallbackToLastSuccessfulKeepAliveInterval;
- (BOOL)useIntervalIfImprovement:(double)improvement;
- (void)_adjustGrowthAlgorithmMode;
- (void)_resetAlgorithmToInterval:(double)interval stage:(int)stage;
- (void)_resetAlgorithmToInterval:(double)interval;
- (void)processNextAction:(int)action;
- (void)_processInitialGrowthAction:(int)action;
- (void)_processBackoffAction:(int)action;
- (void)_processSteadyStateAction:(int)action;
- (void)_processMinimumIntervalFallbackStateAction:(int)action;
- (void)_processRefinedGrowthAction:(int)action;
- (void)_processInitialShrinkAction:(int)action;
- (void)_processRefinedShrinkAction:(int)action;
- (double)_steadyStateTimeout;
- (id)_stringForAction:(int)action;
- (id)_stringForStage:(int)stage;
- (id)_stringForMode:(int)mode;
@end

#endif /* PCMultiStageGrowthAlgorithm_h */

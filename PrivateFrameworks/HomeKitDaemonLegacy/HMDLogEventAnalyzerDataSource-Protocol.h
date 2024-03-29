//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDLogEventAnalyzerDataSource_Protocol_h
#define HMDLogEventAnalyzerDataSource_Protocol_h
@import Foundation;

@protocol HMDLogEventAnalyzerDataSource <NSObject>

@property (readonly, nonatomic) HMDEventCountersManager *legacyCountersManager;
@property (readonly, nonatomic) HMDTimeBasedFlagsManager *flagsManager;
@property (readonly, nonatomic) NSObject<HMMRadarInitiating> *radarInitiator;
@property (readonly, nonatomic) NSObject<HMDMetricsDeviceStateProvider> *deviceStateProvider;
@property (readonly, nonatomic) NSObject<HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly, nonatomic) NSObject<HMMLogEventDispatching> *logEventDispatcher;
@property (readonly, nonatomic) HMDLogEventDailyScheduler *dailyScheduler;
@property (readonly, nonatomic) HMMDateProvider *dateProvider;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) NSString *currentSoftwareVersion;
@property (readonly, copy, nonatomic) HMDConfigurationLogEvent *cachedConfiguration;
@property (readonly, weak, nonatomic) NSObject<HMDEWSLogging> *ewsLogger;

/* instance methods */
- (void)addConfigurationChangedObserver:(id /* block */)observer;
- (void)addThresholdTrigger:(id)trigger forEventName:(id)name requestGroup:(id)group atThreshold:(unsigned long long)threshold;
- (void)addThresholdTrigger:(id)trigger forEventName:(id)name requestGroup:(id)group atThreshold:(unsigned long long)threshold uploadImmediately:(BOOL)immediately;
- (void)addRateTrigger:(id)trigger forEventName:(id)name requestGroup:(id)group atThreshold:(unsigned long long)threshold windowSize:(unsigned long long)size;
@end

#endif /* HMDLogEventAnalyzerDataSource_Protocol_h */

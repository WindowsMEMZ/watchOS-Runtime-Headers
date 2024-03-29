//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 137.60.2.0.0
//
#ifndef AWSampleLogger_h
#define AWSampleLogger_h
@import Foundation;

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AWSampleLogger : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_queue> *_powerLogQueue;
  NSMutableDictionary *_clientLogData;
  NSMutableSet *_outstandingClientLogData;
  NSMutableSet *_addedClientLogData;
  NSObject<OS_dispatch_source> *_timer;
  unsigned long long _samplingStartTime;
  unsigned long long _cumulativeSamplingTime;
  unsigned long long _samplesRequested;
  unsigned long long _pollsRequested;
  unsigned long long _samplesSucceeded;
}

/* class methods */
+ (id)sharedLogger;
+ (void)client:(id)client attentionStateChange:(BOOL)change;
+ (void)client:(id)client event:(id)event;
+ (void)client:(id)client pollEventType:(unsigned long long)type event:(id)event;

/* instance methods */
- (id)init;
- (void)_logFeatureEnablement;
- (void)streamingCompleteWithidentifier:(id)withidentifier duration:(unsigned long long)duration ERActivated:(BOOL)eractivated;
- (void)_outputPowerLog;
- (void)outputPowerLog;
- (void)powerLogName:(id)name event:(id)event;
- (void)startUpdate;
- (void)updateDataForClient:(id)client deadline:(unsigned long long)deadline;
- (void)shouldSample:(BOOL)sample;
- (void)sampleStartedWithDeadline:(unsigned long long)deadline;
- (void)sampleSucceeded;
@end

#endif /* AWSampleLogger_h */

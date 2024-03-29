//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSVoiceTriggerStatAggregator_h
#define CSVoiceTriggerStatAggregator_h
@import Foundation;

#include "CSDigitalZeroReporting-Protocol.h"

@class NSMutableDictionary, NSString;

@interface CSVoiceTriggerStatAggregator : NSObject<CSDigitalZeroReporting>

@property (nonatomic) unsigned long long numFalseWakeUp;
@property (nonatomic) unsigned long long lastAggTimeFalseWakeUp;
@property (retain, nonatomic) NSMutableDictionary *falseWakePhraseDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedAggregator;

/* instance methods */
- (id)init;
- (void)logAOPFirstPassTriggerWakeupLatency:(float)latency;
- (void)logSecondPassResult:(int)result eventInfo:(id)info triggerAPWakeUp:(BOOL)up;
- (void)logFalseWakeUp:(BOOL)up withPhrase:(id)phrase;
- (void)logTimeBasedTriggerLengthSampleCountStatistics:(unsigned long long)statistics withAOPVTTriggerLengthSampleCount:(unsigned long long)count;
- (void)reportDigitalZerosWithAudioZeroRun:(float)run;
@end

#endif /* CSVoiceTriggerStatAggregator_h */

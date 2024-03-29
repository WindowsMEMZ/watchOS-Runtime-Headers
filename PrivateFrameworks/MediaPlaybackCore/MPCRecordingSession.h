//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCRecordingSession_h
#define MPCRecordingSession_h
@import Foundation;

#include "ICEnvironmentMonitorObserver-Protocol.h"
#include "MPCFirstFailureDetector.h"
#include "MPCSamplesRecorder.h"
#include "MPCSamplesRecorderDelegate-Protocol.h"
#include "MPCStatisticsReporter.h"

@class ICEnvironmentMonitor, NSString;

@interface MPCRecordingSession : NSObject<MPCSamplesRecorderDelegate, ICEnvironmentMonitorObserver> {
  /* instance variables */
  BOOL _shouldRecordSamples;
  int _currentThermalLevel;
}

@property (readonly, copy, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) MPCFirstFailureDetector *firstFailureDetector;
@property (readonly, nonatomic) MPCStatisticsReporter *statisticsReporter;
@property (readonly, copy, nonatomic) NSString *modelID;
@property (readonly, nonatomic) ICEnvironmentMonitor *thermalMonitor;
@property (readonly, nonatomic) MPCSamplesRecorder *currentRecorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithModelID:(id)id samplingTime:(double)time renderingLimit:(double)limit shouldRecordSamples:(BOOL)samples;
- (void)dealloc;
- (void)recordSample:(id)sample;
- (void)save;
- (void)flush;
- (void)samplesRecorderHasNewSamples:(id)samples;
- (void)environmentMonitorDidChangeThermalLevel:(id)level;
@end

#endif /* MPCRecordingSession_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDMCAnalysisScheduler_h
#define HDMCAnalysisScheduler_h
@import Foundation;

#include "HDHealthDaemonReadyObserver-Protocol.h"
#include "HDMCAnalysisManager.h"

@class HKCalendarCache, HKMCSettingsManager, NSString;

@interface HDMCAnalysisScheduler : NSObject<HDHealthDaemonReadyObserver> {
  /* instance variables */
  HDMCAnalysisManager *_analysisManager;
  HKMCSettingsManager *_settingsManager;
  HKCalendarCache *_calendarCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDaemon:(id)daemon analysisManager:(id)manager settingsManager:(id)manager calendarCache:(id)cache;
- (void)dealloc;
- (void)_registerActivityAfterCompletion:(BOOL)completion;
- (void)_handleActivity:(id)activity forceRescheduleOnCheckIn:(BOOL)in;
- (double)_delayUntilNextAnalysisSchedulingWindowStartDateAfterDate:(id)date;
- (void)_runAnalysis;
- (void)daemonReady:(id)ready;
@end

#endif /* HDMCAnalysisScheduler_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSHomePodSettingsMonitor_h
#define CSHomePodSettingsMonitor_h
@import Foundation;

#include "CSEventMonitor.h"

@interface CSHomePodSettingsMonitor : CSEventMonitor
/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)_startMonitoringWithQueue:(id)queue;
- (void)_stopMonitoring;
- (BOOL)shouldVoiceTriggerRun;
- (BOOL)shouldAudioMonitoringRecording;
@end

#endif /* CSHomePodSettingsMonitor_h */

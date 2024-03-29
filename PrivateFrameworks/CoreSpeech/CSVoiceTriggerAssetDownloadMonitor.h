//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSVoiceTriggerAssetDownloadMonitor_h
#define CSVoiceTriggerAssetDownloadMonitor_h
@import Foundation;

#include "CSEventMonitor.h"

@interface CSVoiceTriggerAssetDownloadMonitor : CSEventMonitor {
  /* instance variables */
  int _notifyToken;
  int _gibraltarMacNotifyToken;
  int _darwinNotifyToken;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (const char *)_notificationKey;
- (void)_startMonitoringWithQueue:(id)queue;
- (void)_stopMonitoring;
- (void)_didInstalledNewVoiceTriggerAsset;
- (void)_notifyObserver:(id)observer;
@end

#endif /* CSVoiceTriggerAssetDownloadMonitor_h */

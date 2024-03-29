//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSVoiceTriggerAssetChangeMonitor_h
#define CSVoiceTriggerAssetChangeMonitor_h
@import Foundation;

@protocol CSVoiceTriggerAssetChangeDelegate, OS_dispatch_queue;

@interface CSVoiceTriggerAssetChangeMonitor : NSObject {
  /* instance variables */
  int _notifyToken;
  NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) NSObject<CSVoiceTriggerAssetChangeDelegate> *delegate;

/* class methods */
+ (id)sharedMonitor;

/* instance methods */
- (id)init;
- (void)startMonitoring;
- (void)notifyVoiceTriggerAssetChanged;
@end

#endif /* CSVoiceTriggerAssetChangeMonitor_h */

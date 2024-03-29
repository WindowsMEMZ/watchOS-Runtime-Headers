//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHUISPreferences_h
#define CHUISPreferences_h
@import Foundation;

@class NSString, NSUserDefaults;

@interface CHUISPreferences : NSObject {
  /* instance variables */
  NSUserDefaults *_defaults;
}

@property (readonly, nonatomic) BOOL enableMemoryStressTestingWithGaspar;
@property (readonly, nonatomic) BOOL debugViewLabels;
@property (readonly, nonatomic) BOOL debugSnapshotViewColoring;
@property (readonly, nonatomic) BOOL debugPrefersStaticSnapshots;
@property (readonly, nonatomic) NSString *widgetRenderer;
@property (readonly, nonatomic) BOOL userWantsWidgetDataWhenPasscodeLocked;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
@end

#endif /* CHUISPreferences_h */

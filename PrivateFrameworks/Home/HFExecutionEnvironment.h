//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFExecutionEnvironment_h
#define HFExecutionEnvironment_h
@import Foundation;

@class NSDate, NSHashTable;

@interface HFExecutionEnvironment : NSObject

@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) BOOL active;
@property (retain, nonatomic) NSDate *appForegroundStartTime;
@property (readonly, nonatomic) unsigned long long runningState;
@property (readonly, nonatomic) long long hostProcess;
@property (nonatomic) BOOL macScreenIsLocked;

/* class methods */
+ (id)sharedInstance;
+ (BOOL)isHomeApp;
+ (BOOL)isWatchApp;
+ (BOOL)isHomeUIService;
+ (BOOL)isHomeControlService;
+ (BOOL)isSpringBoard;
+ (BOOL)isCarousel;
+ (BOOL)isSettings;
+ (BOOL)isMacShortcuts;
+ (BOOL)isShortcuts;
+ (BOOL)isHomeNotification;
+ (BOOL)isHomeWidget;
+ (BOOL)isHomeWidgetInteractive;
+ (BOOL)isHomeEnergyWidget;
+ (BOOL)isHomeRelatedProcess;
+ (BOOL)isHomeWidgetRelatedProcess;
+ (id)stringForHFExecutionEnvironmentRunningState:(unsigned long long)state;

/* instance methods */
- (id)init;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)executionEnvironmentWillEnterForeground;
- (void)executionEnvironmentDidBecomeActive;
- (void)executionEnvironmentWillResignActive;
- (void)executionEnvironmentDidEnterBackground;
- (void)_recordMetricsForAppRunningState;
- (void)dispatchMessageToObserversWithBlock:(id /* block */)block;
- (void)_disablePreferencesCloudBackup;
- (BOOL)isActive;
@end

#endif /* HFExecutionEnvironment_h */

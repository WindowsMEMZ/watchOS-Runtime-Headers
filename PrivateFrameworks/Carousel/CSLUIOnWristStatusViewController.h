//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLUIOnWristStatusViewController_h
#define CSLUIOnWristStatusViewController_h
@import Foundation;

@class BSContinuousMachTimer, UIWindow;

@interface CSLUIOnWristStatusViewController : NSObject

@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) BSContinuousMachTimer *loggingTimer;

/* instance methods */
- (id)init;
- (void)_reloadDisplayPreferences;
- (void)_displayPreferencesChanged;
- (void)dealloc;
- (void)_handleOnWristStateChanged:(id)changed;
- (void)_updateViewForOnWristManager:(id)manager;
- (void)loggingTimerFired;
- (id)_getSunriseDate;
- (void)_logOnWristDuration:(long long)duration;
@end

#endif /* CSLUIOnWristStatusViewController_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIApplicationModalProgressController_h
#define _UIApplicationModalProgressController_h
@import Foundation;

#include "UIAlertController.h"
#include "UIViewController.h"
#include "UIWindow.h"
#include "UIWindowScene.h"
#include "_UIProgressView.h"

@class NSProgress, NSString, NSTimer;

@interface _UIApplicationModalProgressController : NSObject {
  /* instance variables */
  BOOL _disableButtonAction;
  _UIProgressView *_progressView;
  UIWindowScene *_weakScene;
}

@property (nonatomic) BOOL presented;
@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) UIViewController *sourceViewController;
@property (retain, nonatomic) UIAlertController *alertController;
@property (copy, nonatomic) id /* block */ dismissalHandler;
@property (copy, nonatomic) id /* block */ preDisplayTestBlock;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) NSTimer *showTimer;
@property (retain, nonatomic) NSTimer *hideTimer;
@property (nonatomic) double displayStartTime;
@property (retain, nonatomic) NSProgress *urlProgress;
@property (nonatomic) double displayDelaySeconds;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;

/* class methods */
+ (id)sharedInstance;
+ (id)instanceForScene:(id)scene;

/* instance methods */
- (id)init;
- (void)_setShowTimer:(id)timer;
- (void)_setHideTimer:(id)timer;
- (void)_callAndClearDismissalHandlerWasDismissedByUser:(BOOL)user;
- (void)_reset;
- (void)_hideImmediatelyWasDismissedByUser:(BOOL)user;
- (BOOL)_shouldAnimatePresentationForIdiom:(long long)idiom;
- (void)_showTimerAction:(id)action;
- (void)_hideTimerAction:(id)action;
- (void)_dismissButtonAction:(id)action;
- (void)hideAfterMinimumUptimeWithDismissalHandler:(id /* block */)handler;
- (void)hideAfterDelay:(double)delay forceCompletion:(BOOL)completion replacementDismissalHandler:(id /* block */)handler;
- (void)reconfigureWithTitle:(id)title message:(id)message progress:(id)progress buttonTitle:(id)title dismissalHandler:(id /* block */)handler;
- (void)displayWithTitle:(id)title message:(id)message progress:(id)progress buttonTitle:(id)title sourceViewController:(id)controller preDisplayTestBlock:(id /* block */)block dismissalHandler:(id /* block */)handler;
- (void)displayForDownloadingURL:(id)url sourceViewController:(id)controller completionHandler:(id /* block */)handler;
- (void)displayForCopyingFileAtURL:(id)url toURL:(id)url sourceViewController:(id)controller completionHandler:(id /* block */)handler;
- (void)displayForDownloadingURL:(id)url copyToURL:(id)url sourceViewController:(id)controller completionHandler:(id /* block */)handler;
- (BOOL)_isPresented;
- (void)_setPresented:(BOOL)presented;
- (id)_window;
- (void)_setWindow:(id)window;
- (id)_sourceViewController;
- (void)_setSourceViewController:(id)controller;
- (id)_alertController;
- (void)_setAlertController:(id)controller;
- (id /* block */)_dismissalHandler;
- (void)_setDismissalHandler:(id /* block */)handler;
- (id /* block */)_preDisplaySetBlock;
- (void)_setPreDisplayTestBlock:(id /* block */)block;
- (id)_progress;
- (void)_setProgress:(id)progress;
- (id)_showTimer;
- (id)_hideTimer;
- (double)_displayStartTime;
- (void)_setDisplayStartTime:(double)time;
@end

#endif /* _UIApplicationModalProgressController_h */

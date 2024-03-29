//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIFallbackPresentationViewController_h
#define _UIFallbackPresentationViewController_h
@import Foundation;

#include "UIApplicationRotationFollowingController.h"
#include "UIWindow.h"
#include "_UIFallbackPresentationWindow.h"

@interface _UIFallbackPresentationViewController : UIApplicationRotationFollowingController {
  /* instance variables */
  _UIFallbackPresentationWindow *_presentationWindow;
}

@property (nonatomic) BOOL hasPreservedKeyboardInputViews;
@property (nonatomic) BOOL hasDismissCompletionHandler;
@property (retain, nonatomic) UIWindow *rotationDecider;
@property (copy, nonatomic) id /* block */ presentationPreparationBlock;

/* instance methods */
- (void)viewDidLoad;
- (void)_presentViewController:(id)controller sendingView:(id)view animated:(BOOL)animated;
- (void)_dismissViewControllerWithTransition:(int)transition from:(id)from completion:(id /* block */)completion;
- (void)_preserveInputViewsAnimated:(BOOL)animated;
- (void)_restoreInputViewsAnimated:(BOOL)animated;
- (void)_preparePresentationControllerForPresenting:(id)presenting;
- (BOOL)_canShowWhileLocked;
@end

#endif /* _UIFallbackPresentationViewController_h */

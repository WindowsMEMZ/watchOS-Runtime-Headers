//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.2.12.0.0
//
#ifndef AMSUICommonViewController_h
#define AMSUICommonViewController_h
@import Foundation;

#include "UIViewController.h"
#include "AMSUICommonView.h"

@interface AMSUICommonViewController : UIViewController

@property (nonatomic) BOOL movingFromParentViewController;
@property (nonatomic) BOOL movingToParentViewController;
@property (retain, nonatomic) AMSUICommonView *view;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)setChildViewController:(id)controller;
- (void)unsetChildViewController:(id)controller;
- (void)loadView;
- (void)_registerNotifications;
- (void)_unregisterNotifications;
@end

#endif /* AMSUICommonViewController_h */

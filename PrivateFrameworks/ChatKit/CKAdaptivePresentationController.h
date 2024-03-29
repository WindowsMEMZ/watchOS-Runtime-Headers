//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKAdaptivePresentationController_h
#define CKAdaptivePresentationController_h
@import Foundation;

#include "CKAlertControllerDelegate-Protocol.h"
#include "CKPresentationControllerWindow.h"
#include "UIPopoverPresentationControllerDelegate-Protocol.h"

@class NSString, UIPopoverPresentationController, UIViewController;

@interface CKAdaptivePresentationController : NSObject<UIPopoverPresentationControllerDelegate, CKAlertControllerDelegate>

@property (retain, nonatomic) UIViewController *presentedViewController;
@property (retain, nonatomic) UIPopoverPresentationController *currentPresentationController;
@property (retain, nonatomic) CKPresentationControllerWindow *presentationWindow;
@property (copy, nonatomic) id /* block */ presentationHandler;
@property (copy, nonatomic) id /* block */ dismissalHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;
+ (void)presentWatchAlertUsingAlertController:(id)controller fromViewController:(id)controller;

/* instance methods */
- (void)dealloc;
- (void)popoverPresentationController:(id)controller willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)rect inView:(inout id *)view;
- (void)popoverPresentationControllerDidDismissPopover:(id)popover;
- (void)presentationControllerDidDismiss:(id)dismiss;
- (void)alertControllerViewDidDisappear:(id)disappear;
- (void)presentViewController:(id)controller fromViewController:(id)controller barButtonItemPresentationHandler:(id /* block */)handler dismissalHandler:(id /* block */)handler animated:(BOOL)animated completion:(id /* block */)completion;
- (void)presentViewController:(id)controller fromViewController:(id)controller presentationHandler:(id /* block */)handler dismissalHandler:(id /* block */)handler animated:(BOOL)animated completion:(id /* block */)completion;
- (void)_presentViewController:(id)controller fromViewController:(id)controller presentationHandler:(id /* block */)handler barButtonItemPresentationHandler:(id /* block */)handler dismissalHandler:(id /* block */)handler animated:(BOOL)animated completion:(id /* block */)completion;
- (void)dismissViewControllerAnimated:(BOOL)animated completion:(id /* block */)completion;
- (void)_cleanup;
@end

#endif /* CKAdaptivePresentationController_h */

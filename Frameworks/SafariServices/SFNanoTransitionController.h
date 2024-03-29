//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFNanoTransitionController_h
#define SFNanoTransitionController_h
@import Foundation;

#include "PUICNavigationDefaultTransition.h"
#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString;

@interface SFNanoTransitionController : PUICNavigationDefaultTransition<UIViewControllerTransitioningDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)animateTransition:(id)transition;
- (id)animationControllerForPresentedController:(id)controller presentingController:(id)controller sourceController:(id)controller;
- (id)animationControllerForDismissedController:(id)controller;
- (id)interactionControllerForDismissal:(id)dismissal;
@end

#endif /* SFNanoTransitionController_h */

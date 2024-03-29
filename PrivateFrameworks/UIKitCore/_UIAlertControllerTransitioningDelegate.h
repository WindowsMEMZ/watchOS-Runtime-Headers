//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIAlertControllerTransitioningDelegate_h
#define _UIAlertControllerTransitioningDelegate_h
@import Foundation;

#include "UIForceTransitioningDelegate-Protocol.h"
#include "UIInteractionProgress.h"

@class NSString;

@interface _UIAlertControllerTransitioningDelegate : NSObject<UIForceTransitioningDelegate>

@property (retain, nonatomic) UIInteractionProgress *interactionProgressForPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)animationControllerForPresentedController:(id)controller presentingController:(id)controller sourceController:(id)controller;
- (id)animationControllerForDismissedController:(id)controller;
- (id)_interactionControllerForTransitionOfType:(long long)type forAlertController:(id)controller;
- (id)interactionControllerForPresentation:(id)presentation;
@end

#endif /* _UIAlertControllerTransitioningDelegate_h */

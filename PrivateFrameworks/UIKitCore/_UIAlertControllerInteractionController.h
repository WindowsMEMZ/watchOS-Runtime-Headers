//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIAlertControllerInteractionController_h
#define _UIAlertControllerInteractionController_h
@import Foundation;

#include "UIPercentDrivenInteractiveTransition.h"
#include "UIAlertController.h"
#include "UIForceInteractionController-Protocol.h"
#include "UIInteractionProgressObserver-Protocol.h"
#include "UIViewControllerContextTransitioning-Protocol.h"

@class NSString;

@interface _UIAlertControllerInteractionController : UIPercentDrivenInteractiveTransition<UIForceInteractionController, UIInteractionProgressObserver>

@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) NSObject<UIViewControllerContextTransitioning> *context;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, nonatomic) long long completionCurve;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)startInteractiveTransition:(id)transition;
- (void)interactionProgressDidUpdate:(id)update;
- (void)interactionProgress:(id)progress didEnd:(BOOL)end;
@end

#endif /* _UIAlertControllerInteractionController_h */

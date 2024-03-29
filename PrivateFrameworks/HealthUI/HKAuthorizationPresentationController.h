//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKAuthorizationPresentationController_h
#define HKAuthorizationPresentationController_h
@import Foundation;

#include "HKHealthPrivacyHostAuthorizationControllerDelegate-Protocol.h"
#include "HKHealthPrivacyHostAuthorizationViewController.h"
#include "HKNanoHostAuthorizationController.h"
#include "_HKAuthorizationPresentationController-Protocol.h"

@class NSString, UIViewController, _UIAsyncInvocation;

@interface HKAuthorizationPresentationController : NSObject<HKHealthPrivacyHostAuthorizationControllerDelegate, _HKAuthorizationPresentationController>

@property (retain, nonatomic) _UIAsyncInvocation *requestCancellationInvocation;
@property (retain, nonatomic) HKHealthPrivacyHostAuthorizationViewController *hostViewController;
@property (retain, nonatomic) HKNanoHostAuthorizationController *nanoAuthorizationController;
@property (nonatomic) BOOL didPresent;
@property (weak, nonatomic) UIViewController *viewControllerPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (void)presentWithPresentationRequests:(id)requests authorizationRequestRecord:(id)record authorizationViewControllerPresenter:(id)presenter completion:(id /* block */)completion;
- (void)cancelPresentation;
- (void)_requestAndConfigureCarouselAlert:(id /* block */)alert completion:(id /* block */)completion;
- (void)_requestAndConfigureHostViewController:(id /* block */)controller completion:(id /* block */)completion;
- (void)_mainQueue_presentWithPresentationRequests:(id)requests authorizationRequestRecord:(id)record completion:(id /* block */)completion;
- (void)_makeRemoteViewControllerVisible:(id)visible;
- (void)_dismissViewControllerAnimated:(BOOL)animated;
- (void)healthPrivacyHostAuthorizationControllerDidFinishWithError:(id)error;
@end

#endif /* HKAuthorizationPresentationController_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupDismissibleNavigationController_h
#define PKPaymentSetupDismissibleNavigationController_h
@import Foundation;

#include "PKNavigationController.h"
#include "PKUIFlowManagerRendererDelegate-Protocol.h"

@interface PKPaymentSetupDismissibleNavigationController : PKNavigationController {
  /* instance variables */
  BOOL _configureRootViewController;
}

@property (weak, nonatomic) NSObject<PKUIFlowManagerRendererDelegate> *flowDelegate;
@property (readonly, nonatomic) long long context;

/* instance methods */
- (id)init;
- (id)initWithContext:(long long)context;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)_configureRootViewController;
- (void)useStandardPlatformPresentationStyle;
- (void)cancelButtonPressed:(id)pressed;
- (unsigned long long)supportedInterfaceOrientations;
- (void)navigationController:(id)controller willShowViewController:(id)controller animated:(BOOL)animated;
- (void)dismissViewControllerAnimated:(BOOL)animated completion:(id /* block */)completion;
@end

#endif /* PKPaymentSetupDismissibleNavigationController_h */

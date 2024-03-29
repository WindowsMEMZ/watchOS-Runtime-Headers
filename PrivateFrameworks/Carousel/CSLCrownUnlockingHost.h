//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLCrownUnlockingHost_h
#define CSLCrownUnlockingHost_h
@import Foundation;

#include "UIViewController.h"
#include "CSLSButtonHandling-Protocol.h"
#include "CUISUnlockController-Protocol.h"

@class CUISCrownUnlockingConfiguration, NSString, UIView, UIViewController;

@interface CSLCrownUnlockingHost : UIViewController<CSLSButtonHandling>

@property (retain, nonatomic) UIView *decorationView;
@property (retain, nonatomic) NSObject<CUISUnlockController> *unlockController;
@property (retain, nonatomic) UIViewController *hostingController;
@property (retain, nonatomic) CUISCrownUnlockingConfiguration *configuration;
@property (readonly, nonatomic) BOOL isDevicePasscodeLocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)_handleWheelEvent;
- (BOOL)_handle:(unsigned long long)_handle eventType:(unsigned long long)type;
- (void)rebuildView;
- (id)makeHostViewController;
- (id)initWithController:(id)controller configuration:(id)configuration;
- (void)handleWheelEvent;
- (BOOL)handleButton:(unsigned long long)button eventType:(unsigned long long)type;
- (BOOL)shouldAlertManagerPreHandleButtonEventType:(unsigned long long)type;
- (void)viewDidLoad;
@end

#endif /* CSLCrownUnlockingHost_h */

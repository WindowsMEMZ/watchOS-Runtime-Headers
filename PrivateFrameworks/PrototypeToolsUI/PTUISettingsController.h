//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 148.0.0.0.0
//
#ifndef PTUISettingsController_h
#define PTUISettingsController_h
@import Foundation;

#include "UINavigationController.h"

@class UIBarButtonItem;

@interface PTUISettingsController : UINavigationController

@property (retain, nonatomic) UIBarButtonItem *dismissButton;

/* instance methods */
- (id)initWithRootSettings:(id)settings;
- (id)_initWithRootModule:(id)module;
- (id)initWithRootModuleController:(id)controller;
- (BOOL)_canShowWhileLocked;
- (void)pushViewController:(id)controller animated:(BOOL)animated;
- (id)_defaultDismissButton;
- (void)_dismiss;
- (void)_reloadWithRootModule:(id)module;
@end

#endif /* PTUISettingsController_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.2.0.0
//
#ifndef SPModalNavigationController_h
#define SPModalNavigationController_h
@import Foundation;

#include "PUICNavigationController.h"

@interface SPModalNavigationController : PUICNavigationController
/* instance methods */
- (void)_defaultCancelAction;
- (void)viewWillAppear:(BOOL)appear;
- (void)_updateBarButton;
- (void)setTitle:(id)title;
- (void)updateTitleForViewController:(id)controller;
@end

#endif /* SPModalNavigationController_h */

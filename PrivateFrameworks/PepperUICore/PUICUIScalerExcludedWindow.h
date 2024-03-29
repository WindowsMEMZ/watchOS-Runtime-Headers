//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICUIScalerExcludedWindow_h
#define PUICUIScalerExcludedWindow_h
@import Foundation;

#include "UIWindow.h"

@interface PUICUIScalerExcludedWindow : UIWindow
/* class methods */
+ (id)excludedWindow;
+ (BOOL)isLoaded;
+ (BOOL)_isSecure;

/* instance methods */
- (BOOL)_canAffectStatusBarAppearance;
- (BOOL)_canChangeFirstResponder:(id)responder toResponder:(id)responder;
@end

#endif /* PUICUIScalerExcludedWindow_h */

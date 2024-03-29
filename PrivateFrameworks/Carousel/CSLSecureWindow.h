//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSecureWindow_h
#define CSLSecureWindow_h
@import Foundation;

#include "UIWindow.h"

@class NSNumber;

@interface CSLSecureWindow : UIWindow {
  /* instance variables */
  NSNumber *_allowsKeyWindow;
  NSNumber *_canAffectStatusBarAppearance;
}

@property (nonatomic) BOOL ignoreTouchesForSelfHitTest;
@property (nonatomic) BOOL CSL_canBecomeKeyWindow;
@property (nonatomic) BOOL CSL_canAffectStatusBarAppearance;

/* class methods */
+ (BOOL)_isSecure;

/* instance methods */
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (BOOL)_canBecomeKeyWindow;
- (void)CSL_setCanBecomeKeyWindow:(BOOL)window;
- (void)CSL_setCanAffectStatusBarAppearance:(BOOL)appearance;
- (BOOL)_canAffectStatusBarAppearance;
@end

#endif /* CSLSecureWindow_h */

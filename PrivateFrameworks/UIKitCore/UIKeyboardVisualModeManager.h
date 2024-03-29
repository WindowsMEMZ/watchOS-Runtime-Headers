//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKeyboardVisualModeManager_h
#define UIKeyboardVisualModeManager_h
@import Foundation;

#include "UIKeyboardVisualModeManagerDelegate-Protocol.h"

@interface UIKeyboardVisualModeManager : NSObject

@property (nonatomic) int lastVisualMode;
@property (weak, nonatomic) NSObject<UIKeyboardVisualModeManagerDelegate> *delegate;

/* class methods */
+ (BOOL)windowingSoftwareKeyboardAllowed;
+ (BOOL)softwareKeyboardAllowedOnExternalScreen;
+ (BOOL)softwareKeyboardAllowedForActiveKeyboardSceneDelegate;
+ (id)visualModeLog;

/* instance methods */
- (id)init;
- (BOOL)useVisualModeWindowed;
- (int)visualMode;
- (void)enhancedWindowingModeDidChange:(id)change;
- (void)keyboardCameraNotification:(id)notification;
- (BOOL)windowingModeEnabled;
- (BOOL)textEntryFocusOnExternalDisplay;
- (BOOL)expectedInputModeIsSpecialized;
@end

#endif /* UIKeyboardVisualModeManager_h */

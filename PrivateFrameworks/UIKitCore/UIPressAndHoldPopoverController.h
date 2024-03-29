//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIPressAndHoldPopoverController_h
#define UIPressAndHoldPopoverController_h
@import Foundation;

#include "UIKeyboardPopoverController.h"

@interface UIPressAndHoldPopoverController : UIKeyboardPopoverController
/* class methods */
+ (BOOL)canPresentPressAndHoldPopoverForEvent:(id)event;
+ (BOOL)canPresentPressAndHoldPopoverForKeyString:(id)string;

/* instance methods */
- (id)initWithKeyString:(id)string;
- (BOOL)handleHardwareKeyboardEvent:(id)event;
- (BOOL)isSamePressAndHoldPopoverForKeyString:(id)string;
- (BOOL)handleKeyInputForPressAndHoldSelector:(id)selector;
- (BOOL)handleSelectionEvent:(id)event;
- (BOOL)handleKeyInputForAccentSelector:(id)selector;
- (BOOL)hasAccentVariantInForwardDirection:(BOOL)direction;
- (void)showAccentVariantInForwardDirection:(BOOL)direction;
- (void)pressAndHoldViewDidAcceptAccentVariant:(id)variant atIndexPath:(id)path;
- (void)insertSelectedAccentVariant:(id)variant shouldDismissPopover:(BOOL)popover;
@end

#endif /* UIPressAndHoldPopoverController_h */

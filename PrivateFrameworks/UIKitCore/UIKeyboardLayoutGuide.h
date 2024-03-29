//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKeyboardLayoutGuide_h
#define UIKeyboardLayoutGuide_h
@import Foundation;

#include "UITrackingLayoutGuide.h"
#include "_UIAssertionController.h"
#include "_UIAssertionControllerSubject-Protocol.h"

@class NSLayoutConstraint, NSString;

@interface UIKeyboardLayoutGuide : UITrackingLayoutGuide<_UIAssertionControllerSubject> {
  /* instance variables */
  _UIAssertionController *_assertionController;
}

@property (nonatomic) struct UIOffset { double x0; double x1; } previousOffset;
@property (nonatomic) struct CGSize { double x0; double x1; } previousSize;
@property (retain, nonatomic) NSLayoutConstraint *viewBottomConstraint;
@property (nonatomic) BOOL ignoresSafeArea;
@property (nonatomic) BOOL ignoreKeyboardChanges;
@property (nonatomic) long long followTypes;
@property (nonatomic) struct UIOffset { double x0; double x1; } interactionResetOffset;
@property (nonatomic) struct CGSize { double x0; double x1; } interactionResetSize;
@property (readonly, nonatomic) _UIAssertionController *_assertionController;
@property (nonatomic) BOOL docked;
@property (nonatomic) long long currentKeyboardVisualState;
@property (nonatomic) BOOL windowGuide;
@property (readonly, nonatomic) BOOL transitioning;
@property (nonatomic) BOOL addsHeightWhenUndocked;
@property (nonatomic) BOOL followsUndockedKeyboard;
@property (nonatomic) BOOL usesBottomSafeArea;
@property (nonatomic) double keyboardDismissPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)init;
- (void)_commonInit;
- (void)inheritOptionsFromGuide:(id)guide;
- (void)constrainToReference:(id)reference;
- (void)updateBottomConstraint;
- (void)followUndockedKeyboardOfTypes:(long long)types;
- (BOOL)shouldFollowCurrentKeyboard;
- (void)forceResizeGuideForOrientation:(long long)orientation showsAssistantBar:(BOOL)bar animated:(BOOL)animated;
- (void)forceResizeGuideForInputMode:(id)mode orientation:(BOOL)orientation showsAssistantBar:(BOOL)bar animated:(BOOL)animated;
- (void)forceDismissGuideAnimated:(BOOL)animated;
- (void)updateSizeForInputMode:(id)mode orientation:(long long)orientation showsAssistantBar:(BOOL)bar animated:(BOOL)animated;
- (void)disableSynchronizingWithKeyboard;
- (void)reenableSynchronizingWithKeyboard;
- (void)_detachGuideFromKeyboard:(BOOL)keyboard;
- (struct CGSize { double x0; double x1; })defaultKeyboardSizeForInputMode:(id)mode orientation:(long long)orientation addingAssistant:(BOOL)assistant;
- (BOOL)isDocked;
- (BOOL)keyboardStateIsDocked:(long long)docked;
- (BOOL)currentStateIsDocked;
- (BOOL)isWindowGuide;
- (id)_obtainTransitionAssertionForReason:(id)reason;
- (void)_setTransitioning:(BOOL)transitioning;
- (BOOL)isTransitioning;
- (unsigned long long)validatedOverlappingEdges:(unsigned long long)edges;
- (BOOL)moveGuideOffscreenAtEdge:(unsigned long long)edge;
- (BOOL)_moveGuideOffscreenAtEdge:(unsigned long long)edge force:(BOOL)force;
- (void)resetGuideForCancelledDismissInteraction;
- (BOOL)assertionActivationStateForType:(unsigned long long)type;
- (void)assertionActivationStateChangedToState:(BOOL)state forType:(unsigned long long)type;
- (BOOL)changeOffsetConstants:(struct UIOffset { double x0; double x1; })constants;
- (BOOL)_changeOffsetConstants:(struct UIOffset { double x0; double x1; })constants force:(BOOL)force;
- (BOOL)changeSizingConstants:(struct CGSize { double x0; double x1; })constants;
- (BOOL)_changeSizingConstants:(struct CGSize { double x0; double x1; })constants force:(BOOL)force;
@end

#endif /* UIKeyboardLayoutGuide_h */

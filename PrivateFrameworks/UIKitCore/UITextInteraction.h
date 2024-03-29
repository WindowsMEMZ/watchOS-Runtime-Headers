//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITextInteraction_h
#define UITextInteraction_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIInteraction-Protocol.h"
#include "UILongPressGestureRecognizer.h"
#include "UITextCursorAssertionController.h"
#include "UITextInteraction.h"
#include "UITextInteractionInputDelegate.h"
#include "UITextInteraction_AssistantDelegate-Protocol.h"
#include "UIView.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol UIResponder<UITextInput, UITextInteractionDelegate;

@interface UITextInteraction : NSObject<UIGestureRecognizerDelegate, UIInteraction> {
  /* instance variables */
  BOOL _viewOverridesInteractivityState;
  BOOL _allowsSelectionCommands;
  UILongPressGestureRecognizer *_customHighlighterGesture;
}

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) UITextInteractionInputDelegate *interactionInputDelegate;
@property (weak, nonatomic) NSObject<UITextInteraction_AssistantDelegate> *assistantDelegate;
@property (readonly, weak) UITextInteraction *parent;
@property (readonly, weak) UITextInteraction *root;
@property (readonly, nonatomic) UIView *gestureRecognizerHostView;
@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic) NSArray *gestures;
@property (readonly, nonatomic) NSDictionary *gestureMap;
@property (nonatomic) BOOL inGesture;
@property (readonly, nonatomic) long long textInteractionSet;
@property (readonly, nonatomic) UITextCursorAssertionController *_assertionController;
@property (retain, nonatomic) UILongPressGestureRecognizer *_customHighlighterGesture;
@property (nonatomic) BOOL _allowsSelectionCommands;
@property (weak, nonatomic) NSObject<UITextInteractionDelegate> *delegate;
@property (weak, nonatomic) UIResponder<UITextInput> *textInput;
@property (readonly, nonatomic) long long textInteractionMode;
@property (readonly, nonatomic) NSArray *gesturesForFailureRequirements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)textInteractionForMode:(long long)mode;
+ (id)textInteractionsForSet:(long long)set;

/* instance methods */
- (id)init;
- (void)addChild:(id)child;
- (void)addIndirectChild:(id)child;
- (void)removeChild:(id)child;
- (id)interactionWithGestureForName:(id)name;
- (id)interactionWithClass:(Class)class;
- (void)finishSetup;
- (id)_transientState;
- (void)_applyTransientState:(id)state;
- (BOOL)doesControlDelegate;
- (void)addGestureRecognizer:(id)recognizer withName:(id)name;
- (void)removeGestureRecognizerWithName:(id)name;
- (id)recognizerForName:(id)name;
- (void)_cancelRecognizerWithName:(id)name;
- (BOOL)shouldAllowWithTouchTypes:(id)types atPoint:(struct CGPoint { double x0; double x1; })point toBegin:(BOOL)begin;
- (void)_callDelegateWillMoveTextRangeExtentAtPoint:(struct CGPoint { double x0; double x1; })point;
- (void)willMoveToView:(id)view;
- (void)didMoveToView:(id)view;
- (void)_performGestureType:(long long)type state:(long long)state location:(struct CGPoint { double x0; double x1; })location;
- (void)_performGestureType:(long long)type state:(long long)state location:(struct CGPoint { double x0; double x1; })location locationOfFirstTouch:(struct CGPoint { double x0; double x1; })touch;
- (void)_performGestureType:(long long)type state:(long long)state location:(struct CGPoint { double x0; double x1; })location locationOfFirstTouch:(struct CGPoint { double x0; double x1; })touch forTouchType:(long long)type;
- (void)_createFeedbackIfNecessary;
- (void)_prepareFeedbackForGesture;
- (void)_cleanUpFeedbackForGesture;
- (void)_playFeedbackForCursorMovement;
- (id)linkInteractionSession;
- (void)_setLinkInteractionSession:(id)session;
- (void)cancelLinkInteractionSession;
- (BOOL)_shouldObscureTextInput;
- (id)_textInput;
- (BOOL)_textInputIsInteractive;
- (BOOL)_textInputLivesInKeyWindow;
- (void)_performPreemtiveLayoutToEnsureNoMoreLayoutWhileSelecting:(id)selecting;
- (BOOL)containerChangesSelectionOnOneFingerTap;
- (void)disableClearsOnInsertion;
- (BOOL)selection:(id)selection containsPoint:(struct CGPoint { double x0; double x1; })point;
- (BOOL)currentSelectionContainsPoint:(struct CGPoint { double x0; double x1; })point;
- (id)rangeWithTextAlternatives:(id *)alternatives atPosition:(id)position;
- (double)distanceBetweenPoint:(struct CGPoint { double x0; double x1; })point andRects:(id)rects;
- (BOOL)shouldHandleFormGestureAtLocation:(struct CGPoint { double x0; double x1; })location;
- (id)defaultTripleTapRecognizerWithAction:(SEL)action;
- (id)defaultDoubleTapRecognizerWithAction:(SEL)action;
- (id)defaultTapRecognizerWithAction:(SEL)action;
- (BOOL)interaction_gestureRecognizerShouldBegin:(id)begin;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (void)updateTextInputSourceForScribbleGesture:(id)gesture;
- (BOOL)_shouldAllowEnforcedTouchTypeForTouch:(id)touch forGestureRecognizer:(id)recognizer;
- (BOOL)interaction_gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (id)_updatedAccessibilityTextMenuWithMenuElements:(id)elements;
- (void)_presentTextEditMenuWithOverrideMenu:(id)menu;
- (void)_setAllowsSelectionCommands:(BOOL)commands;
@end

#endif /* UITextInteraction_h */

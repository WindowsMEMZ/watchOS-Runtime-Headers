//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKeyboardLayout_h
#define UIKeyboardLayout_h
@import Foundation;

#include "UIView.h"
#include "UIEvent.h"
#include "UIKBCadenceMonitor.h"
#include "UIKBScreenTraits.h"
#include "UIKBTextEditingTraits.h"
#include "UIKeyboardLayoutSizeDelegate-Protocol.h"
#include "UIKeyboardTaskQueue.h"
#include "UIKeyboardTypingStyleEstimator.h"
#include "UITextInputTraits.h"
#include "_UIKBRTFingerDetection.h"
#include "_UIKBRTRecognizer.h"
#include "_UIKBRTRecognizerDelegate-Protocol.h"
#include "_UIKBRTTouchDrifting.h"
#include "_UIKBRTTouchDriftingDelegate-Protocol.h"
#include "_UIKBRTTouchVelocities.h"
#include "_UIScreenEdgePanRecognizer.h"
#include "_UIScreenEdgePanRecognizerDelegate-Protocol.h"
#include "_UIViewRepresentingKeyboardLayout-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface UIKeyboardLayout : UIView<_UIKBRTRecognizerDelegate, _UIKBRTTouchDriftingDelegate, _UIViewRepresentingKeyboardLayout, _UIScreenEdgePanRecognizerDelegate> {
  /* instance variables */
  UITextInputTraits *_inputTraits;
  UIKBTextEditingTraits *_textEditingTraits;
  NSMutableArray *_uncommittedTouchUUIDs;
}

@property (retain, nonatomic) _UIScreenEdgePanRecognizer *screenEdgePanRecognizer;
@property (retain, nonatomic) _UIKBRTRecognizer *handRestRecognizer;
@property (retain, nonatomic) _UIKBRTFingerDetection *fingerDetection;
@property (retain, nonatomic) _UIKBRTTouchDrifting *touchDrifting;
@property (retain, nonatomic) UIKBCadenceMonitor *cadenceMonitor;
@property (retain, nonatomic) _UIKBRTTouchVelocities *touchVelocities;
@property (copy, nonatomic) id /* block */ deferredTouchDownTask;
@property (copy, nonatomic) id /* block */ deferredTouchMovedTask;
@property (retain, nonatomic) NSMutableDictionary *deferredTouchTaskLists;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *deferredTouchTaskListsQueue;
@property (retain, nonatomic) NSMutableSet *touchIgnoredUUIDSet;
@property (nonatomic) BOOL isExecutingDeferredTouchTasks;
@property (nonatomic) double lastTouchUpTime;
@property (nonatomic) BOOL listeningForWillChange;
@property (nonatomic) BOOL listeningForDidChange;
@property (retain, nonatomic) UIKeyboardTaskQueue *taskQueue;
@property (retain, nonatomic) NSUUID *activeTouchUUID;
@property (retain, nonatomic) NSUUID *shiftKeyTouchUUID;
@property (readonly, nonatomic) long long orientation;
@property (readonly, nonatomic) long long idiom;
@property (readonly, nonatomic) BOOL isFloating;
@property (nonatomic) BOOL hideKeysUnderIndicator;
@property (retain, nonatomic) NSString *layoutTag;
@property (readonly, nonatomic) double timestampOfLastTouchesEnded;
@property (copy, nonatomic) id /* block */ deferredTaskForActiveTouch;
@property (readonly, nonatomic) UIKeyboardTypingStyleEstimator *typingStyleEstimator;
@property (readonly, nonatomic) UIEvent *currentTouchDownEvent;
@property (nonatomic) BOOL ignoringKeyplaneChange;
@property (weak, nonatomic) NSObject<UIKeyboardLayoutSizeDelegate> *sizeDelegate;
@property (retain, nonatomic) UIKBScreenTraits *screenTraits;
@property (nonatomic) unsigned long long cursorLocation;
@property (nonatomic) BOOL disableInteraction;
@property (nonatomic) double preferredHeight;
@property (readonly, nonatomic) BOOL hasPreferredHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)_subclassForScreenTraits:(id)traits;
+ (struct CGSize { double x0; double x1; })keyboardSizeForInputMode:(id)mode screenTraits:(id)traits keyboardType:(long long)type;
+ (BOOL)_showSmallDisplayKeyplane;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)willMoveToWindow:(id)window;
- (void)reloadKeyboardWithInputTraits:(id)traits screenTraits:(id)traits splitTraits:(id)traits;
- (void)showKeyboardWithInputTraits:(id)traits screenTraits:(id)traits splitTraits:(id)traits;
- (void)setTextEditingTraits:(id)traits;
- (unsigned long long)textEditingKeyMask;
- (void)acceptRecentInputIfNecessary;
- (void)setRecentInputs:(id)inputs;
- (void)clearUnusedObjects:(BOOL)objects;
- (void)clearTransientState;
- (void)deactivateActiveKeys;
- (void)updateLocalizedKeys:(BOOL)keys;
- (BOOL)usesAutoShift;
- (BOOL)ignoresShiftState;
- (BOOL)isAlphabeticPlane;
- (BOOL)isKanaPlane;
- (BOOL)diacriticForwardCompose;
- (void)setShift:(BOOL)shift;
- (void)setAutoshift:(BOOL)autoshift;
- (BOOL)isShiftKeyBeingHeld;
- (BOOL)isGeometricShiftOrMoreKeyForTouch:(id)touch;
- (BOOL)isShiftKeyPlaneChooser;
- (void)longPressAction;
- (id)_keyboardLayoutView;
- (id)_keyboardLongPressInteractionRegions;
- (void)didClearInput;
- (BOOL)performReturnAction;
- (BOOL)performSpaceAction;
- (id)candidateList;
- (BOOL)hasCandidateKeys;
- (BOOL)hasAccentKey;
- (BOOL)canMultitap;
- (void)updateBackgroundCorners;
- (void)setRenderConfig:(id)config;
- (void)setLabel:(id)label forKey:(id)key;
- (void)setTarget:(id)target forKey:(id)key;
- (void)setAction:(SEL)action forKey:(id)key;
- (void)setLongPressAction:(SEL)action forKey:(id)key;
- (void)restoreDefaultsForKey:(id)key;
- (void)restoreDefaultsForAllKeys;
- (void)setReturnKeyEnabled:(BOOL)enabled withDisplayName:(id)name withType:(int)type;
- (void)deactivateActiveKeysClearingTouchInfo:(BOOL)info clearingDimming:(BOOL)dimming;
- (id)activationIndicatorView;
- (id)activationIndicatorMask;
- (BOOL)shouldShowIndicator;
- (void)fadeActivationIndicatorWithDuration:(double)duration withDelay:(double)delay;
- (BOOL)canProduceString:(id)string;
- (void)_setRequiresExclusiveTouch:(BOOL)touch;
- (id /* block */)touchDownTaskForTouchState:(id)state;
- (id)_touchStateForTouch:(id)touch;
- (void)touchDown:(id)down;
- (void)touchDown:(id)down executionContext:(id)context;
- (id /* block */)touchDraggedTaskForTouchState:(id)state;
- (void)touchDragged:(id)dragged;
- (void)touchDragged:(id)dragged executionContext:(id)context;
- (void)_touchEndedProcessingForTouches:(id)touches;
- (id /* block */)touchUpTaskForTouchState:(id)state;
- (void)touchUp:(id)up;
- (void)didCommitTouchState:(id)state;
- (void)touchUp:(id)up executionContext:(id)context;
- (id /* block */)touchCancelledTaskForTouchState:(id)state forResting:(BOOL)resting;
- (void)touchCancelled:(id)cancelled;
- (void)touchCancelled:(id)cancelled executionContext:(id)context;
- (void)touchCancelled:(id)cancelled forResting:(BOOL)resting executionContext:(id)context;
- (void)touchChanged:(id)changed executionContext:(id)context;
- (id /* block */)touchChangedTaskForTouchState:(id)state;
- (void)touchChanged:(id)changed;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)clearShiftIfNecessaryForEndedTouchState:(id)state;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)touchesEstimatedPropertiesUpdated:(id)updated;
- (void)_removeTouchesFromProcessing:(id)processing;
- (id)touchUUIDsToCommitBeforeTouchUUID:(id)uuid;
- (void)commitTouchUUIDs:(id)uuids cancelInsteadOfUp:(BOOL)up;
- (void)commitTouchUUIDs:(id)uuids;
- (void)forceUpdatesForCommittedTouch;
- (void)commitTouches:(id)touches executionContext:(id)context;
- (BOOL)canForceTouchUUIDCommit:(id)uuidcommit inWindow:(id)window;
- (void)_enumerateDeferredTouchUUIDs:(id)uuids withBlock:(id /* block */)block;
- (void)recognizerBlockUntilTaskQueueReadyForceUsingDeferredTask:(BOOL)task;
- (void)recognizer:(id)recognizer beginTouchDownForTouchWithId:(id)id atPoint:(struct CGPoint { double x0; double x1; })point forBeginState:(unsigned long long)state whenStateReady:(id /* block */)ready;
- (void)recognizer:(id)recognizer restartTouchDownForTouchWithId:(id)id startingAt:(double)at atPoint:(struct CGPoint { double x0; double x1; })point currentPoint:(struct CGPoint { double x0; double x1; })point whenStateReady:(id /* block */)ready;
- (void)recognizer:(id)recognizer shouldContinueTrackingTouchWithId:(id)id startingAt:(double)at atPoint:(struct CGPoint { double x0; double x1; })point currentPoint:(struct CGPoint { double x0; double x1; })point forContinueState:(unsigned long long)state whenStateReady:(id /* block */)ready;
- (BOOL)queryShouldNeverIgnoreTouchStateWithIdentifier:(id)identifier touchState:(id)state startPoint:(struct CGPoint { double x0; double x1; })point forRestingState:(unsigned long long)state;
- (void)recognizer:(id)recognizer willIgnoreTouchWithId:(id)id startingAt:(double)at atPoint:(struct CGPoint { double x0; double x1; })point currentPoint:(struct CGPoint { double x0; double x1; })point whenReady:(id /* block */)ready;
- (void)recognizer:(id)recognizer continueTrackingIgnoredTouchWithId:(id)id currentPoint:(struct CGPoint { double x0; double x1; })point whenReady:(id /* block */)ready;
- (void)recognizer:(id)recognizer releaseTouchToLayoutWithId:(id)id startPoint:(struct CGPoint { double x0; double x1; })point endPoint:(struct CGPoint { double x0; double x1; })point whenReady:(id /* block */)ready;
- (void)recognizer:(id)recognizer cancelTouchOnLayoutWithId:(id)id startPoint:(struct CGPoint { double x0; double x1; })point endPoint:(struct CGPoint { double x0; double x1; })point whenReady:(id /* block */)ready;
- (void)resetHRRLayoutState;
- (BOOL)_shouldAllowKeyboardHandlingIfNecessaryForTouch:(id)touch phase:(long long)phase withTouchState:(id)state task:(id /* block */)task;
- (void)_clearDeferredTouchTasks;
- (void)_executeDeferredTouchTasks;
- (void)_addTouchToScreenEdgePanRecognizer:(id)recognizer;
- (void)assertSavedLocation:(struct CGPoint { double x0; double x1; })location onTouch:(id)touch inWindow:(id)window resetPrevious:(BOOL)previous;
- (BOOL)_shouldAllowKeyboardHandlingForTouchesBegan:(id)began withEvent:(id)event;
- (BOOL)_shouldAllowKeyboardHandlingForTouchesMoved:(id)moved withEvent:(id)event;
- (BOOL)_shouldAllowKeyboardHandlingForTouchesEndedOrCancelled:(id)cancelled withEvent:(id)event;
- (void)_resetFingerDetectionFromLayout;
- (void)didMoveToWindow;
- (void)reloadKeyboardGestureRecognition;
- (void)updateTouchProcessingForKeyboardChange;
- (void)updateTouchProcessingForKeyplaneChange;
- (void)resetTouchProcessingForKeyboardChange;
- (BOOL)_canAddTouchesToScreenGestureRecognizer:(id)recognizer;
- (void)screenEdgePanRecognizerStateDidChange:(id)change;
- (unsigned char)getHandRestRecognizerState;
- (BOOL)handRestRecognizerShouldNeverIgnoreTouchState:(id)state fromPoint:(struct CGPoint { double x0; double x1; })point toPoint:(struct CGPoint { double x0; double x1; })point forRestingState:(unsigned long long)state otherRestedTouchLocations:(id)locations;
- (struct CGSize { double x0; double x1; })handRestRecognizerStandardKeyPixelSize;
- (id /* block */)handRestRecognizerSilenceNextTouchDown;
- (void)handRestRecognizerNotifyRestForBegin:(BOOL)begin location:(struct CGPoint { double x0; double x1; })location timestamp:(double)timestamp pathIndex:(int)index touchUUID:(id)uuid context:(id)context;
- (struct CGPoint { double x0; double x1; })getCenterForKeyUnderLeftIndexFinger;
- (struct CGPoint { double x0; double x1; })getCenterForKeyUnderRightIndexFinger;
- (id)getHorizontalOffsetFromHomeRowForRowRelativeToHomeRow:(long long)row;
- (void)_updateTouchState:(id)state errorVector:(struct CGPoint { double x0; double x1; })vector rowOffsetFromHomeRow:(long long)row;
- (void)_ignoreTouchState:(id)state;
- (BOOL)_hasRelatedTouchesForTouchState:(id)state;
- (BOOL)_handRestRecognizerCancelShouldBeEnd;
- (BOOL)isReachableDevice;
- (BOOL)supportsVirtualDrift;
- (void)setNeedsVirtualDriftUpdate;
- (struct CGPoint { double x0; double x1; })leftVirtualDriftOffset;
- (struct CGPoint { double x0; double x1; })rightVirtualDriftOffset;
- (void)_uikbrtTouchDriftingStateChanged:(id)changed;
- (unsigned long long)_uikbrtTouchDrifting:(id)drifting fingerIDFortouchIdentifier:(id)identifier;
- (id)_uikbrtTouchDrifting:(id)drifting touchIdentifiersForFingerID:(unsigned long long)id;
- (struct CGPoint { double x0; double x1; })_uikbrtTouchDrifting:(id)drifting touchCenterForFingerID:(unsigned long long)id;
- (unsigned long long)fingerIDForTouchUUID:(id)uuid;
- (unsigned long long)targetEdgesForScreenGestureRecognition;
- (BOOL)canHandleEvent:(id)event;
- (BOOL)canHandlePresses:(id)presses withEvent:(id)event;
- (double)hitBuffer;
- (double)flickDistance;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dragGestureRectInView:(id)view;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForKeylayoutName:(id)name;
- (SEL)handlerForNotification:(id)notification;
- (void)fadeWithInvocation:(id)invocation;
- (BOOL)shouldFadeFromLayout;
- (BOOL)shouldFadeToLayout;
- (void)setPasscodeOutlineAlpha:(double)alpha;
- (void)setDisableTouchInput:(BOOL)input;
- (void)willBeginIndirectSelectionGesture;
- (void)didEndIndirectSelectionGesture;
- (void)cancelTouchesForTwoFingerTapGesture:(id)gesture;
- (void)willBeginTrackpadModeForServerSideDictation;
- (void)didEndTrackpadModeForServerSideDictation;
- (long long)currentHandBias;
- (double)biasedKeyboardWidthRatio;
- (void)traitCollectionDidChange;
- (id)currentKeyplane;
- (BOOL)_allowContinuousPathUI;
- (void)triggerSpaceKeyplaneSwitchIfNecessary;
- (BOOL)keyplaneContainsDismissKey;
- (BOOL)keyplaneContainsEmojiKey;
- (BOOL)isEmojiKeyplane;
- (BOOL)supportsEmoji;
- (BOOL)isResizing;
- (BOOL)isResized;
- (BOOL)isPossibleToTypeFast;
- (void)updateGlobeKeyAndLayoutOriginBeforeSnapshotForInputView:(id)view;
- (void)setKeyboardBias:(long long)bias;
- (BOOL)globeKeyDisplaysAsEmojiKey;
- (BOOL)showsDedicatedEmojiKeyAlongsideGlobeButton;
- (void)updateUndoKeyState;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })keyplanePadding;
- (id)internationalKeyDisplayStringOnEmojiKeyboard;
- (BOOL)shouldAllowSelectionGestures:(BOOL)gestures atPoint:(struct CGPoint { double x0; double x1; })point toBegin:(BOOL)begin;
- (void)setTwoFingerTapTimestamp:(double)timestamp;
- (struct CGSize { double x0; double x1; })stretchFactor;
- (BOOL)shouldMergeAssistantBarWithKeyboardLayout;
- (id)baseKeyForString:(id)string;
- (id)keyplaneForKey:(id)key;
- (id)keyplaneNamed:(id)named;
- (void)changeToKeyplane:(id)keyplane;
- (id)simulateTouch:(struct CGPoint { double x0; double x1; })touch;
- (id)simulateTouchForCharacter:(id)character errorVector:(struct CGPoint { double x0; double x1; })vector shouldTypeVariants:(BOOL)variants baseKeyForVariants:(BOOL)variants;
- (void)preparePopupVariantsForKey:(id)key onKeyplane:(id)keyplane;
- (BOOL)hasActiveContinuousPathInput;
- (BOOL)isHandwritingPlane;
- (id)getRomanAccentVariantsForString:(id)string inputMode:(id)mode keyboardVariantIndludes:(int)indludes;
- (void)restoreFocusFromEntryPoint:(struct CGPoint { double x0; double x1; })point;
@end

#endif /* UIKeyboardLayout_h */

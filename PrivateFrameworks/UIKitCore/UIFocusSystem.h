//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIFocusSystem_h
#define UIFocusSystem_h
@import Foundation;

#include "UIFocusAnimationCoordinator.h"
#include "UIFocusEnvironment-Protocol.h"
#include "UIFocusItem-Protocol.h"
#include "UIFocusItemContainer-Protocol.h"
#include "UIFocusMovementAction.h"
#include "UIFocusSystem.h"
#include "UIResponder.h"
#include "UIView.h"
#include "_UIFocusAnimationCoordinatorManager.h"
#include "_UIFocusBehavior-Protocol.h"
#include "_UIFocusCastingController.h"
#include "_UIFocusEnvironmentInternal-Protocol.h"
#include "_UIFocusEnvironmentPrivate-Protocol.h"
#include "_UIFocusEventDelivery.h"
#include "_UIFocusGroupHistory.h"
#include "_UIFocusHapticFeedbackGenerator-Protocol.h"
#include "_UIFocusItemFrameReporter.h"
#include "_UIFocusLinearMovementCache.h"
#include "_UIFocusRegionContainer-Protocol.h"
#include "_UIFocusSoundGenerator.h"
#include "_UIFocusSystemDelegate-Protocol.h"
#include "_UIFocusSystemSceneComponent.h"
#include "_UIFocusUpdateRequest.h"
#include "_UIFocusUpdateThrottle.h"

@class NSArray, NSNumber, NSString, NSTimer;

@interface UIFocusSystem : NSObject<_UIFocusEnvironmentInternal, _UIFocusEnvironmentPrivate> {
  /* instance variables */
  _UIFocusSystemSceneComponent *_sceneComponent;
  _UIFocusUpdateRequest *_pendingFocusUpdateRequest;
  NSObject<UIFocusItem> *_deferredFocusUpdateTarget;
  NSObject<UIFocusEnvironment> *_appearingFocusEnvironment;
  UIResponder *_overridePreferredFirstResponder;
  NSTimer *_hasSeenFocusedItemDidExpireTimer;
  struct { unsigned int x :1 hasReceivedTeardownNotification; unsigned int x :1 shouldIgnoreFocusUpdateIfNeeded; unsigned int x :1 isPendingFocusRestoration; unsigned int x :1 isPostponingUpdates; unsigned int x :1 hasSeenFocusedItem; unsigned int x :1 wantsModernRing; unsigned int x :1 delegateRespondsToPreferredFocusEnvironments; unsigned int x :1 delegateRespondsToPrefersDeferralForFocusUpdateInContext; unsigned int x :1 delegateRespondsToShouldRestoreFocusInContext; unsigned int x :1 delegateRespondsToDidFinishUpdatingFocusInContext; unsigned int x :1 delegateRespondsToFocusMapContainer; unsigned int x :1 delegateRespondsToFocusItemContainer; } _flags;
  _UIFocusEventDelivery *_eventDelivery;
  NSObject<UIFocusEnvironment> *_deepestPreferredFocusEnvironment;
}

@property (retain, nonatomic) _UIFocusAnimationCoordinatorManager *focusAnimationCoordinatorManager;
@property (nonatomic) BOOL waitingForFocusMovementAction;
@property (retain, nonatomic) UIFocusMovementAction *pendingFocusMovementAction;
@property (readonly, nonatomic) _UIFocusUpdateThrottle *updateThrottle;
@property (weak, nonatomic) NSObject<_UIFocusSystemDelegate> *delegate;
@property (readonly, weak, nonatomic) UIView *focusedView;
@property (readonly, nonatomic) UIFocusAnimationCoordinator *currentFocusAnimationCoordinator;
@property (readonly, weak, nonatomic) NSObject<UIFocusItem> *previousFocusedItem;
@property (readonly, weak, nonatomic) UIFocusSystem *hostFocusSystem;
@property (readonly, weak, nonatomic) UIFocusSystem *preferredFirstResponderFocusSystem;
@property (readonly, weak, nonatomic) UIResponder *preferredFirstResponder;
@property (retain, nonatomic) _UIFocusSoundGenerator *focusSoundGenerator;
@property (retain, nonatomic) _UIFocusItemFrameReporter *focusItemFrameReporter;
@property (retain, nonatomic) _UIFocusCastingController *focusCastingController;
@property (retain, nonatomic) _UIFocusLinearMovementCache *focusMovementCache;
@property (retain, nonatomic) NSObject<_UIFocusHapticFeedbackGenerator> *focusHapticFeedbackGenerator;
@property (readonly, nonatomic) _UIFocusGroupHistory *focusGroupHistory;
@property (readonly, nonatomic) _UIFocusEventDelivery *_eventDelivery;
@property (readonly, nonatomic) NSObject<_UIFocusBehavior> *focusBehavior;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSNumber *overrideFocusDeferralBehavior;
@property (readonly, nonatomic) NSObject<UIFocusEnvironment> *disappearingFocusEnvironment;
@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *_deepestPreferredFocusEnvironment;
@property (readonly, weak, nonatomic) NSObject<UIFocusItem> *focusedItem;
@property (readonly, weak, nonatomic) NSObject<_UIFocusRegionContainer> *focusMapContainer;
@property (nonatomic) BOOL areChildrenFocused;
@property (readonly, nonatomic) BOOL eligibleForFocusInteraction;
@property (readonly, nonatomic) BOOL eligibleForFocusOcclusion;
@property (readonly, nonatomic) long long preferredFocusMovementStyle;
@property (readonly, copy, nonatomic) NSArray *linearFocusMovementSequences;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *parentFocusEnvironment;
@property (readonly, nonatomic) NSObject<UIFocusItemContainer> *focusItemContainer;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)focusSystemForEnvironment:(id)environment;
+ (id)_focusSystemForEnvironment:(id)environment;
+ (id)_allFocusSystems;
+ (BOOL)environment:(id)environment containsEnvironment:(id)environment;
+ (void)registerURL:(id)url forSoundIdentifier:(id)identifier;

/* instance methods */
- (id)init;
- (id)_init;
- (id)_initWithFocusEnabled:(BOOL)enabled sceneComponent:(id)component;
- (id)_sceneComponent;
- (id)_focusBehavior;
- (void)_prepareForTeardown;
- (void)_setEnabled:(BOOL)enabled;
- (void)_setEnabled:(BOOL)enabled withAnimationCoordinator:(id)coordinator;
- (BOOL)_focusSystemIsValid;
- (void)_enableWithoutFocusRestoration;
- (id)_focusedItemOrDeferralTarget;
- (id)_focusItemForValidation;
- (BOOL)_hasValidItemForCurrentDeferralState;
- (id)_focusedView;
- (id)_focusedWindow;
- (id)_currentFocusAnimationCoordinator;
- (void)_setFocusItemFrameReporter:(id)reporter;
- (void)_setFocusCastingController:(id)controller;
- (id)_focusGroupHistory;
- (BOOL)_prefersDeferralForFocusUpdateInContext:(id)context;
- (id)_configureFocusDeferralIfNecessaryForContext:(id)context report:(id)report;
- (BOOL)_performDeferredFocusUpdateIfAvailable;
- (void)_tickHasSeenFocusedItemTimer:(BOOL)timer;
- (void)_resetFocusDeferral;
- (void)_startDeferringFocusIfSupported;
- (void)_clearDeferredFocusUpdateTarget;
- (void)_hasSeenFocusedItemDidExpire;
- (void)_setDeferredFocusUpdateTarget:(id)target;
- (long long)_effectiveFocusDeferralBehavior;
- (void)_setOverrideFocusDeferralBehavior:(id)behavior;
- (id)_focusMapContainer;
- (BOOL)_isEligibleForFocusInteraction;
- (BOOL)_isEligibleForFocusOcclusion;
- (void)setNeedsFocusUpdate;
- (BOOL)shouldUpdateFocusInContext:(id)context;
- (void)didUpdateFocusInContext:(id)context withAnimationCoordinator:(id)coordinator;
- (BOOL)_prefersFocusContainment;
- (void)requestFocusUpdateToEnvironment:(id)environment;
- (void)_requestFocusUpdate:(id)update;
- (void)_focusEnvironmentWillBecomeInvisible:(id)invisible;
- (void)_focusEnvironmentWillDisappear:(id)disappear;
- (void)_focusEnvironmentDidBecomeVisible:(id)visible;
- (void)_focusEnvironmentDidAppear:(id)appear;
- (id)_validatedAppearingFocusEnvironmentRequest;
- (id)_validatedPendingFocusUpdateRequest;
- (id)_topEnvironment;
- (BOOL)_debug_isEnvironmentEligibleForFocusUpdate:(id)update debugReport:(id)report;
- (BOOL)_isEnvironmentEligibleForFocusUpdate:(id)update fallbackToEnvironment:(id *)environment debugReport:(id)report;
- (void)updateFocusIfNeeded;
- (BOOL)_updateFocusWithContext:(id)context report:(id)report;
- (void)_sendWillUpdateFocusNotificationsInContext:(id)context withAnimationCoordinator:(id)coordinator;
- (void)_sendDidUpdateFocusNotificationsInContext:(id)context withAnimationCoordinator:(id)coordinator;
- (void)_sendNotificationsForFocusUpdateInContext:(id)context withAnimationCoordinator:(id)coordinator usingBlock:(id /* block */)block;
- (id)_disappearingFocusEnvironment;
- (void)_performWithoutFocusUpdates:(id /* block */)updates;
- (BOOL)_updateFocusImmediatelyWithContext:(id)context;
- (BOOL)_updateFocusImmediatelyToEnvironment:(id)environment startDeferringOnLostFocus:(BOOL)focus suppressLostFocusUpdate:(BOOL)update;
- (BOOL)_updateFocusImmediatelyToEnvironment:(id)environment;
- (void)_dropFocusAndStartDeferring:(BOOL)deferring suppressUpdate:(BOOL)update;
- (id)_simulatedNonDeferredProgrammaticFocusUpdateToEnvironment:(id)environment;
- (id)_contextForUpdateToEnvironment:(id)environment withAnimationCoordinator:(id)coordinator;
- (id)_contextForUpdateToEnvironment:(id)environment withAnimationCoordinator:(id)coordinator allowsOverridingPreferedFocusEnvironments:(BOOL)environments allowsDeferral:(BOOL)deferral;
- (void)invalidateFocusItemContainer:(id)container;
- (void)_reevaluateLockedEnvironments;
- (void)_setNeedsFocusRestoration;
- (void)_cancelPendingFocusRestoration;
- (void)_handleFocusMovementAction:(id)action;
- (void)_validateFocusedItemForFirstResponder:(id)responder;
- (id)_syncResponderWithFocusUpdateContext:(id)context;
- (void)_firstResponderDidUpdateFromResponder:(id)responder;
- (BOOL)_requiresFocusedItemToHaveContainingView;
- (BOOL)_postsFocusUpdateNotifications;
- (id)_hostFocusSystem;
- (id)_preferredFirstResponderFocusSystem;
- (id)_preferredFirstResponderFocusSystemForFocusedItem:(id)item;
- (id)_preferredFirstResponder;
- (BOOL)_uiktest_updateFocusToItem:(id)item;
- (void)_uiktest_setPreviousFocusedItem:(id)item;
- (void)_uiktest_disableFocusDeferral;
- (void)_uiktest_disableThrottle;
- (void)_setDelegate:(id)delegate;
- (BOOL)_shouldRestoreFocusInContext:(id)context;
- (void)_didFinishUpdatingFocusInContext:(id)context;
- (void)_focusBehaviorDidChange:(id)change;
- (void)_updateFocusUpdateThrottle;
- (void)_updateWantsModernRing;
- (void)_requestFocusEffectUpdateToEnvironment:(id)environment;
- (void)_updateFocusEffectForItem:(id)item;
- (id)_focusAnimationCoordinatorManager;
- (void)_setFocusAnimationCoordinatorManager:(id)manager;
- (id)_delegate;
- (id)_previousFocusedItem;
- (id)_focusSoundGenerator;
- (void)_setFocusSoundGenerator:(id)generator;
- (id)_focusItemFrameReporter;
- (id)_focusCastingController;
- (id)_focusMovementCache;
- (void)_setFocusMovementCache:(id)cache;
- (id)_focusHapticFeedbackGenerator;
- (void)_setFocusHapticFeedbackGenerator:(id)generator;
- (BOOL)_isEnabled;
- (id)_overrideFocusDeferralBehavior;
@end

#endif /* UIFocusSystem_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSHBacklightEnvironmentStateMachine_h
#define BLSHBacklightEnvironmentStateMachine_h
@import Foundation;

#include "BLSHBacklightEnvironmentPresentation.h"
#include "BLSHBacklightEnvironmentStateMachineDelegate-Protocol.h"
#include "BLSHEnvironmentTransitionStateDelegate-Protocol.h"
#include "BLSHInactiveBudgetPolicing_Private-Protocol.h"
#include "BLSHOSTimerProviding-Protocol.h"
#include "BLSHPresentationDateSpecifier.h"
#include "BLSSetPresentationOperation.h"
#include "BSInvalidatable-Protocol.h"

@class NSMapTable, NSMutableArray, NSMutableSet, NSSet, NSString;

@interface BLSHBacklightEnvironmentStateMachine : NSObject<BLSHEnvironmentTransitionStateDelegate, BSInvalidatable> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  BLSHBacklightEnvironmentPresentation *_lock_presentation;
  NSMapTable *_transitionStates;
  NSMutableSet *_lock_updatingVisualStateTransitionStates;
  NSMutableSet *_lock_updatingDateSpecifierTransitionStates;
  BLSHPresentationDateSpecifier *_updatingSpecifier;
  NSMutableArray *_performEventHistory;
  NSMutableArray *_didBeginUpdateHistory;
  NSMutableArray *_didCompleteUpdateHistory;
  BLSSetPresentationOperation *_lock_setPresentationOperation;
  long long _lock_targetBacklightState;
  long long _lock_performEventTargetBacklightState;
  NSMutableSet *_lock_staleEnvironmentsThatNeedDeferredUpdate;
  int _lock_addingEnvironmentsCount;
  BOOL _lock_invalidated;
  unsigned long long _stateHandler;
}

@property (readonly, nonatomic) BLSHBacklightEnvironmentPresentation *presentation;
@property (readonly, weak, nonatomic) NSObject<BLSHBacklightEnvironmentStateMachineDelegate> *delegate;
@property (readonly, copy, nonatomic) NSSet *updatingVisualStateTransitionStates;
@property (readonly, copy, nonatomic) NSSet *updatingDateSpecifierTransitionStates;
@property (readonly, nonatomic) BOOL pendingNotifyBeganUpdatingState;
@property (readonly, nonatomic) BOOL updatingState;
@property (readonly, nonatomic) BOOL updatingPresentation;
@property (readonly, nonatomic) NSObject<BLSHInactiveBudgetPolicing_Private> *inactiveBudgetPolicy;
@property (readonly, nonatomic) NSObject<BLSHOSTimerProviding> *osTimerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPresentation:(id)presentation backlightState:(long long)state delegate:(id)delegate inactiveBudgetPolicy:(id)policy osTimerProvider:(id)provider;
- (void)dealloc;
- (void)invalidate;
- (void)setPresentation:(id)presentation withTargetBacklightState:(long long)state;
- (BOOL)isUpdatingState;
- (BOOL)isUpdatingPresentation;
- (void)performEvent:(id)event withInitialSpecifier:(id)specifier performBacklightRamp:(id /* block */)ramp;
- (void)updateAllEnvironmentsInPresentation;
- (void)updateEnvironment:(id)environment;
- (void)updateToSpecifier:(id)specifier;
- (void)populateEnvironmentStateMachineStruct:(struct { unsigned int x0 :1; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } x1; unsigned int x2; struct { unsigned int x0 :1; unsigned int x1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; } x3; struct { unsigned int x0 :1; unsigned int x1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; } x4; struct { unsigned int x0 :1; unsigned int x1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; } x5; struct { unsigned int x0 :1; unsigned int x1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; } x6; unsigned int x7; struct { unsigned int x0 :1; unsigned int x1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; } x8; struct { unsigned int x0 :1; unsigned int x1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; } x9; struct { unsigned int x0 :1; unsigned int x1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; } x10; struct { unsigned int x0 :1; unsigned int x1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; } x11; int x12; int x13; unsigned int x14 :1; unsigned int x15 :1; unsigned int x16 :1; } *)struct;
- (void)transitionState:(id)state didBeginUpdateToBacklightState:(long long)state visualState:(id)state;
- (void)transitionState:(id)state didCompleteUpdateToBacklightState:(long long)state visualState:(id)state;
- (void)transitionState:(id)state didUpdateToDateSpecifier:(id)specifier;
@end

#endif /* BLSHBacklightEnvironmentStateMachine_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBApplicationUpdateScenesTransaction_h
#define FBApplicationUpdateScenesTransaction_h
@import Foundation;

#include "FBSynchronizedTransactionGroup.h"
#include "FBApplicationProcess.h"
#include "FBApplicationProcessLaunchTransaction.h"
#include "FBApplicationProcessLaunchTransactionObserver-Protocol.h"
#include "FBUpdateSceneTransactionObserver-Protocol.h"

@class FBSSceneClientIdentity, NSMutableArray, NSString;

@interface FBApplicationUpdateScenesTransaction : FBSynchronizedTransactionGroup<FBApplicationProcessLaunchTransactionObserver, FBUpdateSceneTransactionObserver> {
  /* instance variables */
  FBSSceneClientIdentity *_clientIdentity;
  FBApplicationProcessLaunchTransaction *_processLaunchTransaction;
  BOOL _hasScheduledProcessLaunch;
  BOOL _processLaunched;
  NSMutableArray *_updateSceneTransactions;
  NSMutableArray *_pendingUpdateTransactions;
}

@property (readonly, nonatomic) FBApplicationProcess *process;
@property (nonatomic) BOOL waitsForSceneCommits;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithApplicationBundleID:(id)id executionContextProvider:(id /* block */)provider;
- (id)initWithClientIdentity:(id)identity executionContextProvider:(id /* block */)provider;
- (id)initWithProcessIdentity:(id)identity executionContextProvider:(id /* block */)provider;
- (void)updateSceneWithIdentifier:(id)identifier parameters:(id)parameters transitionContext:(id)context;
- (void)updateSceneWithIdentity:(id)identity parameters:(id)parameters transitionContext:(id)context;
- (void)_updateSceneWithIdentity:(id)identity parameters:(id)parameters transitionContext:(id)context;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)_willBegin;
- (void)_willAddChildTransaction:(id)transaction;
- (void)_didRemoveChildTransaction:(id)transaction;
- (BOOL)_shouldFailForChildTransaction:(id)transaction;
- (BOOL)_canBeInterrupted;
- (void)_willInterruptWithReason:(id)reason;
- (void)_willFailWithReason:(id)reason;
- (void)_didComplete;
- (id)_customizedDescriptionProperties;
- (void)_childTransactionDidComplete:(id)complete;
- (void)_childTransactionDidFinishWork:(id)work;
- (void)_didSatisfyMilestone:(id)milestone;
- (void)_noteWillCommitUpdateForScene:(id)scene;
- (void)_noteDidCommitUpdateForScene:(id)scene;
- (BOOL)_isReadyToLaunch;
- (void)_executeProcessLaunchIfAppropriate;
- (void)_executeSceneUpdatesIfAppropriate;
- (void)transaction:(id)transaction willLaunchProcess:(id)process;
- (void)transaction:(id)transaction didLaunchProcess:(id)process;
- (void)updateSceneTransactionDidCreateScene:(id)scene;
- (void)updateSceneTransactionWillUpdateScene:(id)scene;
- (void)updateSceneTransactionWillCommitUpdate:(id)update;
- (void)updateSceneTransactionDidCommitUpdate:(id)update;
@end

#endif /* FBApplicationUpdateScenesTransaction_h */

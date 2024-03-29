//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIKeyboardArbiterClientHandle_h
#define _UIKeyboardArbiterClientHandle_h
@import Foundation;

#include "_UIKeyboardArbiter.h"
#include "_UIKeyboardArbitration-Protocol.h"

@class BSAbsoluteMachTimer, BSServiceConnectionEndpointInjector, FBSCAContextSceneLayer, NSArray, NSMutableSet, NSString, NSXPCConnection, RBSAssertion, RBSProcessHandle, UIKBArbiterClientFocusContext;

@interface _UIKeyboardArbiterClientHandle : NSObject<_UIKeyboardArbitration> {
  /* instance variables */
  BOOL _invalidated;
  _UIKeyboardArbiter *_owner;
  NSMutableSet *_hostedPids;
  BOOL _checkingShowability;
  int _childrenSuppressionCount;
  BOOL _keyboardOnScreen;
  BSAbsoluteMachTimer *_acquiringFocusTimer;
  RBSAssertion *_remoteKeepAliveAssertion;
  unsigned long long _remoteKeepAliveAssertionCount;
  unsigned long long _remoteKeepAliveTimerCount;
  NSArray *_cachedContext;
  BSServiceConnectionEndpointInjector *_endpointGrantInjector;
}

@property (readonly) int processIdentifier;
@property (readonly, retain) NSString *bundleIdentifier;
@property (readonly, retain) RBSProcessHandle *processHandle;
@property (readonly) NSXPCConnection *connection;
@property BOOL running;
@property (readonly, retain) FBSCAContextSceneLayer *sceneLayer;
@property (readonly, retain) UIKBArbiterClientFocusContext *remoteFocusContext;
@property (readonly) BOOL active;
@property (readonly) unsigned long long wantedState;
@property (readonly) double level;
@property (readonly) double iavHeight;
@property (readonly) BOOL isKeyboardOnScreen;
@property int prevActiveIdentifier;
@property BOOL isViewService;
@property (readonly) BOOL wantsFence;
@property (readonly) BOOL deactivating;
@property (readonly) BOOL hasHostedPids;
@property (readonly) BOOL multipleScenes;
@property int suppressionCount;
@property (nonatomic) BOOL inputUIHost;
@property (nonatomic) BOOL hasDebugInformationEntitlement;
@property (nonatomic) BOOL requiresInputUIForAutofillUIOnly;
@property (readonly, nonatomic) BOOL acquiringFocus;
@property (nonatomic) BOOL requestedCorrectionOfClientSceneIdentityWhileAcquiringFocus;
@property (copy, nonatomic) id /* block */ pendingNotifyKeyboardChanged;

/* class methods */
+ (id)handlerWithArbiter:(id)arbiter forConnection:(id)connection;

/* instance methods */
- (void)dealloc;
- (void)updateSuspensionCountForPids:(id)pids active:(BOOL)active;
- (void)addHostedPids:(id)pids;
- (void)startArbitrationWithExpectedState:(id)state hostingPIDs:(id)pids usingFence:(BOOL)fence withSuppression:(int)suppression onConnected:(id /* block */)connected;
- (void)startArbitrationWithExpectedState:(id)state focusContext:(id)context hostingPIDs:(id)pids usingFence:(BOOL)fence withSuppression:(int)suppression onConnected:(id /* block */)connected;
- (void)_deactivateScene;
- (void)activeProcessResign;
- (BOOL)_isKeyboardOnScreen:(id)screen;
- (void)beginAcquiringFocusOnQueue:(id)queue;
- (BOOL)_shouldRejectSceneIdentityUpdateCorrectingClientIfNeeded:(id)needed fromSelector:(SEL)selector;
- (void)clearAcquiringFocus;
- (void)setWindowContextID:(unsigned int)id focusContext:(id)context windowState:(unsigned long long)state withLevel:(double)level;
- (void)setClientFocusContext:(id)context;
- (void)_reevaluateRemoteFocusContext:(id)context;
- (void)checkActivation:(unsigned long long)activation;
- (void)didAttachLayer;
- (void)didDetachLayer;
- (void)setWantsFencing:(BOOL)fencing;
- (void)signalKeyboardUIDidChange:(id)change onCompletion:(id /* block */)completion;
- (void)signalKeyboardClientChanged:(id)changed onCompletion:(id /* block */)completion;
- (void)signalKeyboardChanged:(id)changed onCompletion:(id /* block */)completion;
- (void)signalAutofillUIBringupWithCompletion:(id /* block */)completion;
- (void)signalKeyboardChangeComplete;
- (void)notifyIAVHeight:(double)iavheight;
- (void)setWindowHostingPID:(int)pid active:(BOOL)active;
- (void)notifyHostedPIDsOfSuppression:(BOOL)suppression;
- (void)notifyHostedPIDsOfSuppression:(BOOL)suppression active:(BOOL)active;
- (void)transition:(id)transition eventStage:(unsigned long long)stage withInfo:(id)info;
- (void)retrieveDebugInformation:(id /* block */)information;
- (void)retrieveMoreDebugInformationWithCompletion:(id /* block */)completion;
- (id)description;
- (BOOL)isHandlerShowableWithHandler:(id)handler;
- (BOOL)isHostingPID:(int)pid;
- (BOOL)takeProcessAssertionOnRemoteWithQueue:(id)queue;
- (void)releaseProcessAssertion;
- (void)cacheWindowContext;
- (void)uncacheWindowContext;
- (void)invalidate;
- (void)applicationShouldFocusWithBundle:(id)bundle onCompletion:(id /* block */)completion;
- (void)focusApplicationWithProcessIdentifier:(int)identifier context:(id)context onCompletion:(id /* block */)completion;
- (void)focusApplicationWithProcessIdentifier:(int)identifier context:(id)context stealingKeyboard:(BOOL)keyboard onCompletion:(id /* block */)completion;
- (void)setKeyboardTotalDisable:(BOOL)disable withFence:(id)fence completionHandler:(id /* block */)handler;
- (void)signalEventSourceChanged:(long long)changed completionHandler:(id /* block */)handler;
- (BOOL)isAcquiringFocus;
@end

#endif /* _UIKeyboardArbiterClientHandle_h */

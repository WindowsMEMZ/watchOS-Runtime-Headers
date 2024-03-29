//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSLinkActionService_h
#define CSLSLinkActionService_h
@import Foundation;

#include "CSLSConcurrentObserverStore.h"
#include "CSLSLinkAction.h"
#include "CSLSNextLinkActionProviding-Protocol.h"
#include "CSLSXPCService.h"
#include "CSLSXPCServiceDelegate-Protocol.h"

@class NSString;

@interface CSLSLinkActionService : NSObject<CSLSXPCServiceDelegate, CSLSNextLinkActionProviding> {
  /* instance variables */
  CSLSConcurrentObserverStore *_observers;
  CSLSXPCService *_service;
  CSLSLinkAction *_lastNextAction;
  NSString *_lastNextActionBundleID;
  CSLSLinkAction *_lastAlternateAction;
  NSString *_lastAlternateActionBundleID;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)serverInterface;

/* instance methods */
- (id)init;
- (void)_withLock:(id /* block */)lock;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)_setLastNextAction:(id)action for:(id)for;
- (void)clearNextAction:(id /* block */)action;
- (void)clearNextActionForBundleID:(id)id completion:(id /* block */)completion;
- (void)setNextAction:(id)action completion:(id /* block */)completion;
- (void)setNextAction:(id)action forApp:(id)app completion:(id /* block */)completion;
- (void)_setLastAlternateAction:(id)action for:(id)for;
- (void)clearAlternateAction:(id /* block */)action;
- (void)clearAlternateActionForBundleID:(id)id completion:(id /* block */)completion;
- (void)setAlternateAction:(id)action completion:(id /* block */)completion;
- (void)setAlternateAction:(id)action forApp:(id)app completion:(id /* block */)completion;
- (void)setNextAction:(id)action alternateAction:(id)action forApp:(id)app completion:(id /* block */)completion;
- (void)_resendNextAction:(id /* block */)action;
- (void)_resendAlternateAction:(id /* block */)action;
- (void)handleInterruption:(id)interruption;
- (void)handleInvalidation:(id)invalidation;
@end

#endif /* CSLSLinkActionService_h */

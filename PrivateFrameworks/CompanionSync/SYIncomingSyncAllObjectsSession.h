//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 267.0.0.0.0
//
#ifndef SYIncomingSyncAllObjectsSession_h
#define SYIncomingSyncAllObjectsSession_h
@import Foundation;

#include "SYIncomingFullSyncSession.h"

@class NSMutableArray;

@interface SYIncomingSyncAllObjectsSession : SYIncomingFullSyncSession {
  /* instance variables */
  NSMutableArray *_allObjectsAsData;
  id /* block */ _completion;
  BOOL canRestart;
  BOOL canRollback;
}

/* instance methods */
- (id)initWithService:(id)service message:(id)message completion:(id /* block */)completion;
- (void)_sendEndSessionResponse:(id)response;
- (void)_continueProcessing;
- (BOOL)canRestart;
- (void)setCanRestart:(BOOL)restart;
- (BOOL)canRollback;
- (void)setCanRollback:(BOOL)rollback;
@end

#endif /* SYIncomingSyncAllObjectsSession_h */

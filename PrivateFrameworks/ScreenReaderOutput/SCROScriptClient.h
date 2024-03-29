//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 346.2.9.0.0
//
#ifndef SCROScriptClient_h
#define SCROScriptClient_h
@import Foundation;

#include "SCROConnection.h"

@class NSLock, SCRCTargetSelectorTimer;
@protocol OS_dispatch_queue;

@interface SCROScriptClient : NSObject {
  /* instance variables */
  NSLock *_lock;
  SCROConnection *_connection;
  SCRCTargetSelectorTimer *_timer;
  BOOL _isReady;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_scriptDispatchQueue;

/* class methods */
+ (id)sharedClient;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_killConnection;
- (id)_lazyConnection;
- (BOOL)_isReady;
- (void)handleCallback:(id)callback;
- (BOOL)_runAsyncWithConnection:(int)connection object:(id)object;
- (BOOL)runScriptFile:(id)file;
- (BOOL)runShortcutWithIdentifier:(id)identifier;
@end

#endif /* SCROScriptClient_h */

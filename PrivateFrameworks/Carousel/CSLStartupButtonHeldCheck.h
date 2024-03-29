//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLStartupButtonHeldCheck_h
#define CSLStartupButtonHeldCheck_h
@import Foundation;

#include "CSLButtonCheckProviderProtocol-Protocol.h"

@protocol OS_dispatch_queue;

@interface CSLStartupButtonHeldCheck : NSObject {
  /* instance variables */
  NSObject<CSLButtonCheckProviderProtocol> *_provider;
  id /* block */ _heldBlock;
  id /* block */ _notHeldBlock;
  NSObject<OS_dispatch_queue> *_callbackQueue;
  BOOL _keyWasDown;
  BOOL _keyWasReleased;
  BOOL _timerDidFire;
  BOOL _callbackPerformed;
  NSObject<OS_dispatch_queue> *_eventQueue;
}

/* instance methods */
- (id)initWithHeldBlock:(id /* block */)block notHeldBlock:(id /* block */)block callbackQueue:(id)queue buttonCheckProvider:(id)provider;
- (void)setHeldBlock:(id /* block */)block notHeldBlock:(id /* block */)block;
- (void)_startListeningForEvents;
- (void)_stopListeningForEvents;
- (void)_performCallbackWasHeld:(BOOL)held;
@end

#endif /* CSLStartupButtonHeldCheck_h */

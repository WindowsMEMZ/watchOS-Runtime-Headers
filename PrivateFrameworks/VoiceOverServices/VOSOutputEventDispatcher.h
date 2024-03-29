//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef VOSOutputEventDispatcher_h
#define VOSOutputEventDispatcher_h
@import Foundation;

#include "VOSHapticPack-Protocol.h"
#include "VOSOutputEventDispatching-Protocol.h"
#include "VOSSoundPack-Protocol.h"

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface VOSOutputEventDispatcher : NSObject<VOSOutputEventDispatching> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSHashTable *_eventHandlers;
  NSObject<VOSSoundPack> *_cachedActiveSoundPack;
  NSObject<VOSHapticPack> *_cachedActiveHapticPack;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)_init;
- (id)_activeSoundPack;
- (id)_activeHapticPack;
- (void)addEventHandler:(id)handler;
- (void)removeEventHandler:(id)handler;
- (BOOL)shouldPlaySoundForEvent:(id)event;
- (BOOL)shouldPlayHapticForEvent:(id)event;
- (void)sendEvent:(id)event;
@end

#endif /* VOSOutputEventDispatcher_h */

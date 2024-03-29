//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBPrewarmManager_h
#define RBPrewarmManager_h
@import Foundation;

#include "RBEventQueue.h"
#include "RBProcessManaging-Protocol.h"
#include "RBTimeProviding-Protocol.h"

@class NSDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface RBPrewarmManager : NSObject {
  /* instance variables */
  NSObject<RBProcessManaging> *_delegate;
  NSObject<RBTimeProviding> *_timeProvider;
  NSObject<OS_dispatch_queue> *_prewarmingQueue;
  NSMutableSet *_pendingPrewarms;
  RBEventQueue *_prewarmingEventQueue;
  NSDictionary *_lastAppliedConfiguration;
  NSDictionary *_currentConfiguration;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dataLock;
}

/* instance methods */
- (id)_prewarmingQueue;
- (id)initWithDelegate:(id)delegate timeProvider:(id)provider;
- (void)_queue_runPrewarm;
- (void)_queue_addPrewarmForIdentity:(id)identity;
- (void)_queue_checkForNewPrewarms;
- (void)_queue_schedulePrewarmForIdentity:(id)identity withInterval:(id)interval;
- (void)prewarmingConfigurationDidChange:(id)change;
- (void)identityDidTerminate:(id)terminate;
@end

#endif /* RBPrewarmManager_h */

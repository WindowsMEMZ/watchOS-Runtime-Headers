//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 38.0.15.0.0
//
#ifndef SCLSchoolMode_h
#define SCLSchoolMode_h
@import Foundation;

#include "SCLScheduleSettings.h"
#include "SCLSchoolModeConfiguration.h"
#include "SCLSchoolModeXPCClient.h"
#include "SCLSchoolModeXPCClientDelegate-Protocol.h"
#include "SCLState.h"

@class NSString;

@interface SCLSchoolMode : NSObject<SCLSchoolModeXPCClientDelegate> {
  /* instance variables */
  SCLSchoolModeXPCClient *_xpcClient;
  SCLSchoolModeConfiguration *_configuration;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property unsigned long long resumeState;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL loaded;
@property (readonly, nonatomic) SCLState *state;
@property (readonly, nonatomic) SCLScheduleSettings *scheduleSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)addUnlockHistoryItem:(id)item completion:(id /* block */)completion;
- (void)deleteHistoryWithCompletion:(id /* block */)completion;
- (void)noteSignificantUserInteraction;
- (void)dumpState;
- (void)triggerRemoteSync;
- (id)init;
- (id)initWithIdentifier:(id)identifier;
- (id)initWithIdentifier:(id)identifier delegate:(id)delegate;
- (id)initWithIdentifier:(id)identifier pairingID:(id)id delegate:(id)delegate;
- (id)initWithConfiguration:(id)configuration;
- (void)dealloc;
- (id)delegate;
- (BOOL)isLoaded;
- (void)resume;
- (void)setActive:(BOOL)active completion:(id /* block */)completion;
- (void)setActive:(BOOL)active options:(unsigned long long)options completion:(id /* block */)completion;
- (void)applyScheduleSettings:(id)settings completion:(id /* block */)completion;
- (void)fetchRecentUnlockHistoryItemsWithCompletion:(id /* block */)completion;
- (void)_assertQueueIfReady;
- (void)client:(id)client didUpdateToState:(id)state fromState:(id)state;
- (void)client:(id)client didUpdateScheduleSettings:(id)settings;
- (void)clientDidChangeUnlockHistory:(id)history;
- (void)client:(id)client didLoadScheduleSettings:(id)settings;
@end

#endif /* SCLSchoolMode_h */

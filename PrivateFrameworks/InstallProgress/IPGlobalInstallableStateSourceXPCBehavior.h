//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 8.0.0.0.0
//
#ifndef IPGlobalInstallableStateSourceXPCBehavior_h
#define IPGlobalInstallableStateSourceXPCBehavior_h
@import Foundation;

#include "IPGlobalInstallableStateSourceBehavior-Protocol.h"
#include "IPStateAndProgressRegistry-Protocol.h"
#include "IPStateUpdateStreamSource-Protocol.h"
#include "IPStateUpdateStreamSourceDelegate-Protocol.h"
#include "IPXPCClientInterface-Protocol.h"

@class NSHashTable, NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface IPGlobalInstallableStateSourceXPCBehavior : NSObject<IPXPCClientInterface, IPStateAndProgressRegistry, IPStateUpdateStreamSourceDelegate, IPGlobalInstallableStateSourceBehavior> {
  /* instance variables */
  NSObject<IPStateUpdateStreamSource> *_stateStreamSource;
  id /* block */ _connectionProvider;
  NSXPCConnection *_currentConnection;
  NSMutableDictionary *_registeredStateSources;
  NSMutableDictionary *_registeredProgressSources;
  NSHashTable *_stateUpdateObservers;
  NSObject<OS_dispatch_queue> *_q;
  NSObject<OS_dispatch_queue> *_calloutQueue;
  BOOL _registeredForProgress;
  BOOL _registeredForState;
  BOOL _stateStreamSourceResumed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithXPCConnectionProvider:(id /* block */)provider stateStreamSource:(id)source queue:(id)queue;
- (void)registerStateSource:(id)source;
- (void)unregisterStateSource:(id)source;
- (void)registerProgressSource:(id)source;
- (void)unregisterProgressSource:(id)source;
- (void)_queue_resumeStateStreamSourceIfNecessary;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)_queue_registerAsProgressObserverIfNecessary;
- (id)_queue_connectedConnection;
- (id)_queue_syncProxyWithErrorHandler:(id /* block */)handler;
- (id)_queue_asyncProxyWithErrorHandler:(id /* block */)handler;
- (id)_installableStateSourcesForStates:(id)states;
- (id)_queue_makeExtantStateSourcesForGlobalSource:(id)source error:(id *)error;
- (id)_queue_makeInstallingStateSourcesForGlobalSource:(id)source error:(id *)error;
- (void)makeInstallingStateSourcesForGlobalSource:(id)source andEnumerate:(id /* block */)enumerate;
- (void)makeExtantStateSourcesForGlobalSource:(id)source andEnumerate:(id /* block */)enumerate;
- (id)currentProgressForIdentity:(id)identity error:(id *)error;
- (void)serverActionBarrierForTesting;
- (void)installableForIdentity:(id)identity progressChanged:(id)changed;
- (void)installableForIdentity:(id)identity progressEndedForReason:(unsigned long long)reason;
- (void)_queue_noteInstallBeganForIdentity:(id)identity;
- (void)_queue_sendStateSourceAvailableForIdentity:(id)identity;
- (void)_queue_sendStateSourceUnavailableForIdentity:(id)identity;
- (void)stateUpdateStreamSource:(id)source updateMessageReceived:(id)received;
@end

#endif /* IPGlobalInstallableStateSourceXPCBehavior_h */

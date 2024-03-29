//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSWorkspaceScenesClient_h
#define FBSWorkspaceScenesClient_h
@import Foundation;

#include "FBSSceneHostHandle.h"
#include "FBSSceneUpdater-Protocol.h"
#include "FBSSerialQueue.h"
#include "FBSWorkspace.h"
#include "FBSWorkspaceScenesSource-Protocol.h"
#include "FBSWorkspaceServiceClientInterface-Protocol.h"
#include "NSCopying-Protocol.h"

@class BSServiceConnectionEndpoint, NSHashTable, NSMutableArray, NSMutableDictionary, NSString;
@protocol BSServiceConnection<BSServiceConnectionClient, FBSWorkspaceDelegate, OS_dispatch_queue;

@interface FBSWorkspaceScenesClient : NSObject<FBSSceneUpdater, FBSWorkspaceScenesSource> {
  /* instance variables */
  FBSWorkspace *_workspace;
  NSObject<FBSWorkspaceDelegate> *_workspaceDelegate;
  NSObject<OS_dispatch_queue> *_queue;
  FBSSerialQueue *_callOutQueue;
  BSServiceConnection<BSServiceConnectionClient> *_connection;
  NSMutableDictionary *_scenesByIdentity;
  NSMutableDictionary *_clientSettingsByIdentity;
  NSHashTable *_reconnectingScenes;
  NSMutableArray *_pendedSendBlocks;
  FBSSceneHostHandle *_hostHandle;
  NSObject<FBSWorkspaceServiceClientInterface> *_handshakeLock_remoteTarget;
  NSMutableDictionary *_reportingLock_scenesByIdentity;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _handshakeLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _reportingLock;
  BOOL _activated;
}

@property (readonly, nonatomic) BSServiceConnectionEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;

/* class methods */
+ (id)serviceQuality;

/* instance methods */
- (id)init;
- (id)initWithEndpoint:(id)endpoint queue:(id)queue calloutQueue:(id)queue workspace:(id)workspace;
- (void)queue_activate;
- (void)sendActions:(id)actions toWorkspaceID:(id)id completion:(id /* block */)completion;
- (id)createSceneFutureWithDefinition:(id)definition completion:(id /* block */)completion;
- (void)requestSceneWithOptions:(id)options completion:(id /* block */)completion;
- (id)sceneWithIdentity:(id)identity;
- (id)scenes;
- (id)callOutQueue;
- (id)hostProcess;
- (BOOL)canHaveAgent;
- (void)scene:(id)scene didUpdateClientSettings:(id)settings withDiff:(id)diff transitionContext:(id)context;
- (void)scene:(id)scene didReceiveActions:(id)actions forExtension:(Class)extension;
- (void)scene:(id)scene sendMessage:(id)message withResponse:(id /* block */)response;
- (void)willTerminateWithTransitionContext:(id)context;
- (void)createSceneWithIdentity:(id)identity parameters:(id)parameters transitionContext:(id)context completion:(id /* block */)completion;
- (void)reconnectSceneWithIdentity:(id)identity parameters:(id)parameters transitionContext:(id)context completion:(id /* block */)completion;
- (void)sceneID:(id)id updateWithSettingsDiff:(id)diff transitionContext:(id)context completion:(id /* block */)completion;
- (void)sceneID:(id)id destroyWithTransitionContext:(id)context completion:(id /* block */)completion;
- (void)sendActions:(id)actions completion:(id /* block */)completion;
- (void)sceneID:(id)id sendActions:(id)actions toExtension:(id)extension completion:(id /* block */)completion;
- (void)sceneID:(id)id sendMessage:(id)message completion:(id /* block */)completion;
- (id)_remoteTarget;
- (void)_configureReceivedActions:(id)actions forScene:(id)scene;
- (id)_reportedSceneWithIdentity:(id)identity;
- (void)_queue_sendHandshake;
- (id)_queue_connectedSceneWithIdentity:(id)identity;
- (void)_queue_updateScene:(id)scene withSettings:(id)settings diff:(id)diff transitionContext:(id)context completion:(id /* block */)completion;
- (void)_queue_invalidateScene:(id)scene withTransitionContext:(id)context completion:(id /* block */)completion;
@end

#endif /* FBSWorkspaceScenesClient_h */

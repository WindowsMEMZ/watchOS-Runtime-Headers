//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSWorkspaceServiceServerInterface_Protocol_h
#define FBSWorkspaceServiceServerInterface_Protocol_h
@import Foundation;

@protocol FBSWorkspaceServiceServerInterface 
/* instance methods */
- (void)createSceneWithIdentity:(id)identity parameters:(id)parameters transitionContext:(id)context completion:(id /* block */)completion;
- (void)reconnectSceneWithIdentity:(id)identity parameters:(id)parameters transitionContext:(id)context completion:(id /* block */)completion;
- (void)sceneID:(id)id updateWithSettingsDiff:(id)diff transitionContext:(id)context completion:(id /* block */)completion;
- (void)sceneID:(id)id destroyWithTransitionContext:(id)context completion:(id /* block */)completion;
- (void)sendActions:(id)actions completion:(id /* block */)completion;
- (void)sceneID:(id)id sendActions:(id)actions toExtension:(id)extension completion:(id /* block */)completion;
- (void)sceneID:(id)id sendMessage:(id)message completion:(id /* block */)completion;
- (void)willTerminateWithTransitionContext:(id)context;
@end

#endif /* FBSWorkspaceServiceServerInterface_Protocol_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef _FBSystemAppSceneInfo_h
#define _FBSystemAppSceneInfo_h
@import Foundation;

@class FBSScene, FBSSceneTransitionContext;

@interface _FBSystemAppSceneInfo : NSObject

@property (retain, nonatomic) FBSScene *FBSScene;
@property (nonatomic) BOOL hasSentFBSWorkspaceDelegateSceneCreate;
@property (retain, nonatomic) FBSSceneTransitionContext *pendingTransitionContext;

/* instance methods */
@end

#endif /* _FBSystemAppSceneInfo_h */

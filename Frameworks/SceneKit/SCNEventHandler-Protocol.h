//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 599.201.0.0.0
//
#ifndef SCNEventHandler_Protocol_h
#define SCNEventHandler_Protocol_h
@import Foundation;

#include "SCNNode.h"
#include "SCNView.h"

@protocol SCNEventHandler <SCNCameraControlConfiguration>

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL enableFreeCamera;
@property (readonly, nonatomic) SCNNode *freeCamera;
@property (nonatomic) SCNView *view;

/* instance methods */
- (void)sceneWillChange;
- (void)sceneDidChange;
- (void)viewWillDrawAtTime:(double)time;
- (void)viewDidDrawAtTime:(double)time;
- (void)cameraWillChange;
- (void)cameraDidChange;
- (BOOL)wantsRedraw;
- (void)activateFreeCamera;
- (id)gestureRecognizers;
@end

#endif /* SCNEventHandler_Protocol_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKNavigationCameraController_Protocol_h
#define VKNavigationCameraController_Protocol_h
@import Foundation;

@protocol VKNavigationCameraController <VKCameraController, VKPuckAnimatorDelegate>

@property (nonatomic) VKScreenCanvas<VKInteractiveMap> *screenCanvas;
@property (nonatomic) VKSceneConfiguration *sceneConfiguration;
@property (nonatomic) double zoomScale;

/* instance methods */
- (void)startWithPounce:(BOOL)pounce startLocation:(struct { double x0; double x1; })location startCourse:(double)course pounceCompletionHandler:(id /* block */)handler;
- (void)stop;
@end

#endif /* VKNavigationCameraController_Protocol_h */

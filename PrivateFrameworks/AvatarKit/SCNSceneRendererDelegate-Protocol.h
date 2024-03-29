//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 342.208.0.0.0
//
#ifndef SCNSceneRendererDelegate_Protocol_h
#define SCNSceneRendererDelegate_Protocol_h
@import Foundation;

@protocol SCNSceneRendererDelegate <NSObject>
@optional
/* instance methods */
- (void)renderer:(id)renderer updateAtTime:(double)time;
- (void)renderer:(id)renderer didApplyAnimationsAtTime:(double)time;
- (void)renderer:(id)renderer didSimulatePhysicsAtTime:(double)time;
- (void)renderer:(id)renderer didApplyConstraintsAtTime:(double)time;
- (void)renderer:(id)renderer willRenderScene:(id)scene atTime:(double)time;
- (void)renderer:(id)renderer didRenderScene:(id)scene atTime:(double)time;
@end

#endif /* SCNSceneRendererDelegate_Protocol_h */

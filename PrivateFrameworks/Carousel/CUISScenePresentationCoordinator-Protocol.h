//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CUISScenePresentationCoordinator_Protocol_h
#define CUISScenePresentationCoordinator_Protocol_h
@import Foundation;

@protocol CUISScenePresentationCoordinator <NSObject>
/* instance methods */
- (void)provider:(id)provider beginTransitionToPresentations:(id)presentations withCompletion:(id /* block */)completion;
- (void)provider:(id)provider endTransitionsWithFinalPresentations:(id)presentations;
@end

#endif /* CUISScenePresentationCoordinator_Protocol_h */

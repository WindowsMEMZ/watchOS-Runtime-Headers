//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SHSheetSceneDelegate_Protocol_h
#define SHSheetSceneDelegate_Protocol_h
@import Foundation;

@protocol SHSheetSceneDelegate <NSObject>
/* instance methods */
- (void)scene:(id)scene didReceiveAction:(id)action;
- (void)scene:(id)scene didReceiveMetadataUpdateAction:(id)action;
- (void)scene:(id)scene didReceiveSuggestionAction:(id)action;
- (void)scene:(id)scene didReceiveDraggingAction:(id)action;
@optional
/* instance methods */
- (void)sceneDidBecomeActive:(id)active;
@end

#endif /* SHSheetSceneDelegate_Protocol_h */

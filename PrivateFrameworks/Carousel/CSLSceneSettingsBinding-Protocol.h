//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSceneSettingsBinding_Protocol_h
#define CSLSceneSettingsBinding_Protocol_h
@import Foundation;

@protocol CSLSceneSettingsBinding <NSObject>
/* instance methods */
- (void)beginTrackingScene:(id)scene;
- (void)endTrackingScene:(id)scene;
- (void)amendSceneSettings:(id)settings forScene:(id)scene;
@end

#endif /* CSLSceneSettingsBinding_Protocol_h */

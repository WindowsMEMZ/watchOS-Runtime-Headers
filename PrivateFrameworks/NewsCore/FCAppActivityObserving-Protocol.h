//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCAppActivityObserving_Protocol_h
#define FCAppActivityObserving_Protocol_h
@import Foundation;

@protocol FCAppActivityObserving <NSObject>
@optional
/* instance methods */
- (void)activityObservingApplicationDidFinishLaunching;
- (void)activityObservingApplicationDidBecomeActive;
- (void)activityObservingApplicationDidBecomeActiveWithURL:(id)url sourceApplication:(id)application sceneID:(id)id;
- (void)activityObservingApplicationDidEnterBackground;
- (void)activityObservingApplicationDidEnterBackgroundWithSceneID:(id)id;
- (void)activityObservingApplicationWillEnterForeground;
- (void)activityObservingApplicationWillResignActiveWithSceneID:(id)id;
- (void)activityObservingApplicationWillTerminate;
- (void)activityObservingApplicationWindowWillBecomeForeground;
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (void)activityObservingApplicationWindowDidBecomeBackground;
@end

#endif /* FCAppActivityObserving_Protocol_h */

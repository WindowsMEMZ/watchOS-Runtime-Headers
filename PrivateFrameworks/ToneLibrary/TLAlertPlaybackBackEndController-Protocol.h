//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 600.0.0.0.0
//
#ifndef TLAlertPlaybackBackEndController_Protocol_h
#define TLAlertPlaybackBackEndController_Protocol_h
@import Foundation;

@protocol TLAlertPlaybackBackEndController <NSObject>
/* instance methods */
- (void)playAlert:(id)alert withCompletionHandler:(id /* block */)handler;
- (BOOL)stopPlayingAlerts:(id)alerts withOptions:(id)options playbackCompletionType:(long long)type;
@optional
/* instance methods */
- (void)handleActivationAssertionStatusChangeForAlert:(id)alert updatedStatus:(BOOL)status;
- (void)preheatForAlert:(id)alert completionHandler:(id /* block */)handler;
- (void)updateAudioVolumeDynamicallyForAlert:(id)alert toValue:(float)value;
@end

#endif /* TLAlertPlaybackBackEndController_Protocol_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SetVolumeLevelIntentHandling_Protocol_h
#define SetVolumeLevelIntentHandling_Protocol_h
@import Foundation;

@protocol SetVolumeLevelIntentHandling <NSObject>
/* instance methods */
- (void)handleSetVolumeLevel:(id)level completion:(id /* block */)completion;
- (void)handleSetVolumeLevel:(id)level completion:(id /* block */)completion;
- (void)resolveDevicesForSetVolumeLevel:(id)level withCompletion:(id /* block */)completion;
- (void)resolveDevicesForSetVolumeLevel:(id)level withCompletion:(id /* block */)completion;
- (void)resolveVolumeLevelForSetVolumeLevel:(id)level withCompletion:(id /* block */)completion;
- (void)resolveVolumeLevelForSetVolumeLevel:(id)level withCompletion:(id /* block */)completion;
@optional
/* instance methods */
- (void)confirmSetVolumeLevel:(id)level completion:(id /* block */)completion;
- (void)confirmSetVolumeLevel:(id)level completion:(id /* block */)completion;
@end

#endif /* SetVolumeLevelIntentHandling_Protocol_h */

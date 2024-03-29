//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSAudioSessionProvidingDelegate_Protocol_h
#define CSAudioSessionProvidingDelegate_Protocol_h
@import Foundation;

@protocol CSAudioSessionProvidingDelegate <NSObject>
@optional
/* instance methods */
- (void)audioSessionProviderBeginInterruption:(id)interruption;
- (void)audioSessionProviderBeginInterruption:(id)interruption withContext:(id)context;
- (void)audioSessionProviderEndInterruption:(id)interruption;
- (void)audioSessionProvider:(id)provider willSetAudioSessionActive:(BOOL)active;
- (void)audioSessionProvider:(id)provider didSetAudioSessionActive:(BOOL)active;
- (void)audioSessionProvider:(id)provider providerInvalidated:(BOOL)invalidated;
- (void)audioSessionProvider:(id)provider didChangeContext:(BOOL)context;
@end

#endif /* CSAudioSessionProvidingDelegate_Protocol_h */

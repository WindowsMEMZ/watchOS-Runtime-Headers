//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSAudioInjectionEngineDelegate_Protocol_h
#define CSAudioInjectionEngineDelegate_Protocol_h
@import Foundation;

@protocol CSAudioInjectionEngineDelegate <NSObject>
/* instance methods */
- (void)audioEngineDidStartRecord:(id)record audioStreamHandleId:(unsigned long long)id successfully:(BOOL)successfully error:(id)error;
- (void)audioEngineDidStopRecord:(id)record audioStreamHandleId:(unsigned long long)id reason:(unsigned long long)reason;
- (void)audioEngineBufferAvailable:(id)available audioStreamHandleId:(unsigned long long)id buffer:(id)buffer remoteVAD:(id)vad atTime:(unsigned long long)time isFileLoadedBuffer:(BOOL)buffer;
- (void)audioEngineAudioChunkForTvAvailable:(id)available audioChunk:(id)chunk;
@end

#endif /* CSAudioInjectionEngineDelegate_Protocol_h */

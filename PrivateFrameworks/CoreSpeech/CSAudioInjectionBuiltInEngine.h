//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSAudioInjectionBuiltInEngine_h
#define CSAudioInjectionBuiltInEngine_h
@import Foundation;

#include "CSAudioInjectionEngine.h"
#include "CSAudioInjectionDevice.h"
#include "CSAudioInjectionEngineDelegate-Protocol.h"

@class CSAudioCircularBuffer, CSKeywordAnalyzerNDEAPI, NSDictionary, NSMutableArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface CSAudioInjectionBuiltInEngine : CSAudioInjectionEngine<CSAudioInjectionEngineDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) NSObject<CSAudioInjectionEngineDelegate> *delegate;
@property (retain, nonatomic) CSKeywordAnalyzerNDEAPI *keywordAnalyzer;
@property (retain, nonatomic) CSAudioCircularBuffer *circularBuffer;
@property (nonatomic) unsigned long long lastForwardedSampleCount;
@property (retain, nonatomic) NSMutableArray *hostTimeBuffer;
@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) BOOL voiceTriggerEnabled;
@property (weak, nonatomic) CSAudioInjectionDevice *connectedDevice;
@property (nonatomic) BOOL isForwarding;
@property (nonatomic) unsigned long long voiceTriggerSampleCount;
@property (retain, nonatomic) NSDictionary *userIntentOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStreamHandleId:(unsigned long long)id;
- (BOOL)isAlwaysOnVoiceTriggerAvailable;
- (void)setAlwaysOnVoiceTriggerEnabled:(BOOL)enabled;
- (BOOL)alwaysOnVoiceTriggerEnabled;
- (void)attachDevice:(id)device;
- (void)dealloc;
- (void)start;
- (void)stop;
- (BOOL)injectAudio:(id)audio;
- (BOOL)injectAudio:(id)audio withScaleFactor:(float)factor playbackStarted:(id /* block */)started completion:(id /* block */)completion;
- (BOOL)isRecording;
- (long long)getBestSampleCountWithOption:(id)option;
- (void)startAudioStreamWithOption:(id)option;
- (void)stopAudioStream;
- (void)audioEngineDidStartRecord:(id)record audioStreamHandleId:(unsigned long long)id successfully:(BOOL)successfully error:(id)error;
- (void)audioEngineDidStopRecord:(id)record audioStreamHandleId:(unsigned long long)id reason:(unsigned long long)reason;
- (void)audioEngineBufferAvailable:(id)available audioStreamHandleId:(unsigned long long)id buffer:(id)buffer remoteVAD:(id)vad atTime:(unsigned long long)time isFileLoadedBuffer:(BOOL)buffer;
- (void)audioEngineAudioChunkForTvAvailable:(id)available audioChunk:(id)chunk;
@end

#endif /* CSAudioInjectionBuiltInEngine_h */

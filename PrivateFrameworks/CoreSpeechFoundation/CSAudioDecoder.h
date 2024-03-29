//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSAudioDecoder_h
#define CSAudioDecoder_h
@import Foundation;

@protocol CSAudioDecoderDelegate;

@interface CSAudioDecoder : NSObject {
  /* instance variables */
  struct OpaqueAudioConverter * _decoder;
  struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _inASBD;
  struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _outASBD;
}

@property (weak) NSObject<CSAudioDecoderDelegate> *delegate;

/* instance methods */
- (id)initWithInASBD:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })asbd outASBD:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })asbd;
- (void)addPackets:(id)packets audioStreamHandleId:(unsigned long long)id remoteVAD:(id)vad timestamp:(unsigned long long)timestamp arrivalTimestampToAudioRecorder:(unsigned long long)recorder wasBuffered:(BOOL)buffered receivedNumChannels:(unsigned int)channels;
@end

#endif /* CSAudioDecoder_h */

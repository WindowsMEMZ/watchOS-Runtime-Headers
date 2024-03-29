//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCVocalAttenuationProcessorImplementation_h
#define MPCVocalAttenuationProcessorImplementation_h
@import Foundation;

#include "MPCVocalAttenuationModel.h"

@protocol OS_dispatch_queue;

@interface MPCVocalAttenuationProcessorImplementation : NSObject {
  /* instance variables */
  struct AudioTimeStamp { double mSampleTime; unsigned long long mHostTime; double mRateScalar; unsigned long long mWordClockTime; struct SMPTETime { short mSubframes; short mSubframeDivisor; unsigned int mCounter; unsigned int mType; unsigned int mFlags; short mHours; short mMinutes; short mSeconds; short mFrames; } mSMPTETime; unsigned int mFlags; unsigned int mReserved; } _timestamp;
  long long _previousContiguousSampleIndex;
  long long _nextContiguousSampleIndex;
  struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x10; unsigned int x1; void * x2; } x[1] } * _ioBuffer;
  struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _audioFormat;
  unsigned int _maxFrames;
  struct OpaqueAudioComponentInstance * _processingAU;
  NSObject<OS_dispatch_queue> *_creationQueue;
}

@property (readonly, nonatomic) MPCVocalAttenuationModel *model;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) BOOL available;
@property (nonatomic) BOOL enabled;
@property (nonatomic) float level;
@property (readonly, nonatomic) float minLevel;
@property (readonly, nonatomic) float maxLevel;
@property (readonly, nonatomic) double sampleTime;
@property (readonly, nonatomic) double renderingLimit;

/* instance methods */
- (id)init;
- (id)initWithMaxAttenuationLevel:(float)level audioFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })format maxFrames:(unsigned int)frames;
- (void)dealloc;
- (void)prepareWithModel:(id)model completion:(id /* block */)completion;
- (void)tearDownWithCompletion:(id /* block */)completion;
- (BOOL)isAvailable;
- (BOOL)isCompatibleWithAudioFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })format maxFrames:(unsigned int)frames;
- (BOOL)processAudioBuffer:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x10; unsigned int x1; void * x2; } x[1] } *)buffer sampleIndex:(long long)index numberFrames:(unsigned int)frames error:(id *)error;
- (void)resetAudioUnit;
- (void)_prepareWithModel:(id)model completion:(id /* block */)completion;
- (BOOL)_createAudioUnit:(id *)unit;
- (BOOL)_setupAudioUnitWithModel:(id)model error:(id *)error;
- (BOOL)_initializeAudioUnit:(id *)unit;
- (void)_applyAttenuationLevelToAudioUnit;
- (BOOL)isEnabled;
@end

#endif /* MPCVocalAttenuationProcessorImplementation_h */

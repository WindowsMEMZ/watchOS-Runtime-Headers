//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCMediaRecorderLocal_h
#define VCMediaRecorderLocal_h
@import Foundation;

#include "VCMediaRecorder.h"
#include "VCAudioIO.h"
#include "VCMediaRecorderConfiguration.h"
#include "VCVideoCaptureClient-Protocol.h"
#include "VCVideoSink-Protocol.h"

@class NSString;

@interface VCMediaRecorderLocal : VCMediaRecorder<VCVideoSink, VCVideoCaptureClient> {
  /* instance variables */
  VCMediaRecorderConfiguration *_configuration;
  VCAudioIO *_audioIO;
  unsigned int _audioSessionId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStreamToken:(long long)token configuration:(id)configuration reportingAgent:(struct opaqueRTCReporting *)agent;
- (void)invalidate;
- (void)dealloc;
- (struct tagVCAudioIOConfiguration { unsigned int x0; unsigned int x1; int x2; int x3; unsigned int x4; unsigned char x5; BOOL x6; id x7; int x8; unsigned int x9; unsigned int x10; BOOL x11; unsigned long long x12; unsigned int x13; long long x14; long long x15; unsigned long long x16; BOOL x17; BOOL x18; struct tagVCAudioIODelegateContext { id x0; undefined * x1; void * x2; id x3; long long x4; } x19; struct tagVCAudioIODelegateContext { id x0; undefined * x1; void * x2; id x3; long long x4; } x20; })defaultAudioIOConfig;
- (void)setupSpatialAudio;
- (void)cleanupSpatialAudio;
- (BOOL)startAudio;
- (BOOL)registerForCameraCapture;
- (void)deregisterForCameraCapture;
- (BOOL)configureVideoRecording;
- (int)supportedVideoCodec;
- (BOOL)onVideoFrame:(struct opaqueCMSampleBuffer *)frame frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time attribute:(struct { BOOL x0; BOOL x1; int x2; BOOL x3; BOOL x4; int x5; unsigned char x6; })attribute;
- (void)sourceFrameRateDidChange:(unsigned int)change;
- (void)avConferencePreviewError:(id)error;
- (id)clientCaptureRule;
- (void)thermalLevelDidChange:(int)change;
- (void)cameraAvailabilityDidChange:(BOOL)change;
- (void)reactionDidStart:(id)start;
@end

#endif /* VCMediaRecorderLocal_h */

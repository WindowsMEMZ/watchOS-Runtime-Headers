//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCVideoCaptureServer_Protocol_h
#define VCVideoCaptureServer_Protocol_h
@import Foundation;

@protocol VCVideoCaptureServer <VCVideoSink>

@property (nonatomic) BOOL followSystemCamera;
@property (readonly, nonatomic) int bestCameraCaptureFrameRate;
@property (readonly, nonatomic) BOOL is1080pCameraAvailable;

/* instance methods */
- (void)onCaptureScreenFrame:(struct opaqueCMSampleBuffer *)frame frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time orientation:(int)orientation;
- (void)handleCaptureEvent:(id)event;
- (void)handleCaptureEvent:(id)event subType:(id)type;
- (void)setCameraZoomAvailable:(BOOL)available currentZoomFactor:(double)factor maxZoomFactor:(double)factor;
- (void)setCaptureFrameRate:(int)rate;
- (void)setCFAvailabilityChange:(BOOL)change;
- (int)getCaptureFrameRateForSource:(int)source;
@optional
/* instance methods */
- (void)registerVideoSink:(id)sink withCaptureSource:(int)source;
- (void)unregisterVideoSink:(id)sink withCaptureSource:(int)source;
- (struct opaqueCMFormatDescription *)newFormatDescriptionForCaptureSource:(int)source;
- (void)handleCaptureSourcePositionDidChange:(BOOL)change;
- (void)centerStageEnabledDidChange:(BOOL)change;
- (void)portraitBlurEnabledDidChange:(BOOL)change;
- (void)reactionDidStart:(id)start;
- (void)didStopReacting;
@end

#endif /* VCVideoCaptureServer_Protocol_h */

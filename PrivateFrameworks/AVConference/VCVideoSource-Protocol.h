//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCVideoSource_Protocol_h
#define VCVideoSource_Protocol_h
@import Foundation;

@protocol VCVideoSource <NSObject>
/* instance methods */
- (int)startPreview;
- (int)startCaptureWithWidth:(int)width height:(int)height frameRate:(int)rate;
- (int)stop:(BOOL)stop;
- (int)setWidth:(int)width height:(int)height frameRate:(int)rate;
- (int)copyColorInfo:(const struct __CFDictionary * *)info;
- (BOOL)isPreviewRunning;
- (int)configureCaptureWithToken:(struct _VCVideoSourceToken { union { struct { unsigned int x0 :24; unsigned int x1 :8; } x0; unsigned int x1; } x0; })token;
- (int)setFrameRate:(int)rate;
- (int)getFrameRate;
- (BOOL)isFrontCamera;
- (int)frameCount:(BOOL)count;
- (int)frameBecameAvailableCount:(int *)count figBufferQueueEmptyCount:(int *)count figBufferQueueErrorCount:(int *)count;
- (BOOL)cameraSupportsFormatWidth:(int)width height:(int)height;
- (BOOL)isPortraitResolutionCaptureActive;
@optional
/* instance methods */
- (int)frameDropsWithShouldReset:(BOOL)reset;
- (int)startScreenCapture;
- (int)stopScreenCapture;
- (int)updateScreenCapture:(id)capture;
- (BOOL)setAnimoji:(id)animoji;
- (BOOL)setMemoji:(id)memoji;
- (void)addStickerWithURL:(id)url atPosition:(struct CGPoint { double x0; double x1; })position identifier:(id)identifier;
- (void)setCameraZoomFactor:(double)factor;
- (void)setCameraZoomFactor:(double)factor withRate:(double)rate;
- (void)setOrientation:(int)orientation;
- (void)setCinematicFramingEnabled:(BOOL)enabled;
- (void)setViewPointCorrectionEnabled:(BOOL)enabled;
- (void)getReportingStats:(struct __CFDictionary *)stats;
- (void)setBufferStatsBuffer:(struct tagVCVideoBufferStatistics { int x0; int x1; BOOL x2; double x3; double x4; double x5; double x6; double x7; } *)buffer;
- (BOOL)isInternalCamera;
- (BOOL)supportsPortraitResolution;
@end

#endif /* VCVideoSource_Protocol_h */

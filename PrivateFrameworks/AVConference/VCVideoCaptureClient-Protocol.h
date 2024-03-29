//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCVideoCaptureClient_Protocol_h
#define VCVideoCaptureClient_Protocol_h
@import Foundation;

@protocol VCVideoCaptureClient 
/* instance methods */
- (void)avConferencePreviewError:(id)error;
- (id)clientCaptureRule;
- (void)thermalLevelDidChange:(int)change;
- (void)cameraAvailabilityDidChange:(BOOL)change;
@optional
/* instance methods */
- (void)reactionDidStart:(id)start;
- (void)didStopReacting;
- (void)frameRateIsBeingThrottled:(int)throttled thermalLevelDidChange:(BOOL)change powerLevelDidChange:(BOOL)change;
- (void)avConferenceScreenCaptureError:(id)error;
- (void)captureSourcePositionDidChange:(BOOL)change;
- (void)captureSourceCenterStageEnabledDidChange:(BOOL)change;
- (void)captureSourcePortraitBlurEnabledDidChange:(BOOL)change;
- (void)captureSource1080pAvailabilityDidChange:(BOOL)change;
@end

#endif /* VCVideoCaptureClient_Protocol_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef ETCanvasViewDelegate_Protocol_h
#define ETCanvasViewDelegate_Protocol_h
@import Foundation;

@protocol ETCanvasViewDelegate <NSObject>
/* instance methods */
- (void)canvasView:(id)view didBeginPlayingMessage:(id)message;
- (void)canvasView:(id)view willEndPlayingMessage:(id)message;
- (void)canvasView:(id)view didEndPlayingMessage:(id)message;
- (void)canvasView:(id)view didBeginComposingMessageType:(unsigned short)type;
- (void)canvasView:(id)view didUpdateComposingMessageType:(unsigned short)type;
- (void)canvasView:(id)view didEndComposingMessageType:(unsigned short)type;
- (void)canvasView:(id)view sendMessage:(id)message;
- (void)canvasViewDidBeginStroke:(id)stroke;
- (void)canvasViewDidEndStroke:(id)stroke;
- (void)canvasViewWillReachComposingSizeLimit:(id)limit;
- (BOOL)canvasViewShouldSendWithTimer:(id)timer;
- (long long)recentHeartRate;
@optional
/* instance methods */
- (BOOL)canvasViewShouldUseFastVerticalWisp:(id)wisp;
- (void)canvasViewDidPause:(id)pause;
- (void)canvasViewDidUnpause:(id)unpause;
- (BOOL)canvasView:(id)view tapRecognizerShouldBegin:(id)begin;
- (void)canvasViewDidStartMediaAppearance:(id)appearance;
- (void)canvasViewDidEndMediaAppearance:(id)appearance;
- (void)canvasView:(id)view angerUsesForceTouch:(BOOL)touch;
@end

#endif /* ETCanvasViewDelegate_Protocol_h */

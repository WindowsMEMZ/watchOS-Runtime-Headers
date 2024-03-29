//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MFPlaybackStackControllerDelegate_Protocol_h
#define MFPlaybackStackControllerDelegate_Protocol_h
@import Foundation;

@protocol MFPlaybackStackControllerDelegate 
/* instance methods */
- (void)currentItemWillChangeFromItem:(id)item toItem:(id)item source:(long long)source timeStamp:(id)stamp;
- (void)itemIsReadyToPlay:(id)play timeStamp:(id)stamp;
- (void)itemDidFailToLoad:(id)load silently:(BOOL)silently error:(id)error timeStamp:(id)stamp;
- (void)itemDidFailToPlayToEnd:(id)end error:(id)error timeStamp:(id)stamp;
- (void)itemDidBecomeCurrent:(id)current source:(long long)source timeStamp:(id)stamp;
- (void)itemDidResignCurrent:(id)current source:(long long)source timeStamp:(id)stamp;
- (void)itemTransitionWillBeginFrom:(id)from to:(id)to type:(long long)type duration:(double)duration timeStamp:(id)stamp;
- (void)itemTransitionDidEndFrom:(id)from to:(id)to type:(long long)type duration:(double)duration timeStamp:(id)stamp;
- (void)playbackDidStartForItem:(id)item rate:(float)rate fromStalling:(BOOL)stalling timeStamp:(id)stamp;
- (void)playbackDidStopForItem:(id)item source:(id)source reason:(id)reason timeStamp:(id)stamp;
- (void)playbackWaitingToPlayForItem:(id)item reason:(id)reason timeStamp:(id)stamp;
- (void)itemDidPlayToEnd:(id)end timeStamp:(id)stamp;
- (void)playbackTimeDidChangeTo:(double)to forItem:(id)item reason:(long long)reason timeStamp:(id)stamp;
- (void)playbackRateDidChangeToRate:(float)rate forItem:(id)item timeStamp:(id)stamp;
- (void)playbackRateDidChangeNotifiedForItem:(id)item newRate:(float)rate reason:(id)reason participantIdentifier:(id)identifier timeStamp:(id)stamp;
- (void)relativeVolumeDidChangeTo:(float)to timeStamp:(id)stamp;
- (void)firstFrameWillRenderForItem:(id)item timeStamp:(id)stamp;
- (void)playbackIsLikelyToKeepUp:(BOOL)up forItem:(id)item timeStamp:(id)stamp;
- (void)playbackBufferStateDidChangeToState:(long long)state forItem:(id)item timeStamp:(id)stamp;
- (void)tracksDidChangeForItem:(id)item timeStamp:(id)stamp;
- (void)timeControlStatusDidChange:(long long)change waitingReason:(id)reason timeStamp:(id)stamp;
- (void)didReachEndOfQueueWithReason:(id)reason;
- (void)interruptionDidBeginWithInterruptor:(id)interruptor timeStamp:(id)stamp;
- (void)interruptionDidFinishForInterruptor:(id)interruptor shouldResume:(BOOL)resume timeStamp:(id)stamp;
- (void)routeDidChange:(BOOL)change metadata:(id)metadata timeStamp:(id)stamp;
- (void)stateDidChangeFromState:(long long)state toState:(long long)state timeStamp:(id)stamp;
- (void)screenRecordingDidChange:(BOOL)change timeStamp:(id)stamp;
- (void)userActionDidBegin:(id)begin;
- (void)userActionDidEnd:(id)end error:(id)error;
- (void)mediaServicesInterruptionDidBeginWithItemAtDeath:(id)death timeAtDeath:(double)death timeStamp:(id)stamp;
- (void)mediaServicesInterruptionDidEndWithTimeStamp:(id)stamp;
- (void)playbackIsBlockedOnNonPlayableItem:(id)item;
- (void)userSeekCompletedForItem:(id)item fromTime:(double)time toTime:(double)time timeStamp:(id)stamp;
- (void)didReportSignpostWithType:(long long)type;
- (void)errorResolutionDidStartForItem:(id)item error:(id)error;
- (void)errorResolutionDidEndForItem:(id)item error:(id)error resolution:(long long)resolution;
- (void)stackControllerDidCreateTransitionFrom:(id)from to:(id)to type:(long long)type parameters:(id)parameters;
- (void)willPerformPlayerOperationWithPlayerIdentifier:(id)identifier operation:(id)operation reason:(id)reason;
- (void)didPerformPlayerOperationWithPlayerIdentifier:(id)identifier items:(id)items operation:(id)operation;
- (void)itemIsReadyForMetrics:(id)metrics accessLog:(id)log;
- (void)renderingModeDidChange:(long long)change timeStamp:(id)stamp;
@end

#endif /* MFPlaybackStackControllerDelegate_Protocol_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMCPlayerPlaybackIntent_Protocol_h
#define NMCPlayerPlaybackIntent_Protocol_h
@import Foundation;

@protocol NMCPlayerPlaybackIntent <NSObject>
@optional
/* instance methods */
- (id)playbackIntentRepresentation;
- (void)getRemotePlaybackQueueRepresentationWithPlayerPath:(id)path completion:(id /* block */)completion;
- (id)initWithSiriPlayMediaIntent:(id)intent;
- (void)replacePlaybackQueueWhilePreventingAutomaticPlayback:(BOOL)playback completionHandler:(id /* block */)handler;
- (void)getCompanionPlaybackQueueRepresentationWithCompletionHandler:(id /* block */)handler;
- (id)loadingExpectedItemIdentifier;
@end

#endif /* NMCPlayerPlaybackIntent_Protocol_h */

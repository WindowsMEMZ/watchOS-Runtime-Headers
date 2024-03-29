//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 342.208.0.0.0
//
#ifndef AVTStickerMoviePropNode_h
#define AVTStickerMoviePropNode_h
@import Foundation;

#include "SCNNode.h"

@class AVAsset, AVPlayer, AVPlayerItem, NSURL;

@interface AVTStickerMoviePropNode : SCNNode

@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (retain, nonatomic) AVPlayer *player;
@property (copy, nonatomic) id /* block */ loadCompletionHandler;
@property (nonatomic) BOOL isObservingPlayerItemStatus;
@property (retain, nonatomic) NSURL *movieURL;
@property (retain, nonatomic) AVAsset *movieAsset;
@property (nonatomic) BOOL applyToEmission;
@property (nonatomic) BOOL enableLoop;

/* instance methods */
- (id)initWithMovieURL:(id)url geometry:(id)geometry applyToEmission:(BOOL)emission;
- (id)clone;
- (void)dealloc;
- (void)stopObservingPlayerItemStatusIfNeeded;
- (void)startObservingPlayerItemStatus;
- (void)setup;
- (void)preparePlayerWithCompletionHandler:(id /* block */)handler;
- (void)itemDidFinishPlaying:(id)playing;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)stickerGenerationWillBegin;
- (void)stickerGenerationDidEnd;
- (struct CGImage *)copyFrameAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
@end

#endif /* AVTStickerMoviePropNode_h */

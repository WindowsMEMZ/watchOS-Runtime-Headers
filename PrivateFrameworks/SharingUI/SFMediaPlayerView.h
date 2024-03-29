//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFMediaPlayerView_h
#define SFMediaPlayerView_h
@import Foundation;

#include "UIView.h"

@class AVPlayerLooper, AVQueuePlayer, NSMutableArray;
@protocol OS_dispatch_source;

@interface SFMediaPlayerView : UIView {
  /* instance variables */
  AVPlayerLooper *_avLooper;
  AVQueuePlayer *_avQueuePlayer;
  NSMutableArray *_mediaItems;
  NSObject<OS_dispatch_source> *_speedUpTimer;
  BOOL _isKVOObserver;
}

@property (nonatomic) BOOL pausesAfterEachItem;

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (void)dealloc;
- (void)startMovieLoopWithPath:(id)path;
- (void)updateViewForAssetType:(int)type adjustmentsURL:(id)url;
- (void)startMovieLoopWithPath:(id)path assetType:(int)type adjustmentsURL:(id)url;
- (void)stop;
- (void)play;
- (void)pause;
- (void)_pause;
- (BOOL)isPaused;
- (void)advanceToNextItem;
- (void)addMovieItem:(id)item;
- (void)removeAllQueuedItems;
- (void)removeMovieItem:(id)item;
- (void)breakFirstEnqueuedLoop;
- (void)speedUpRemainderOfCurrentItem;
- (void)stopSpeedUpTimer;
- (void)enqueueItemsFromMediaItem:(id)item afterItem:(id)item;
- (void)dequeueNonPlayingItemsFromMediaItem:(id)item;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)setUpTimeRangeNotificationsForItem:(id)item;
- (void)handleBoundaryTimeObserverForMediaItem:(id)item;
- (void)playerItemDidReachEnd:(id)end;
@end

#endif /* SFMediaPlayerView_h */

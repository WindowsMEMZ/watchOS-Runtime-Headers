//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef ISWrappedAVPlayer_h
#define ISWrappedAVPlayer_h
@import Foundation;

#include "ISObservable.h"
#include "ISKVOProxyDelegate-Protocol.h"
#include "ISWrappedAVAudioSession.h"
#include "ISWrappedAVPlayerDelegate-Protocol.h"

@class AVPlayer, AVPlayerItem, AVVideoComposition, NSError, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ISWrappedAVPlayer : ISObservable<ISKVOProxyDelegate> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_avPlayerQueue;
  NSObject<OS_dispatch_queue> *_ivarQueue;
  NSObject<OS_dispatch_queue> *_delegateQueue;
  AVPlayer *_playerQueue_avPlayer;
  ISWrappedAVAudioSession *_playerQueue_wrappedAudioSession;
  id _playerQueue_playerItemDidPlayToEndObserver;
  NSString *_playerQueue_playerKVOIdentifier;
  NSString *_playerQueue_playerItemKVOIdentifier;
  AVPlayerItem *_ivarQueue_currentItem;
  long long _ivarQueue_status;
  NSError *_ivarQueue_error;
  float _ivarQueue_rate;
  float _ivarQueue_volume;
  struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _ivarQueue_loopTimeRange;
  BOOL _ivarQueue_loopingEnabled;
  BOOL _ivarQueue_audioEnabled;
  BOOL _ivarQueue_preventsSleepDuringVideoPlayback;
  BOOL _ivarQueue_suppressesAudioRendering;
  long long _ivarQueue_itemStatus;
  NSError *_ivarQueue_itemError;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _ivarQueue_itemForwardPlaybackEndTime;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _ivarQueue_itemDuration;
  BOOL _ivarQueue_itemPlaybackBufferFull;
  AVVideoComposition *_ivarQueue_itemVideoComposition;
  BOOL _ivarQueue_itemIsLikelyToKeepUp;
  BOOL _ivarQueue_itemPlaybackBufferEmpty;
  NSMutableDictionary *_observersByID;
  void * _ivarQueueIdentifier;
}

@property BOOL loopingEnabled;
@property BOOL suppressesAudioRendering;
@property (weak) NSObject<ISWrappedAVPlayerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)observedAVPlayerKeys;
+ (id)observedAVPlayerItemKeys;

/* instance methods */
- (id)mutableChangeObject;
- (void)registerChangeObserver:(id)observer context:(void *)context;
- (void)unregisterChangeObserver:(id)observer context:(void *)context;
- (void)_avPlayerQueue_registerChangeObserver:(id)observer context:(void *)context;
- (void)_avPlayerQueue_unregisterChangeObserver:(id)observer context:(void *)context;
- (void)_performPlayerTransaction:(id /* block */)transaction;
- (void)_performIvarRead:(id /* block */)read;
- (void)_performIvarWrite:(id /* block */)write;
- (BOOL)_isOnIvarQueue;
- (void)_assertOnIvarQueue;
- (id)_initWithAVPlayer:(id)avplayer;
- (id)init;
- (id)_playerQueue_avPlayer;
- (void)dealloc;
- (void)attachToPlayerLayerIfNeeded:(id)needed;
- (void)setItemForwardEndPlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)setItemBlendsVideoFrames:(BOOL)frames;
- (id)_nextObserverUID;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })interval queue:(id)queue usingBlock:(id /* block */)block;
- (id)addBoundaryTimeObserverForTimes:(id)times queue:(id)queue usingBlock:(id /* block */)block;
- (void)removeTimeObserver:(id)observer;
- (void)_playerQueue_startObservingPlayerItem:(id)item;
- (void)_playerQueue_stopObservingPlayerItem:(id)item;
- (void)_playerItemDidPlayToEnd:(id)end;
- (id)_nilOrValue:(id)value;
- (void)observeChangeforKVOProxyIdentifier:(id)identifier keyPath:(id)path change:(id)change;
- (BOOL)isLoopingEnabled;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })loopTimeRange;
- (long long)status;
- (long long)currentItemStatus;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentItemDuration;
- (BOOL)currentItemPlaybackBufferFull;
- (BOOL)currentItemPlaybackBufferEmpty;
- (BOOL)currentItemIsLikelyToKeepUp;
- (id)currentItemVideoComposition;
- (id)currentItemError;
- (id)error;
- (id)currentItem;
- (float)rate;
- (float)volume;
- (BOOL)isAudioEnabled;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })itemForwardPlaybackEndTime;
- (BOOL)preventsSleepDuringVideoPlayback;
- (void)setAudioEnabled:(BOOL)enabled;
- (void)_playerQueue_updatePlayerItemAudioTracksEnabled;
- (void)setLoopingEnabled:(BOOL)enabled withTemplateItem:(id)item;
- (void)setLoopTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range;
- (void)setPreventsSleepDuringVideoPlayback:(BOOL)playback;
- (void)setRate:(float)rate time:(struct { long long x0; int x1; unsigned int x2; long long x3; })time atHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)playToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time withInitialRate:(float)rate overDuration:(double)duration progressHandler:(id /* block */)handler;
- (void)setActionAtItemEnd:(long long)end;
- (void)setAllowsExternalPlayback:(BOOL)playback;
- (void)setVolume:(float)volume;
- (void)setRate:(float)rate;
- (void)pause;
- (void)setDimensionsOfReservedVideoMemory:(struct CGSize { double x0; double x1; })memory;
- (void)replaceCurrentItemWithPlayerItem:(id)item thenCall:(id /* block */)call;
- (void)replaceCurrentItemWithPlayerItem:(id)item;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })before toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })after completionHandler:(id /* block */)handler;
- (void)prerollAtRate:(float)rate completionHandler:(id /* block */)handler;
- (void)cancelPendingPrerolls;
- (void)setWrappedAudioSession:(id)session;
@end

#endif /* ISWrappedAVPlayer_h */

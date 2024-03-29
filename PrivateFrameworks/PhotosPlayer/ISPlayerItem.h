//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef ISPlayerItem_h
#define ISPlayerItem_h
@import Foundation;

#include "ISObservable.h"
#include "ISAsset.h"
#include "ISPlayerContent.h"

@class AVAssetImageGenerator, AVPlayerItem, AVVideoComposition, NSError, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface ISPlayerItem : ISObservable {
  /* instance variables */
  void * _ivarQueueIdentifier;
  void * _workQueueIdentifier;
  NSObject<OS_dispatch_queue> *_ivarQueue;
  NSObject<OS_dispatch_queue> *_workQueue;
  long long _ivarQueue_loadingTarget;
  AVVideoComposition *_ivarQueue_videoComposition;
  long long _ivarQueue_videoPlayerItemRequestID;
  BOOL _ivarQueue_aggressivelyCacheVideoFrames;
  BOOL _ivarQueue_reversesMoreVideoFramesInMemory;
  BOOL _ivarQueue_decodesAllFramesDuringOrdinaryPlayback;
  BOOL _ivarQueue_contentSupportsVitality;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _ivarQueue_playerItemPhotoTime;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } _ivarQueue_playerItemDuration;
  ISPlayerContent *_ivarQueue_playerContent;
  long long _ivarQueue_status;
  AVPlayerItem *_ivarQueue_videoPlayerItem;
  NSNumber *_ivarQueue_variationIdentifier;
  NSString *_ivarQueue_minimumClientVersion;
  NSError *_ivarQueue_error;
  struct { BOOL videoPlayerItem; BOOL status; BOOL content; BOOL minimumClientVersion; BOOL playbackStyleIdentifier; BOOL contentSupportsVitality; } _ivarQueue_isValid;
  AVAssetImageGenerator *_workQueue_imageGenerator;
  BOOL _workQueue_isGeneratingOffsetImage;
}

@property (nonatomic) long long status;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) ISPlayerContent *playerContent;
@property (nonatomic) BOOL _loadingCancelled;
@property (nonatomic) long long _videoPlayerItemRequestID;
@property (retain, nonatomic) NSNumber *_variationIdentifier;
@property (retain, nonatomic) NSString *_minimumClientVersion;
@property (nonatomic) BOOL contentSupportsVitality;
@property (nonatomic) BOOL reversesMoreVideoFramesInMemory;
@property (nonatomic) BOOL aggressivelyCacheVideoFrames;
@property (nonatomic) BOOL decodesAllFramesDuringOrdinaryPlayback;
@property (readonly, nonatomic) ISAsset *asset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } targetSize;
@property (readonly, nonatomic) NSNumber *contentAspectRatio;
@property (nonatomic) long long loadingTarget;
@property (copy, nonatomic) AVVideoComposition *videoComposition;

/* class methods */
+ (long long)currentClientVersion;
+ (id)playerItemWithAsset:(id)asset targetSize:(struct CGSize { double x0; double x1; })size;
+ (id)playerItemWithAsset:(id)asset targetSize:(struct CGSize { double x0; double x1; })size contentAspectRatio:(id)ratio;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)mutableChangeObject;
- (void)didPerformChanges;
- (id)initWithAsset:(id)asset targetSize:(struct CGSize { double x0; double x1; })size;
- (id)initWithAsset:(id)asset targetSize:(struct CGSize { double x0; double x1; })size contentAspectRatio:(id)ratio;
- (void)performChanges:(id /* block */)changes;
- (void)_cancelLoading;
- (void)_setVideoPlayerItemRequestID:(long long)id;
- (void)discardContentBelowLoadingTarget;
- (void)cancelLoading;
- (void)resetAVObjects;
- (void)_reloadAllContent;
- (void)_setError:(id)error;
- (void)_setPlayerContent:(id)content;
- (void)_setStatus:(long long)status;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)_invalidateMinimumClientVersion;
- (BOOL)_isMinimumClientVersionValid;
- (void)_updateMinimumClientVersionIfNeeded;
- (void)_setMinimumClientVersion:(id)version;
- (void)_invalidatePlaybackStyleIdentifier;
- (BOOL)_isPlaybackStyleIdentifierValid;
- (void)_updatePlaybackStyleIdentifierIfNeeded;
- (void)_setVariationIdentifier:(id)identifier;
- (BOOL)_isContentSupportsVitalityValid;
- (void)_invalidateContentSupportsVitality;
- (void)_updateContentSupportsVitalityIfNeeded;
- (void)_invalidateVideoPlayerItem;
- (BOOL)_isVideoPlayerItemValid;
- (void)_updateVideoPlayerItemIfNeeded;
- (void)_handleVideoPlayerItemLoadResultWithSuccess:(BOOL)success playerItem:(id)item videoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration error:(id)error;
- (void)_setVideoPlayerItem:(id)item videoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)_videoPlayerItem;
- (void)_invalidatePlayerContent;
- (BOOL)_isPlayerContentValid;
- (void)_updatePlayerContentIfNeeded;
- (void)_invalidateStatus;
- (BOOL)_isStatusVaild;
- (void)_updateStatusIfNeeded;
- (void)_performWork:(id /* block */)work sync:(BOOL)sync;
- (void)_performWork:(id /* block */)work;
- (void)_performIvarRead:(id /* block */)read;
- (void)_performIvarWrite:(id /* block */)write;
- (BOOL)_isOnIvarQueue;
- (BOOL)_isOnWorkQueue;
- (void)_assertOnWorkQueue;
- (void)_assertOnIvarQueue;
- (BOOL)_isLoadingCancelled;
- (void)_setLoadingCancelled:(BOOL)cancelled;
@end

#endif /* ISPlayerItem_h */

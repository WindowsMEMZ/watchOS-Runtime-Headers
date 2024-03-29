//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKVideoPlayerView_h
#define NTKVideoPlayerView_h
@import Foundation;

#include "UIView.h"
#include "CLKVideoPlayerViewDelegate-Protocol.h"
#include "NTKTaskScheduler.h"
#include "NTKVideoPlayerDataSource.h"
#include "NTKVideoPlayerViewFaceDelegate-Protocol.h"

@class CLKVideoPlayerView, NSString, UIImageView, UIView;

@interface NTKVideoPlayerView : UIView<CLKVideoPlayerViewDelegate> {
  /* instance variables */
  NTKTaskScheduler *_taskScheduler;
  UIView *_curtainView;
  UIView *_posterContainerView;
  UIImageView *_posterImageView;
  CLKVideoPlayerView *_videoPlayerView;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _videoPlayerEdgeInsets;
  long long _currentDataMode;
  unsigned long long _prerollState;
  BOOL _videoPlayerInViewHierarchy;
  BOOL _isHandlingTapGesture;
  BOOL _paused;
  BOOL _frozen;
  BOOL _slow;
  BOOL _orbing;
}

@property (weak, nonatomic) NSObject<NTKVideoPlayerViewFaceDelegate> *delegate;
@property (retain, nonatomic) NTKVideoPlayerDataSource *dataSource;
@property (nonatomic) unsigned long long playerBehavior;
@property (nonatomic) double fadeAnimationDuration;
@property (nonatomic) BOOL shouldApplyVideoInsetToPosterImage;
@property (nonatomic) BOOL pausedViewEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)layoutSubviews;
- (void)didAddSubview:(id)subview;
- (void)handleWristRaiseScreenWake;
- (void)handleOrdinaryScreenWake;
- (void)handleScreenOn;
- (void)handleScreenOff;
- (void)handleStyleDidChange;
- (void)applyFrozen:(BOOL)frozen;
- (void)applySlow:(BOOL)slow;
- (void)applyOrbing:(BOOL)orbing;
- (void)videoPlayerViewWasTapped;
- (void)transitionToEditing;
- (void)faceLibraryWasDismissed;
- (void)applyDataMode:(long long)mode comingFromDataMode:(long long)mode;
- (id)videoPlayerView;
- (void)_createVideoPlayerViewIfNeeded;
- (void)_resetVideoPlayer;
- (void)_loadVideoPlayerView;
- (void)_unloadVideoPlayerView;
- (void)_cancelScheduledPreroll;
- (void)_schedulePreroll;
- (void)_prerollVideo;
- (void)videoPlayerView:(id)view didFinishPrerolling:(BOOL)prerolling;
- (BOOL)_shouldPause;
- (void)_playIfNotPaused;
- (void)_updatePauseState;
- (void)_play;
- (void)_pause;
- (void)_rewindLoadedVideoToBeginning;
- (void)_playNextVideoForEvent:(unsigned long long)event animated:(BOOL)animated;
- (void)_loadCurrentListing;
- (void)_advanceListingForEvent:(unsigned long long)event;
- (void)videoPlayerViewDidBeginPlaying:(id)playing;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)end;
- (void)videoPlayerViewDidBeginPlayingQueuedVideo:(id)video;
- (void)_queueSubsequentListingIfSupported;
- (void)setPosterImage:(id)image;
- (void)_createPosterImageView;
- (void)_showPosterImageView;
- (void)_hidePosterImageView;
- (void)_fadeToPosterImage;
- (void)_fadeFromPosterImageIfVisible:(id /* block */)visible;
- (void)_createCurtainView;
- (void)_showCurtainView;
- (void)_hideCurtainView;
- (void)_fadeToCurtainView:(id /* block */)view;
- (void)_fadeFromCurtainViewIfVisible;
- (void)_fadeFromPosterImageAndCurtainViewIfVisible;
- (void)setVideoPlayerTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (void)setVideoPlayerInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (void)setVideoPlayerResizeGravity:(long long)gravity;
- (void)_handleScreenWake;
- (void)_removeCurrentVideo;
- (BOOL)_shouldChangeVideoOnTap;
- (BOOL)_shouldPlayVideoOnTap;
- (BOOL)_shouldChangeVideoOnWake;
- (void)_mediaServicesWereReset:(id)reset;
- (void)tritium_willSnapshotForBurnInStudy:(id)study;
- (BOOL)isPausedViewEnabled;
@end

#endif /* NTKVideoPlayerView_h */

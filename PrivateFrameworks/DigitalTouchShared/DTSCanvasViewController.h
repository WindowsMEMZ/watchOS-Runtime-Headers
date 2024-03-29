//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 571.0.0.0.0
//
#ifndef DTSCanvasViewController_h
#define DTSCanvasViewController_h
@import Foundation;

#include "UIViewController.h"
#include "DTSColorPicker.h"
#include "DTSColorPickerDelegate-Protocol.h"
#include "ETCanvasView.h"
#include "ETCanvasViewDelegate-Protocol.h"
#include "ETMessage.h"

@class AVPlayer, CSLSBacklightAssertion, ETBalloonPluginDataSource, NSArray, NSMutableArray, NSString, NSTimer, UIButton;
@protocol DTSCanvasViewControllerSendDelegate;

@interface DTSCanvasViewController : UIViewController<ETCanvasViewDelegate, DTSColorPickerDelegate> {
  /* instance variables */
  NSMutableArray *_unplayedMessages;
  BOOL _isPlayingMessage;
  UIButton *_replayButton;
  BOOL _showingReplayButton;
  NSTimer *_composeSessionEndTimer;
  AVPlayer *_videoPlayer;
  UIButton *_audioToggleButton;
  UIButton *_cancelButton;
  UIButton *_skipButton;
  CSLSBacklightAssertion *_backlightAssertion;
  NSTimer *_backlightAssertionEndTimer;
}

@property (retain, nonatomic) DTSColorPicker *colorPicker;
@property (weak, nonatomic) ETBalloonPluginDataSource *dataSource;
@property (copy, nonatomic) id /* block */ balloonPlaybackCompletion;
@property (retain, nonatomic) ETMessage *messageForReplay;
@property (weak, nonatomic) NSObject<DTSCanvasViewControllerSendDelegate> *sendDelegate;
@property (nonatomic) unsigned short composingMessageType;
@property (nonatomic) BOOL composingCompositeMessage;
@property (nonatomic) BOOL playingCompositeMessage;
@property (nonatomic) double mediaMessagePlayTrackerTime;
@property (nonatomic) BOOL paused;
@property (nonatomic) BOOL composeDisabled;
@property (nonatomic) BOOL autoPlayOnAppearanceDisabled;
@property (nonatomic) BOOL ignoreAppearanceCallbacks;
@property (retain, nonatomic) ETCanvasView *canvasView;
@property (nonatomic) BOOL playingMessages;
@property (retain, nonatomic) ETMessage *playingMessage;
@property (nonatomic) BOOL deferMessageSend;
@property (readonly, nonatomic) NSArray *deferredMessages;
@property (nonatomic) BOOL usesCompactKeyboardLayout;
@property (nonatomic) BOOL overrideAudioDefaultToOff;
@property (nonatomic) BOOL playbackEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)replayButtonFont;
+ (id)audioToggleOnImage;
+ (id)audioToggleOffImage;

/* instance methods */
- (id)init;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (BOOL)canExpireMessages;
- (void)_updateVideoPlayerUI;
- (BOOL)_shouldShowSkipButton;
- (BOOL)_shouldShowCancelButton;
- (double)_cornerButtonInset;
- (void)_updateSkipButtonFrame;
- (void)_updatePlaybackControls;
- (void)_updateSendButton;
- (id)_audioToggleButton;
- (double)_rightButtonInset;
- (void)_updateAudioOnOffButton;
- (void)_updateAudioOnOffButtonImage;
- (void)_relinquishAudio;
- (void)_audioToggleButtonTapped;
- (void)_applicationWillResignActive;
- (void)_sendAutosendingComposition;
- (void)_applicationDidBecomeActive;
- (void)_applicationDidEnterBackground;
- (void)addUnplayedMessage:(id)message;
- (void)replay;
- (BOOL)canReplay;
- (BOOL)hasMessageForReplay;
- (void)_setCachedMessageForReplay:(id)replay;
- (void)_playMessage:(id)message;
- (void)_schedulePlaybackOfCompositeMessageContent:(id)content;
- (BOOL)_isVisible;
- (void)updateVideoUI;
- (BOOL)_shouldDimColorPicker;
- (void)_updateColorPickerEnabled;
- (BOOL)_shouldAutoSend;
- (void)colorPickerSelectedColorDidChange:(id)change;
- (void)colorPickerTapped:(id)tapped;
- (BOOL)_usingDemoHook;
- (void)_sendDemoHookMessage;
- (void)_exportDemoHookMessage;
- (void)_showDemoHookAlertWithTitle:(id)title message:(id)message;
- (void)_updateCanvasInteractionEnabled;
- (void)canvasView:(id)view didBeginPlayingMessage:(id)message;
- (void)canvasView:(id)view willEndPlayingMessage:(id)message;
- (void)canvasView:(id)view didEndPlayingMessage:(id)message;
- (BOOL)_canLoopMessageDuringPlayback:(id)playback;
- (void)_videoMessageDidFinishPlaying:(id)playing;
- (void)_startVideoPlayerWithMessage:(id)message;
- (void)_hideVideoPlayer;
- (BOOL)_canComposeAfterMediaPlayback;
- (void)canvasView:(id)view didBeginComposingMessageType:(unsigned short)type;
- (void)canvasView:(id)view didUpdateComposingMessageType:(unsigned short)type;
- (void)canvasView:(id)view didEndComposingMessageType:(unsigned short)type;
- (void)canvasView:(id)view sendMessage:(id)message;
- (void)canvasViewDidBeginStroke:(id)stroke;
- (void)canvasViewDidEndStroke:(id)stroke;
- (void)didChangeColorPickerColor;
- (void)didBeginComposingMessage;
- (void)didEndComposingMessage;
- (BOOL)canvasViewShouldUseFastVerticalWisp:(id)wisp;
- (void)canvasViewWillReachComposingSizeLimit:(id)limit;
- (BOOL)canvasViewShouldSendWithTimer:(id)timer;
- (void)canvasViewDidPause:(id)pause;
- (void)canvasViewDidUnpause:(id)unpause;
- (long long)recentHeartRate;
- (void)clearDeferredMessages;
- (BOOL)canvasView:(id)view tapRecognizerShouldBegin:(id)begin;
- (BOOL)_tapRecognizerShouldBegin:(id)begin;
- (void)canvasViewDidStartMediaAppearance:(id)appearance;
- (void)canvasViewDidEndMediaAppearance:(id)appearance;
- (void)canvasView:(id)view angerUsesForceTouch:(BOOL)touch;
- (void)_setAngerUsesForceTouch:(BOOL)touch;
- (BOOL)_canStartMessagePlaybackLoop;
- (void)startMessagePlaybackLoop;
- (void)_stopPlaybackAnimated:(BOOL)animated;
- (void)_reloadUnplayedMessages;
- (void)_playNextMessage;
- (void)_continueMessagePlaybackLoopWithDelay:(BOOL)delay;
- (void)willBeginSessionPlayback;
- (void)willEndSessionPlaybackInterrupted:(BOOL)interrupted;
- (void)didEndSessionPlayback;
- (void)_startComposeSessionEndTimer;
- (void)_clearComposeSessionEndTimer;
- (void)_composeSessionEndTimerFired;
- (id)_cancelButton;
- (id)_skipButton;
- (void)_skipButtonTapped;
- (void)_cancelButtonTapped;
- (id)_replayButton;
- (void)_setReplayButton:(id)button;
- (BOOL)canShowReplayButton;
- (void)_setShowingReplayButton:(BOOL)button;
- (id)_playingParentMessage;
- (double)_nonAnimatedMessagePlaybackDuration;
- (void)dataSource:(id)source didReceiveSessionMessage:(id)message;
- (BOOL)dataSourceShouldUseDemoHook:(id)hook;
- (void)dataSource:(id)source startPlaybackWithCompletion:(id /* block */)completion;
- (BOOL)dataSource:(id)source addDemoHookToMessage:(id *)message;
- (void)dataSourceStopPlayback:(id)playback;
- (BOOL)dataSourceViewIsMostlyVisible:(id)visible;
- (void)dataSource:(id)source didUpdateAttachmentURL:(id)url forMessageWithIdentifier:(id)identifier;
- (void)_beginMessagePlaybackBacklightAssertion;
- (void)_backlightAssertionEndTimerFired;
- (void)_startBacklightAssertionEndTimer;
- (BOOL)isComposingCompositeMessage;
- (BOOL)isPlayingCompositeMessage;
- (BOOL)isPaused;
- (BOOL)isComposeDisabled;
- (BOOL)isAutoPlayOnAppearanceDisabled;
- (BOOL)isPlayingMessages;
- (BOOL)isPlaybackEnabled;
@end

#endif /* DTSCanvasViewController_h */

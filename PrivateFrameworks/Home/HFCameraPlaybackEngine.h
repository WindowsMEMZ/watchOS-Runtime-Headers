//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFCameraPlaybackEngine_h
#define HFCameraPlaybackEngine_h
@import Foundation;

#include "HFCameraAnalyticsCameraClipPlaybackSessionEvent.h"
#include "HFCameraClipPlayerDelegate-Protocol.h"
#include "HFCameraClipPlaying-Protocol.h"
#include "HFCameraLiveStreamControllerDelegate-Protocol.h"
#include "HFCameraLiveStreamControlling-Protocol.h"
#include "HFCameraPlaybackEngineEventCache.h"
#include "HFCameraPlaybackPosition.h"
#include "HMCameraRecordingEventManagerObserver-Protocol.h"

@class AVPlayer, HMCameraClip, HMCameraClipManager, HMCameraProfile, HMCameraSource, HMHome, NADelegateDispatcher, NSArray, NSDate, NSError, NSMapTable, NSMutableSet, NSString, NSTimer, NSUUID;
@protocol HFCameraClipScrubbing;

@interface HFCameraPlaybackEngine : NSObject<HMCameraRecordingEventManagerObserver, HFCameraClipPlayerDelegate, HFCameraLiveStreamControllerDelegate>

@property (retain, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSObject<HFCameraLiveStreamControlling> *liveStreamController;
@property (readonly, nonatomic) NSObject<HFCameraClipScrubbing> *clipScrubber;
@property (readonly, nonatomic) NSMapTable *observerStates;
@property (readonly, nonatomic) NADelegateDispatcher *observerDispatcher;
@property (nonatomic) unsigned long long playbackContentType;
@property (nonatomic) unsigned long long engineMode;
@property (copy, nonatomic) NSDate *lastRequestedClipPlaybackDate;
@property (nonatomic) BOOL wantsToPlay;
@property (nonatomic) unsigned long long timeControlStatus;
@property (retain, nonatomic) NSError *playbackError;
@property (retain, nonatomic) HMCameraSource *liveCameraSource;
@property (nonatomic) unsigned long long scrubbingInProgressCount;
@property (nonatomic) BOOL scrubbing;
@property (retain, nonatomic) HMCameraProfile *cameraProfile;
@property (nonatomic) long long lastPlayerTimeControlStatus;
@property (retain, nonatomic) HFCameraAnalyticsCameraClipPlaybackSessionEvent *playbackSessionEvent;
@property (nonatomic) unsigned long long playbackRetryAttempts;
@property (retain, nonatomic) HFCameraPlaybackEngineEventCache *eventCache;
@property (weak, nonatomic) HMCameraClipManager *clipManager;
@property (retain, nonatomic) NSUUID *notificationCenterClipUUID;
@property (retain, nonatomic) NSTimer *batchedRecordingEventsTimer;
@property (retain, nonatomic) NSMutableSet *batchedRecordingEvents;
@property (nonatomic) BOOL shouldBatchRecordingEvents;
@property (readonly, nonatomic) NSObject<HFCameraClipPlaying> *clipPlayer;
@property (readonly, copy, nonatomic) NSArray *observers;
@property (nonatomic) unsigned long long timelineState;
@property (nonatomic) BOOL userScrubbing;
@property (readonly, nonatomic) HMCameraClip *currentClip;
@property (readonly, nonatomic) AVPlayer *player;
@property (readonly, copy, nonatomic) NSArray *cameraEvents;
@property (readonly, copy, nonatomic) NSArray *cameraClips;
@property (nonatomic) BOOL microphoneEnabled;
@property (nonatomic) BOOL streamAudioEnabled;
@property (nonatomic) float streamAudioVolume;
@property (nonatomic) BOOL prefersAudioEnabled;
@property (readonly, nonatomic) BOOL shouldDisplayVolumeControls;
@property (nonatomic) BOOL pictureInPictureModeActive;
@property (nonatomic) BOOL shouldBypassVideoFetchRequest;
@property (nonatomic) BOOL shouldBypassHighQualityScrubbing;
@property (nonatomic) unsigned long long scrubbingSpeed;
@property (readonly, nonatomic) BOOL hasRecordingEvents;
@property (readonly, nonatomic) BOOL isCameraPortraitMode;
@property (retain, nonatomic) HFCameraPlaybackPosition *playbackPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)findClipPositionForDate:(id)date inEvents:(id)events options:(unsigned long long)options;
+ (unsigned long long)hf_indexOfClipForDate:(id)date inEvents:(id)events enumerationOptions:(unsigned long long)options searchOptions:(unsigned long long)options;

/* instance methods */
- (id)init;
- (id)initWithConfiguration:(id)configuration;
- (void)updateLiveStreamForCameraProfile:(id)profile;
- (void)_setupLiveStreamController:(id)controller;
- (void)_setupClipPlayerWithClipManager:(id)manager;
- (void)_setupTimeObservationForObserver:(id)observer;
- (void)fetchCameraEventsWithCompletion:(id /* block */)completion;
- (void)fetchCameraClipForUUID:(id)uuid withCompletion:(id /* block */)completion;
- (void)fetchCameraClipForNotificationUUID:(id)uuid withCompletion:(id /* block */)completion;
- (void)updateConfiguration:(id)configuration;
- (void)updatePlaybackPositionToDate:(id)date usingClip:(id)clip;
- (void)startPlaybackAtDate:(id)date withClip:(id)clip;
- (void)play;
- (void)pause;
- (void)addObserver:(id)observer withOptions:(id)options;
- (void)removeObserver:(id)observer;
- (void)modifyPlaybackFromSender:(id)sender usingBlock:(id /* block */)block;
- (void)beginScrubbing;
- (void)endScrubbing;
- (void)startPlaybackForCurrentClip;
- (unsigned long long)_derivedTimeControlStatus;
- (id)_derivedPlaybackError;
- (void)_updatePlaybackStateNotifyingObservers:(BOOL)observers;
- (void)_updatePlaybackStateNotifyingObservers:(BOOL)observers rebuildClipPlayerIfNeeded:(BOOL)needed;
- (void)_updateStateForRequestedPlaybackPosition:(id)position notifyObservers:(BOOL)observers;
- (void)_setMicrophoneEnabled:(BOOL)enabled notifyObservers:(BOOL)observers;
- (void)_setPlayerVolume:(float)volume notifyObservers:(BOOL)observers;
- (void)_setStreamAudioEnabled:(BOOL)enabled notifyObservers:(BOOL)observers;
- (BOOL)isLiveStreaming;
- (BOOL)isLiveStreamPlaying;
- (void)recordingEventManager:(id)manager didUpdateRecordingEvents:(id)events;
- (void)_recordingEventManager:(id)manager didUpdateRecordingEvents:(id)events;
- (void)recordingEventManager:(id)manager didRemoveRecordingEventsWithUUIDs:(id)uuids;
- (void)clipPlayer:(id)player didUpdateTimeControlStatus:(long long)status;
- (void)clipPlayer:(id)player didUpdateError:(id)error isFatal:(BOOL)fatal;
- (void)clipPlayer:(id)player didUpdateMuted:(BOOL)muted;
- (void)clipPlayerDidPlayToEndTime:(id)time;
- (void)streamControllerStateDidUpdate:(id)update;
- (id)timelineStateDescription;
- (id)timeControlStatusDescription;
- (id)engineModeDescription;
- (id)shortDebugDescription;
- (BOOL)isFirstEventOfTheDay:(id)day;
- (id)firstOfTheDayClipForDate:(id)date;
- (id)findClipPositionForDate:(id)date;
- (id)findClipPositionForDate:(id)date options:(unsigned long long)options;
- (void)dealloc;
- (BOOL)isMicrophoneEnabled;
- (BOOL)isStreamAudioEnabled;
- (BOOL)isUserScrubbing;
- (BOOL)isPictureInPictureModeActive;
- (BOOL)isScrubbing;
@end

#endif /* HFCameraPlaybackEngine_h */

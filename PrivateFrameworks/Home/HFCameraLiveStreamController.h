//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFCameraLiveStreamController_h
#define HFCameraLiveStreamController_h
@import Foundation;

#include "HFCameraAudioManager.h"
#include "HFCameraLiveStreamControllerDelegate-Protocol.h"
#include "HFCameraLiveStreamControlling-Protocol.h"
#include "HFCameraObserver-Protocol.h"

@class HMCameraProfile, HMCameraSource, HMHome, NSError, NSString;

@interface HFCameraLiveStreamController : NSObject<HFCameraObserver, HFCameraLiveStreamControlling>

@property (retain, nonatomic) HFCameraAudioManager *audioManager;
@property (nonatomic) unsigned long long inferredStreamState;
@property (nonatomic) BOOL startStreamingAfterStop;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMCameraProfile *cameraProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HFCameraLiveStreamControllerDelegate> *delegate;
@property (readonly, nonatomic) BOOL streamingEnabled;
@property (readonly, nonatomic) unsigned long long streamState;
@property (readonly, nonatomic) HMCameraSource *liveCameraSource;
@property (readonly, nonatomic) NSError *streamError;
@property (nonatomic) BOOL streamAudioEnabled;
@property (nonatomic) float streamAudioVolume;
@property (nonatomic) BOOL microphoneEnabled;

/* instance methods */
- (id)init;
- (id)initWithHome:(id)home cameraProfile:(id)profile;
- (void)dealloc;
- (void)startStreaming;
- (void)stopStreaming;
- (BOOL)isStreamingEnabled;
- (id)activeStream;
- (id)mostRecentSnapshot;
- (void)_updateAudioManagerState;
- (unsigned long long)_derivedAudioStreamSetting;
- (void)cameraStreamControlDidUpdateStreamState:(id)state;
- (void)cameraStreamControlDidUpdateManagerState:(id)state;
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)snapshot;
- (void)cameraStreamControlDidStartStream:(id)stream;
- (void)cameraStreamControl:(id)control didStopStreamWithError:(id)error;
- (void)cameraUserSettingsDidUpdate:(id)update;
- (BOOL)isMicrophoneEnabled;
- (BOOL)isStreamAudioEnabled;
@end

#endif /* HFCameraLiveStreamController_h */

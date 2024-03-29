//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 629.3.4.0.0
//
#ifndef AVVoiceController_h
#define AVVoiceController_h
@import Foundation;

#include "AVAudioRemoteInputPlugin_PrivateTest-Protocol.h"
#include "Endpointer-Protocol.h"

@class NSDictionary, NSString;
@protocol AVVoiceControllerRecordDelegate;

@interface AVVoiceController : NSObject<AVAudioRemoteInputPlugin_PrivateTest> {
  /* instance variables */
  void * _impl;
  BOOL mClientAPIClutch;
}

@property (retain) NSObject<Endpointer> *endpointerDelegate;
@property int recordEndpointMode;
@property double recordStartWaitTime;
@property double recordInterspeechWaitTime;
@property double recordEndWaitTime;
@property (@dynamic) NSObject<AVVoiceControllerRecordDelegate> *recordDelegate;
@property float alertVolume;
@property (readonly) unsigned long long alertStartTime;
@property (readonly) NSDictionary *metrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (struct shared_ptr<ControllerImpl> { struct ControllerImpl * x0; struct __shared_weak_count * x1; })impl;
- (void)sessionSetup;
- (void)sessionCleanup;
- (void)setSessionNotifications:(id)notifications;
- (void)removeSessionNotifications:(id)notifications;
- (void)hardwareConfigChanged:(int)changed;
- (void)handleInterruption:(id)interruption;
- (void)handleRouteChange:(id)change;
- (void)handleMediaServerDeath:(id /* block */)death;
- (void)handleMediaServerReset:(id /* block */)reset;
- (void)configureVoiceTriggerClientCompletionBlocks;
- (void)handlePluginDidPublishDevice:(id)device withDevice:(id)device;
- (void)handlePluginDidUnpublishDevice:(id)device withDevice:(id)device;
- (void)beganRecording:(unsigned long long)recording status:(int)status;
- (void)finishedRecording:(unsigned long long)recording status:(int)status;
- (void)startpointDetected;
- (void)interspeechPointDetectedAtTime:(double)time;
- (void)endpointDetectedAtTime:(double)time;
- (void)encodeError:(int)error;
- (void)alertPlaybackFinishedWithSettings:(id)settings;
- (void)notifyStreamInvalidated:(unsigned long long)invalidated;
- (void)notifyEventOccured:(unsigned long long)occured error:(id)error;
- (void)beginRecordInterruptionWithContext:(id)context;
- (void)endRecordInterruption;
- (void)beginAudioSessionActivate:(BOOL)activate;
- (void)endAudioSessionActivate:(BOOL)activate;
- (void)finalize;
- (void)cleanSlateWithError:(id *)error;
- (void)removeStream:(unsigned long long)stream completion:(id /* block */)completion;
- (void)teardownWithError:(id *)error;
- (void)_teardownWithError:(id *)error;
- (void)dealloc;
- (void)enableMiniDucking:(BOOL)ducking;
- (BOOL)IsDeviceAvailableInLocalRoute:(id)route error:(id *)error;
- (BOOL)setAlertSoundFromURL:(id)url forType:(int)type;
- (unsigned long long)getAlertStartTime;
- (id)initWithError:(id *)error;
- (id)initVoiceControllerForClient:(long long)client withError:(id *)error;
- (long long)_bringUp:(long long)up withError:(id *)error;
- (void)setContext:(id)context completion:(id /* block */)completion;
- (unsigned long long)setContext:(id)context error:(id *)error;
- (unsigned long long)setContext:(id)context streamType:(long long *)type error:(id *)error;
- (void)prepareRecordForStream:(id)stream completion:(id /* block */)completion;
- (BOOL)prepareRecordForStream:(id)stream error:(id *)error;
- (void)startRecordWithSettings:(id)settings completion:(id /* block */)completion alertCompletion:(id /* block */)completion audioCallback:(id /* block */)callback;
- (void)startRecordForStream:(id)stream completion:(id /* block */)completion;
- (BOOL)startRecordForStream:(id)stream error:(id *)error;
- (void)configureAlertBehaviorForStream:(id)stream completion:(id /* block */)completion;
- (BOOL)configureAlertBehaviorForStream:(id)stream error:(id *)error;
- (void)stopRecordForStream:(unsigned long long)stream completion:(id /* block */)completion;
- (BOOL)stopRecordForStream:(unsigned long long)stream error:(id *)error;
- (long long)getCurrentStreamState:(unsigned long long)state;
- (id)getRecordDeviceInfoForStream:(unsigned long long)stream;
- (BOOL)activateAudioSessionForStream:(unsigned long long)stream isPrewarm:(BOOL)prewarm error:(id *)error;
- (BOOL)activateAudioSessionForStream:(unsigned long long)stream isPrewarm:(BOOL)prewarm recordMode:(BOOL)mode error:(id *)error;
- (void)deactivateAudioSessionWithOptions:(unsigned long long)options;
- (void)deactivateAudioSessionForStream:(unsigned long long)stream withOptions:(unsigned long long)options completion:(id /* block */)completion;
- (void)deactivateAudioSessionForStream:(unsigned long long)stream withOptions:(unsigned long long)options error:(id *)error;
- (long long)getCurrentSessionState;
- (long long)getCurrentSessionStateForStream:(unsigned long long)stream;
- (BOOL)setContextForStream:(id)stream forStream:(unsigned long long)stream error:(id *)error;
- (void)playAlert:(int)alert withOverride:(long long)override completion:(id /* block */)completion;
- (BOOL)playAlertSoundForType:(int)type overrideMode:(long long)mode;
- (double)getRecordBufferDurationForStream:(unsigned long long)stream;
- (id)getRecordSettingsForStream:(unsigned long long)stream;
- (BOOL)isMeteringEnabledForStream:(unsigned long long)stream;
- (BOOL)updateMeterForStream:(unsigned long long)stream;
- (float)getPeakPowerForStream:(unsigned long long)stream forChannel:(unsigned long long)channel;
- (float)getAveragePowerForStream:(unsigned long long)stream forChannel:(unsigned long long)channel;
- (void)setRecordStatusChangeBlock:(id /* block */)block;
- (BOOL)enableSmartRoutingConsiderationForStream:(unsigned long long)stream enable:(BOOL)enable error:(id *)error;
- (BOOL)setAnnounceCallsEnabledForStream:(unsigned long long)stream enable:(BOOL)enable;
- (void)getInputChannelInfoForStream:(unsigned long long)stream completion:(id /* block */)completion;
- (BOOL)setDuckOthersForStream:(unsigned long long)stream withSettings:(id)settings error:(id *)error;
- (BOOL)isDuckingSupportedOnPickedRouteForStream:(unsigned long long)stream error:(id *)error;
- (void)enableTriangleModeForStream:(unsigned long long)stream enable:(BOOL)enable withCompletion:(id /* block */)completion;
- (void)getPlaybackRouteForStream:(unsigned long long)stream withCompletion:(id /* block */)completion;
- (id)getPlaybackRouteForStream:(unsigned long long)stream withError:(id *)error;
- (void)startKeepAliveQueueForStream:(unsigned long long)stream completion:(id /* block */)completion;
- (void)stopKeepAliveQueueForStream:(unsigned long long)stream completion:(id /* block */)completion;
- (void)getDeviceLatenciesForStream:(unsigned long long)stream withCompletion:(id /* block */)completion;
- (id)mockPluginEndpoint;
@end

#endif /* AVVoiceController_h */

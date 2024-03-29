//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 217.20.3.0.0
//
#ifndef ANTonePlayer_h
#define ANTonePlayer_h
@import Foundation;

@class AVAudioSession, AVPlayer, AVPlayerItem, NSUUID;
@protocol OS_os_log;

@interface ANTonePlayer : NSObject

@property (nonatomic) unsigned int proxyAudioSessionID;
@property (readonly, nonatomic) NSUUID *endpointUUID;
@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVAudioSession *audioSession;
@property (nonatomic) BOOL usingProxyAudioSession;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;

/* instance methods */
- (id)initWithAudioSessionID:(unsigned int)id endpointUUID:(id)uuid;
- (void)dealloc;
- (void)playFileURL:(id)url completionHandler:(id /* block */)handler;
- (void)stop;
- (void)_playSystemSoundWithFileURL:(id)url;
- (void)_playFileURL:(id)url;
- (BOOL)_activateAudioSessionForPlayer:(id)player error:(id *)error;
- (void)_deactivateAudioSession;
- (void)_registerForNotificationsWithAudioSession:(id)session;
- (void)_deregisterForNotificationsWithAudioSession:(id)session;
- (void)audioSessionInterruptionHandler:(id)handler;
- (void)_handleFailure;
- (void)_handlePlayerItemFailedToPlayToEnd:(id)end;
- (void)_handlePlayerItemPlayedToEnd:(id)end;
- (void)playerRateChangedHandler:(id)handler;
- (void)_callHandler:(id)handler;
@end

#endif /* ANTonePlayer_h */

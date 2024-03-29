//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRNotificationClient_h
#define MRNotificationClient_h
@import Foundation;

#include "MRNowPlayingClientState-Protocol.h"

@class NSMutableArray, NSOrderedSet;
@protocol OS_dispatch_queue;

@interface MRNotificationClient : NSObject<MRNowPlayingClientState> {
  /* instance variables */
  unsigned long long _registeredNowPlayingObservers;
  NSObject<OS_dispatch_queue> *_customNotificationsQueue;
  NSObject<OS_dispatch_queue> *_serialQueue;
  NSOrderedSet *_nowPlayingNotifications;
  NSOrderedSet *_routesChangedNotifications;
  NSOrderedSet *_volumeControlNotifications;
  NSOrderedSet *_externalScreenNotifications;
  NSOrderedSet *_originNotifications;
  NSOrderedSet *_supportedCommandsNotifications;
  NSOrderedSet *_voiceInputNotifications;
  NSOrderedSet *_errorNotifications;
  NSMutableArray *_subscribedWakingPlayerPaths;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (readonly, nonatomic) BOOL registeredForNowPlayingNotifications;
@property (nonatomic) BOOL receivesExternalScreenTypeChangedNotifications;
@property (nonatomic) BOOL receivesSupportedCommandsNotifications;
@property (nonatomic) BOOL receivesRoutesChangedNotifications;
@property (nonatomic) BOOL receivesVolumeControlNotifications;
@property (nonatomic) BOOL receivesOriginChangedNotifications;
@property (nonatomic) BOOL receivesPlaybackErrorNotifications;
@property (nonatomic) BOOL receivesVoiceInputRecordingStateNotifications;

/* class methods */
+ (id)nowPlayingNotifications;

/* instance methods */
- (id)init;
- (id)debugDescription;
- (void)registerForNowPlayingNotificationsWithQueue:(id)queue;
- (void)registerForNowPlayingNotificationsWithQueue:(id)queue force:(BOOL)force;
- (void)unregisterForNowPlayingNotifications;
- (BOOL)isRegisteredForNowPlayingNotifications;
- (BOOL)_processAlwaysNeedsNowPlayingNotifications;
- (void)registerForWakingNowPlayingNotificationsForPlayerPath:(id)path replyQueue:(id)queue completion:(id /* block */)completion;
- (void)unregisterForWakingNowPlayingNotificationsForPlayerPath:(id)path replyQueue:(id)queue completion:(id /* block */)completion;
- (void)_syncWakingPlayerPathsWithReplyQueue:(id)queue completion:(id /* block */)completion;
- (void)restoreNowPlayingClientState;
- (void)dispatchNotification:(id)notification userInfo:(id)info object:(id)object;
- (BOOL)postNotification:(id)notification userInfo:(id)info object:(id)object;
- (BOOL)_postNotification:(id)notification userInfo:(id)info object:(id)object withHandler:(id /* block */)handler;
@end

#endif /* MRNotificationClient_h */

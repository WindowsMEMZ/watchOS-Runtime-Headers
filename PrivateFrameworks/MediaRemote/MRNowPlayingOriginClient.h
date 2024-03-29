//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRNowPlayingOriginClient_h
#define MRNowPlayingOriginClient_h
@import Foundation;

#include "MRApplicationActivity.h"
#include "MRClient.h"
#include "MRNowPlayingClientState-Protocol.h"
#include "MROrigin.h"

@class NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface MRNowPlayingOriginClient : NSObject<MRNowPlayingClientState> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_serialQueue;
  id /* block */ _capabilitiesCallback;
}

@property (readonly, nonatomic) MROrigin *origin;
@property (nonatomic) BOOL overrideApp;
@property (copy, nonatomic) NSString *overrideAppBundleID;
@property (nonatomic) unsigned int hardwareRemoteBehavior;
@property (nonatomic) unsigned int routeDiscoveryMode;
@property (copy, nonatomic) NSArray *applicationPickedRoutes;
@property (nonatomic) unsigned int inputMode;
@property (nonatomic) unsigned int volumeCapabilities;
@property (nonatomic) float volume;
@property (retain, nonatomic) MRApplicationActivity *activity;
@property (retain, nonatomic) NSString *routingContextID;
@property (copy, nonatomic) id /* block */ playbackQueueCallback;
@property (copy, nonatomic) id /* block */ commandCallback;
@property (copy, nonatomic) id /* block */ playbackSessionCallback;
@property (copy, nonatomic) id /* block */ playbackSessionMigrateBeginCallback;
@property (copy, nonatomic) id /* block */ playbackSessionMigrateEndCallback;
@property (copy, nonatomic) id /* block */ playbackSessionMigrateRequestCallback;
@property (copy, nonatomic) id /* block */ beginLyricsEventCallback;
@property (copy, nonatomic) id /* block */ endLyricsEventCallback;
@property (copy, nonatomic) id /* block */ clientMessageCallback;
@property (retain, nonatomic) MRClient *activeNowPlayingClient;
@property (readonly, nonatomic) NSArray *nowPlayingClients;

/* instance methods */
- (id)initWithOrigin:(id)origin;
- (void)dealloc;
- (void)setIsOverrideApp:(BOOL)app;
- (id)existingNowPlayingClientForPlayerPath:(id)path;
- (id)nowPlayingClientForPlayerPath:(id)path;
- (void)removeClient:(id)client;
- (void)removeAllClients;
- (void)restoreNowPlayingClientState;
- (void)_prepareToRestoreClientStateWithCompletion:(id /* block */)completion;
- (void)_restoreNowPlayingClientState;
- (id)description;
- (id)debugDescription;
- (BOOL)isOverrideApp;
@end

#endif /* MRNowPlayingOriginClient_h */

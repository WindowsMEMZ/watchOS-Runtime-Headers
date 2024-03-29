//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRNowPlayingClient_h
#define MRNowPlayingClient_h
@import Foundation;

#include "MRClient.h"
#include "MRNowPlayingClientState-Protocol.h"
#include "MRPlayer.h"
#include "MRPlayerPath.h"

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MRNowPlayingClient : NSObject<MRNowPlayingClientState> {
  /* instance variables */
  MRPlayer *_activePlayer;
  BOOL _isForeground;
  double _canBeNowPlayingTimestamp;
  NSObject<OS_dispatch_queue> *_replayQueue;
  NSMutableArray *_commandQueue;
  NSObject<OS_dispatch_queue> *_avscQueue;
}

@property (nonatomic) BOOL canBeNowPlaying;
@property (nonatomic) BOOL perPlayerCanBeNowPlaying;
@property (retain, nonatomic) MRPlayerPath *playerPath;
@property (retain, nonatomic) MRClient *client;
@property (readonly, nonatomic) MRPlayerPath *activePlayerPath;
@property (readonly, nonatomic) NSArray *playerClients;
@property (nonatomic) BOOL useMediaRemoteActivePlayerHeuristic;

/* instance methods */
- (id)initWithPlayerPath:(id)path;
- (void)dealloc;
- (void)mergeClient:(id)client;
- (void)requestActiveForPlayerPath:(id)path completion:(id /* block */)completion;
- (void)updateActivePlayerPath:(id)path completion:(id /* block */)completion;
- (void)setActivePlayerPath:(id)path reason:(id)reason completion:(id /* block */)completion;
- (void)reevaluateActivePlayerWithReason:(id)reason completion:(id /* block */)completion;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (id)nowPlayingPlayerClientForPlayerPath:(id)path;
- (void)removePlayer:(id)player;
- (BOOL)canBeNowPlayingForPlayer:(id)player;
- (void)enqueueCommand:(unsigned int)command options:(id)options playerPath:(id)path commandCompletion:(id /* block */)completion;
- (void)sendQueuedCommandsWithReason:(id)reason;
- (void)_avSessionMediaServicesResetNotification:(id)notification;
- (void)restoreNowPlayingClientState;
- (id)description;
- (id)debugDescription;
@end

#endif /* MRNowPlayingClient_h */

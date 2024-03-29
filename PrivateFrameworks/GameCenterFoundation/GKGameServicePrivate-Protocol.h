//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKGameServicePrivate_Protocol_h
#define GKGameServicePrivate_Protocol_h
@import Foundation;

@protocol GKGameServicePrivate <GKGameService>
/* instance methods */
- (void)getTopGamesWithHandler:(id /* block */)handler;
- (void)getOnDeviceMultiplayerGamesForBundleIDs:(id)ids handler:(id /* block */)handler;
- (void)removeGameForBundleID:(id)id handler:(id /* block */)handler;
- (void)getGamesForPlayer:(id)player includeInstalled:(BOOL)installed handler:(id /* block */)handler;
- (void)getGameStatsForPlayer:(id)player bundleIDs:(id)ids handler:(id /* block */)handler;
- (void)getGamesWithAchievementStatsForPlayer:(id)player handler:(id /* block */)handler;
- (void)getGameMetadataForBundleIDs:(id)ids handler:(id /* block */)handler;
- (void)getGamesPlayedSummaries:(id)summaries limit:(id)limit handler:(id /* block */)handler;
- (void)getGamesPlayedSummaries:(id)summaries limit:(id)limit withinSecs:(id)secs handler:(id /* block */)handler;
- (void)getGamesPlayedMetaData:(id)data handler:(id /* block */)handler;
- (void)getFriendListAccessForAllGames:(id /* block */)games;
- (void)submitFriendListAccess:(id)access value:(id)value handler:(id /* block */)handler;
- (void)clearGlobalGameCacheWithHandler:(id /* block */)handler;
@end

#endif /* GKGameServicePrivate_Protocol_h */

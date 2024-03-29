//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 800.20.10.0.0
//
#ifndef WLKSportsFavoriteManager_h
#define WLKSportsFavoriteManager_h
@import Foundation;

#include "WLKSportsFavoriteCaching-Protocol.h"

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WLKSportsFavoriteManager : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  int _favoritesCacheSyncNotificationToken;
  int _sportsFavoriteSyncSettingChangedNotificationToken;
  NSXPCConnection *_connection;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _xpcLock;
}

@property (retain) NSObject<WLKSportsFavoriteCaching> *_cache;

/* class methods */
+ (id)defaultManager;
+ (BOOL)isOptOutAvailable;

/* instance methods */
- (id)initWithCache:(id)cache;
- (void)deleteLegacyCache;
- (void)handleAccountDidChange:(id)change;
- (id)caller;
- (void)dealloc;
- (id)_connection;
- (void)_invalidationHandler;
- (void)handleRefreshCacheNotification;
- (void)handleSyncSettingChangedNotification;
- (void)isOnboarded:(id /* block */)onboarded;
- (void)setOptInStatus:(BOOL)status completion:(id /* block */)completion;
- (void)favoritesWithCompletion:(id /* block */)completion;
- (void)getFavoritesWithCompletion:(id /* block */)completion;
- (void)addFavorites:(id)favorites completion:(id /* block */)completion;
- (void)removeFavorites:(id)favorites completion:(id /* block */)completion;
- (void)getFavoritesIgnoringCache:(BOOL)cache completion:(id /* block */)completion;
- (void)_getFavoritesIgnoringCache:(BOOL)cache overrideLastModifiedDate:(BOOL)date completion:(id /* block */)completion;
- (void)_performAction:(unsigned long long)action withIDs:(id)ids caller:(id)caller completion:(id /* block */)completion;
- (void)_performUserSettingsAction:(unsigned long long)action setFavoritesSyncEnabled:(BOOL)enabled caller:(id)caller completion:(id /* block */)completion;
- (void)watchlistd_performAction:(unsigned long long)action withIDs:(id)ids caller:(id)caller overrideLastModifiedDate:(BOOL)date completion:(id /* block */)completion;
- (void)watchlistd_performUserSettingsAction:(unsigned long long)action setFavoritesSyncEnabled:(BOOL)enabled caller:(id)caller overrideLastModifiedDate:(BOOL)date completion:(id /* block */)completion;
- (void)_perform:(id)_perform completion:(id /* block */)completion;
- (void)_performUserSettingsOperation:(id)operation completion:(id /* block */)completion;
@end

#endif /* WLKSportsFavoriteManager_h */

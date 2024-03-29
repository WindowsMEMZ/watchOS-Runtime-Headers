//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 800.20.10.0.0
//
#ifndef WLKSportsFavoriteCaching_Protocol_h
#define WLKSportsFavoriteCaching_Protocol_h
@import Foundation;

@protocol WLKSportsFavoriteCaching <NSObject>
/* instance methods */
- (BOOL)hasCache;
- (void)setCache:(id)cache overrideLastModifiedDate:(BOOL)date completion:(id /* block */)completion;
- (void)getFavoritesWithCompletion:(id /* block */)completion;
- (void)addFavorites:(id)favorites completion:(id /* block */)completion;
- (void)removeFavorites:(id)favorites completion:(id /* block */)completion;
- (void)invalidate;
- (void)hasFavoritesSyncEnabledKey:(id /* block */)key;
- (void)isOptedIn:(id /* block */)in;
- (void)setOptInStatus:(BOOL)status overrideLastModifiedDate:(BOOL)date completion:(id /* block */)completion;
- (id)dictionaryRepresentation;
- (void)deleteLegacyCacheWithCompletion:(id /* block */)completion;
@end

#endif /* WLKSportsFavoriteCaching_Protocol_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKFriendServicePrivate_Protocol_h
#define GKFriendServicePrivate_Protocol_h
@import Foundation;

@protocol GKFriendServicePrivate <GKFriendService>
/* instance methods */
- (void)expireFriendList;
- (void)cancelFriendRequestWithIdentifier:(id)identifier handler:(id /* block */)handler;
- (void)acceptFriendRequestWithIdentifier:(id)identifier sendPush:(BOOL)push handler:(id /* block */)handler;
- (void)rejectFriendRequestWithIdentifier:(id)identifier handler:(id /* block */)handler;
- (void)getFriendCodeDetailWithIdentifiers:(id)identifiers handler:(id /* block */)handler;
- (void)getPlayerActivityFeed:(id)feed bundleID:(id)id continuation:(id)continuation handler:(id /* block */)handler;
- (void)getPlayerActivityFeed:(id)feed bundleID:(id)id continuation:(id)continuation gameCategoryFilter:(id)filter handler:(id /* block */)handler;
- (void)getPlayerActivityFeed:(id)feed gameID:(id)id continuation:(id)continuation handler:(id /* block */)handler;
- (void)clearActivityFeedCacheWithHandler:(id /* block */)handler;
- (void)getActiveFriendRequests:(id /* block */)requests;
- (void)didAccept:(BOOL)accept friendRequest:(id)request handler:(id /* block */)handler;
- (void)getMessageInboxEntries:(id /* block */)entries;
- (void)removeMessageInboxEntries:(id)entries handler:(id /* block */)handler;
- (void)getCommonFriendsForPlayer:(id)player handler:(id /* block */)handler;
- (void)removeFriendWithPlayer:(id)player handler:(id /* block */)handler;
- (void)removeAllFriendsWithHandler:(id /* block */)handler;
- (void)getConcernsForPlayer:(id)player handler:(id /* block */)handler;
- (void)reportConcern:(id)concern handler:(id /* block */)handler;
- (void)getFriendsForPlayer:(id)player withFilter:(id)filter handler:(id /* block */)handler;
- (void)getChallengableFriendsForPlayer:(id)player fetchOptions:(unsigned long long)options completion:(id /* block */)completion;
- (void)getFriendsForPlayer:(id)player fetchOptions:(unsigned long long)options handler:(id /* block */)handler;
- (void)getFriendsForPlayer:(id)player fetchOptions:(unsigned long long)options withFilter:(id)filter handler:(id /* block */)handler;
@end

#endif /* GKFriendServicePrivate_Protocol_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 752.2.0.0.0
//
#ifndef ASServerInterface_Protocol_h
#define ASServerInterface_Protocol_h
@import Foundation;

@protocol ASServerInterface <NSObject>
/* instance methods */
- (void)remote_sendInviteRequestToDestination:(id)destination callerID:(id)id serviceIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)remote_acceptInviteRequestFromFriendWithUUID:(id)uuid completion:(id /* block */)completion;
- (void)remote_sendWithdrawInviteRequestToFriendWithUUID:(id)uuid completion:(id /* block */)completion;
- (void)remote_ignoreInviteRequestFromFriendWithUUID:(id)uuid completion:(id /* block */)completion;
- (void)remote_setActivityDataVisible:(BOOL)visible toFriendWithUUID:(id)uuid completion:(id /* block */)completion;
- (void)remote_setMuteEnabled:(BOOL)enabled forFriendWithUUID:(id)uuid completion:(id /* block */)completion;
- (void)remote_removeFriendWithUUID:(id)uuid completion:(id /* block */)completion;
- (void)remote_pushActivityDataWithCompletion:(id /* block */)completion;
- (void)remote_pushFakeActivityDataWithCompletion:(id /* block */)completion;
- (void)remote_fetchAllDataWithCompletion:(id /* block */)completion;
- (void)remote_fetchAllDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)than completion:(id /* block */)completion;
- (void)remote_cloudKitAccountStatusWithCompletion:(id /* block */)completion;
- (void)remote_clearFriendListWithCompletion:(id /* block */)completion;
- (void)remote_fetchAreMultipleDevicesSharingDataForSnapshotIndex:(id)index withCompletion:(id /* block */)completion;
- (void)remote_sendCompetitionRequestToFriendWithUUID:(id)uuid completion:(id /* block */)completion;
- (void)remote_acceptCompetitionRequestFromFriendWithUUID:(id)uuid completion:(id /* block */)completion;
- (void)remote_ignoreCompetitionRequestFromFriendWithUUID:(id)uuid completion:(id /* block */)completion;
- (void)remote_completeCompetitionWithFriendWithUUID:(id)uuid completion:(id /* block */)completion;
- (void)remote_expireChangeTokenWithCompletion:(id /* block */)completion;
- (void)remote_fetchAllFriendsWithCompletion:(id /* block */)completion;
- (void)remote_friendWithRemoteUUID:(id)uuid completion:(id /* block */)completion;
- (void)remote_handleNotificationResponse:(id)response completion:(id /* block */)completion;
- (void)remote_queryAppBadgeCountWithCompletion:(id /* block */)completion;
@end

#endif /* ASServerInterface_Protocol_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 491.7.0.0.0
//
#ifndef _TtC21UserNotificationsCore29NotificationServiceConnection_UserNotificationsCore_h
#define _TtC21UserNotificationsCore29NotificationServiceConnection_UserNotificationsCore_h
@import Foundation;

@interface UserNotificationsCore.NotificationServiceConnection (UserNotificationsCore) <UNUserNotificationServerProtocol, UNUserNotificationClientProtocol>
/* instance methods */
- (void)didReceiveDeviceToken:(id)token forBundleIdentifier:(id)identifier;
- (void)setObservingUserNotifications:(BOOL)notifications forBundleIdentifier:(id)identifier;
- (void)requestAuthorizationWithOptions:(unsigned long long)options forBundleIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)getNotificationSettingsForBundleIdentifier:(id)identifier withCompletionHandler:(id /* block */)handler;
- (void)getNotificationCategoriesForBundleIdentifier:(id)identifier withCompletionHandler:(id /* block */)handler;
- (void)setNotificationCategories:(id)categories forBundleIdentifier:(id)identifier;
- (void)addNotificationRequest:(id)request forBundleIdentifier:(id)identifier withCompletionHandler:(id /* block */)handler;
- (void)replaceContentForRequestWithIdentifier:(id)identifier bundleIdentifier:(id)identifier replacementContent:(id)content completionHandler:(id /* block */)handler;
- (void)setNotificationRequests:(id)requests forBundleIdentifier:(id)identifier;
- (void)setNotificationRequests:(id)requests forBundleIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)getPendingNotificationRequestsForBundleIdentifier:(id)identifier withCompletionHandler:(id /* block */)handler;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)identifiers forBundleIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)removeSimilarNotificationRequests:(id)requests forBundleIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)removeAllPendingNotificationRequestsForBundleIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)getDeliveredNotificationsForBundleIdentifier:(id)identifier withCompletionHandler:(id /* block */)handler;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)identifiers forBundleIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)removeAllDeliveredNotificationsForBundleIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)getBadgeNumberForBundleIdentifier:(id)identifier withCompletionHandler:(id /* block */)handler;
- (void)setBadgeNumber:(id)number forBundleIdentifier:(id)identifier withCompletionHandler:(id /* block */)handler;
- (void)setBadgeCount:(id)count forBundleIdentifier:(id)identifier withCompletionHandler:(id /* block */)handler;
- (void)setBadgeString:(id)string forBundleIdentifier:(id)identifier withCompletionHandler:(id /* block */)handler;
- (void)setNotificationTopics:(id)topics forBundleIdentifier:(id)identifier withCompletionHandler:(id /* block */)handler;
- (void)getNotificationTopicsForBundleIdentifier:(id)identifier withCompletionHandler:(id /* block */)handler;
- (void)getNotificationSettingsForTopicsWithBundleIdentifier:(id)identifier withCompletionHandler:(id /* block */)handler;
- (void)requestRemoveAuthorizationForBundleIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)getClearedInfoForDataProviderMigrationWithBundleIdentifier:(id)identifier withCompletionHandler:(id /* block */)handler;
@end

#endif /* _TtC21UserNotificationsCore29NotificationServiceConnection_UserNotificationsCore_h */

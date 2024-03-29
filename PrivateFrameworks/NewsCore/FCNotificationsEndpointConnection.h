//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCNotificationsEndpointConnection_h
#define FCNotificationsEndpointConnection_h
@import Foundation;

#include "FCAsyncSerialQueue.h"
#include "FCBundleSubscriptionManagerType-Protocol.h"
#include "FCCoreConfigurationManager-Protocol.h"
#include "FCCoreConfigurationObserving-Protocol.h"
#include "FCEndpointConnection.h"
#include "FCFileCoordinatedNotificationDropbox.h"

@class NSString, NSURL;

@interface FCNotificationsEndpointConnection : NSObject<FCCoreConfigurationObserving>

@property (retain, nonatomic) FCEndpointConnection *endpointConnection;
@property (retain, nonatomic) NSObject<FCCoreConfigurationManager> *configurationManager;
@property (retain, nonatomic) NSObject<FCBundleSubscriptionManagerType> *bundleSubscriptionManager;
@property (retain, nonatomic) FCAsyncSerialQueue *serialQueue;
@property (copy, nonatomic) NSString *deviceType;
@property (copy, nonatomic) NSString *deviceOSVersion;
@property (retain, nonatomic) FCFileCoordinatedNotificationDropbox *fileCoordinatedNotificationDropbox;
@property (retain, nonatomic) NSURL *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfigurationManager:(id)manager bundleSubscriptionManager:(id)manager;
- (id)initWithEndpointConnection:(id)connection configurationManager:(id)manager bundleSubscriptionManager:(id)manager;
- (id)initWithBaseURLString:(id)urlstring;
- (void)registerDeviceWithUserID:(id)id deviceToken:(id)token storefrontID:(id)id deviceDigestMode:(int)mode callbackQueue:(id)queue completion:(id /* block */)completion;
- (void)unregisterDeviceWithUserID:(id)id deviceToken:(id)token storefrontID:(id)id deviceDigestMode:(int)mode callbackQueue:(id)queue completion:(id /* block */)completion;
- (void)subscribeNotificationsForChannelIDs:(id)ids paidChannelIDs:(id)ids userID:(id)id deviceToken:(id)token storefrontID:(id)id deviceDigestMode:(int)mode callbackQueue:(id)queue completion:(id /* block */)completion;
- (void)unsubscribeNotificationsForChannelIDs:(id)ids userID:(id)id deviceToken:(id)token storefrontID:(id)id deviceDigestMode:(int)mode callbackQueue:(id)queue completion:(id /* block */)completion;
- (void)refreshNotificationsForChannelIDs:(id)ids paidChannelIDs:(id)ids userID:(id)id deviceToken:(id)token storefrontID:(id)id deviceDigestMode:(int)mode callbackQueue:(id)queue completion:(id /* block */)completion;
- (void)subscribeNotificationsForTopicIDs:(id)ids withTopicGroupingID:(id)id fromChannelID:(id)id userID:(id)id deviceToken:(id)token storefrontID:(id)id deviceDigestMode:(int)mode callbackQueue:(id)queue completion:(id /* block */)completion;
- (void)unsubscribeNotificationsForTopicIDs:(id)ids withTopicGroupingID:(id)id fromChannelID:(id)id userID:(id)id deviceToken:(id)token storefrontID:(id)id deviceDigestMode:(int)mode callbackQueue:(id)queue completion:(id /* block */)completion;
- (void)refreshNotificationsForTopicIDs:(id)ids withTopicGroupingID:(id)id fromChannelID:(id)id userID:(id)id deviceToken:(id)token storefrontID:(id)id deviceDigestMode:(int)mode callbackQueue:(id)queue completion:(id /* block */)completion;
- (void)modifyMarketingSubscriptionWithType:(int)type action:(int)action dsid:(id)dsid callbackQueue:(id)queue completion:(id /* block */)completion;
- (id)_marketingSubscriptionRequestWithType:(int)type action:(int)action dsid:(id)dsid;
- (void)_sendNotificationsSubscriptionRequest:(id)request pathComponent:(id)component callbackQueue:(id)queue completion:(id /* block */)completion;
- (id)_pushNotifySubscriptionRequestWithChannelIDs:(id)ids paidChannelIDs:(id)ids userID:(id)id deviceToken:(id)token storefrontID:(id)id deviceDigestMode:(int)mode;
- (id)_pushNotifySubscriptionRequestWithTopicIDs:(id)ids fromChannelID:(id)id withTopicGroupingID:(id)id userID:(id)id deviceToken:(id)token storefrontID:(id)id deviceDigestMode:(int)mode;
- (id)_deviceInfoWithDeviceToken:(id)token deviceDigestMode:(int)mode;
- (id)_notificationEntitiesWithChannelIDs:(id)ids isPaid:(BOOL)paid paidBundleSubscriptionStatus:(unsigned long long)status editorialChannelID:(id)id;
- (id)_notificationEntityWithChannelIDs:(id)ids isPaid:(BOOL)paid paidBundleSubscriptionStatus:(unsigned long long)status notificationType:(int)type;
- (id)_notificationEntityForTopicRequestFromChannelID:(id)id;
- (int)_pbNotificationEntityPaidBundleSubscriptionStatusFromSubscriptionState:(unsigned long long)state;
- (void)_updateNotificationDropboxDataWithBaseURL:(id)url notificationUserID:(id)id deviceToken:(id)token storefrontID:(id)id deviceDigestMode:(int)mode;
- (id)_notificationDataInDropbox;
- (void)updateBaseURL:(id)url;
- (void)configurationManager:(id)manager configurationDidChange:(id)change;
@end

#endif /* FCNotificationsEndpointConnection_h */

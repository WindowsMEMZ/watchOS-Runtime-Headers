//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef MSASConnection_h
#define MSASConnection_h
@import Foundation;

#include "XPCNSClientConnection.h"
#include "XPCNSClientConnectionDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MSASConnection : NSObject<XPCNSClientConnectionDelegate>

@property (retain, nonatomic) XPCNSClientConnection *connection;
@property (retain, nonatomic) NSMutableDictionary *foregroundPingTimerContextByPersonID;
@property (retain, nonatomic) NSMutableDictionary *focusAlbumTimerByPersonID;
@property (retain, nonatomic) NSMutableDictionary *focusAlbumGUIDByPersonID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSMutableDictionary *serverSideConfigurationDictionaryByPersonID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedConnection;

/* instance methods */
- (id)init;
- (void)_sendMessageReliably:(id)reliably data:(id)data successHandler:(id /* block */)handler failureHandler:(id /* block */)handler;
- (id)_communicationFailureError;
- (void)_sendMessageReliably:(id)reliably;
- (id)_cloneArray:(id)array;
- (void)nextActivityDateHandler:(id /* block */)handler;
- (void)isInRetryStateHandler:(id /* block */)handler;
- (void)retryOutstandingActivities;
- (void)retryOutstandingActivitiesForPersonID:(id)id;
- (void)cancelActivitiesForPersonID:(id)id;
- (void)handlePushNotificationForPersonID:(id)id;
- (void)activityIsThrottledByLackOfDiskSpacePersonID:(id)id completionBlock:(id /* block */)block;
- (void)timerPingQueueSendSetUIForeground:(BOOL)uiforeground personID:(id)id;
- (void)pingForeground;
- (void)timerPingQueueForegroundPingTimerExpiredContext:(id)context personID:(id)id;
- (void)setIsUIForeground:(BOOL)uiforeground forPersonID:(id)id;
- (void)setFocusAlbum:(id)album forPersonID:(id)id;
- (void)setFocusAlbumGUID:(id)guid forPersonID:(id)id;
- (void)setFocusAssetCollectionGUID:(id)guid forPersonID:(id)id;
- (void)albumGUIDsForPersonID:(id)id completionBlock:(id /* block */)block;
- (void)albumWithGUID:(id)guid personID:(id)id completionBlock:(id /* block */)block;
- (void)accessControlGUIDsForAlbumWithGUID:(id)guid personID:(id)id completionBlock:(id /* block */)block;
- (void)accessControlWithGUID:(id)guid personID:(id)id completionBlock:(id /* block */)block;
- (void)invitationGUIDsForPersonID:(id)id completionBlock:(id /* block */)block;
- (void)invitationWithGUID:(id)guid personID:(id)id completionBlock:(id /* block */)block;
- (void)assetCollectionGUIDsInAlbumWithGUID:(id)guid personID:(id)id completionBlock:(id /* block */)block;
- (void)assetCollectionWithGUID:(id)guid personID:(id)id completionBlock:(id /* block */)block;
- (void)videoURLForAssetCollectionWithGUID:(id)guid personID:(id)id completionBlock:(id /* block */)block;
- (void)videoURLsForAssetCollectionWithGUID:(id)guid forMediaAssetType:(unsigned long long)type personID:(id)id completionBlock:(id /* block */)block;
- (void)isAssetCollectionWithGUID:(id)guid markedAsUnviewedPersonID:(id)id completionBlock:(id /* block */)block;
- (void)commentGUIDsForAssetCollectionWithGUID:(id)guid personID:(id)id completionBlock:(id /* block */)block;
- (void)commentWithGUID:(id)guid personID:(id)id completionBlock:(id /* block */)block;
- (void)serverSideConfigurationDictionaryForPersonID:(id)id completionBlock:(id /* block */)block;
- (void)refreshResetSync:(BOOL)sync personID:(id)id;
- (void)refreshResetSync:(BOOL)sync personID:(id)id info:(id)info;
- (void)refreshContentOfAlbumWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)id;
- (void)refreshContentOfAlbumWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)id info:(id)info;
- (void)refreshAccessControlListForAlbumWithGUID:(id)guid personID:(id)id;
- (void)refreshAccessControlListForAlbumWithGUID:(id)guid personID:(id)id info:(id)info;
- (void)refreshCommentsForAssetCollectionWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)id;
- (void)refreshCommentsForAssetCollectionWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)id info:(id)info;
- (void)addAlbum:(id)album personID:(id)id;
- (void)addAlbum:(id)album personID:(id)id info:(id)info;
- (void)modifyAlbumMetadata:(id)metadata personID:(id)id;
- (void)modifyAlbumMetadata:(id)metadata personID:(id)id info:(id)info;
- (void)deleteAlbumWithGUID:(id)guid personID:(id)id;
- (void)deleteAlbumWithGUID:(id)guid personID:(id)id info:(id)info;
- (void)markAlbumGUIDAsViewed:(id)viewed personID:(id)id;
- (void)markAlbumGUIDAsViewed:(id)viewed personID:(id)id info:(id)info;
- (void)markAlbumGUIDAsViewed:(id)viewed personID:(id)id moveLastViewedAssetCollectionMarker:(BOOL)marker info:(id)info;
- (void)setPublicAccessEnabled:(BOOL)enabled forAlbumWithGUID:(id)guid personID:(id)id completionBlock:(id /* block */)block;
- (void)setPublicAccessEnabled:(BOOL)enabled forAlbumWithGUID:(id)guid personID:(id)id info:(id)info completionBlock:(id /* block */)block;
- (void)setMultipleContributorsEnabled:(BOOL)enabled forAlbumWithGUID:(id)guid personID:(id)id completionBlock:(id /* block */)block;
- (void)setMultipleContributorsEnabled:(BOOL)enabled forAlbumWithGUID:(id)guid personID:(id)id info:(id)info completionBlock:(id /* block */)block;
- (void)subscribeToAlbumWithGUID:(id)guid personID:(id)id;
- (void)subscribeToAlbumWithGUID:(id)guid personID:(id)id info:(id)info;
- (void)unsubscribeFromAlbumWithGUID:(id)guid personID:(id)id;
- (void)unsubscribeFromAlbumWithGUID:(id)guid personID:(id)id info:(id)info;
- (void)markAsSpamInvitationWithToken:(id)token personID:(id)id completionBlock:(id /* block */)block;
- (void)markAsSpamInvitationWithGUID:(id)guid personID:(id)id completionBlock:(id /* block */)block;
- (void)markAsSpamAlbumWithGUID:(id)guid personID:(id)id completionBlock:(id /* block */)block;
- (void)acceptInvitationWithToken:(id)token personID:(id)id completionBlock:(id /* block */)block;
- (void)acceptInvitationWithToken:(id)token personID:(id)id info:(id)info completionBlock:(id /* block */)block;
- (void)acceptInvitationWithGUID:(id)guid personID:(id)id;
- (void)acceptInvitationWithGUID:(id)guid personID:(id)id info:(id)info;
- (void)rejectInvitationWithGUID:(id)guid personID:(id)id;
- (void)rejectInvitationWithGUID:(id)guid personID:(id)id info:(id)info;
- (void)addAccessControlEntries:(id)entries toAlbumWithGUID:(id)guid personID:(id)id;
- (void)addAccessControlEntries:(id)entries toAlbumWithGUID:(id)guid personID:(id)id info:(id)info;
- (void)removeAccessControlEntryWithGUID:(id)guid personID:(id)id;
- (void)removeAccessControlEntryWithGUID:(id)guid personID:(id)id info:(id)info;
- (void)addAssetCollections:(id)collections toAlbumWithGUID:(id)guid personID:(id)id;
- (void)addAssetCollections:(id)collections toAlbumWithGUID:(id)guid personID:(id)id info:(id)info;
- (void)deleteAssetCollectionWithGUID:(id)guid personID:(id)id;
- (void)deleteAssetCollectionWithGUID:(id)guid personID:(id)id info:(id)info;
- (void)deleteAssetCollectionsWithGUIDs:(id)guids personID:(id)id;
- (void)markCommentsForAssetCollectionWithGUID:(id)guid asViewedWithLastViewedDate:(id)date personID:(id)id;
- (void)markCommentsForAssetCollectionWithGUID:(id)guid asViewedWithLastViewedDate:(id)date personID:(id)id info:(id)info;
- (void)addComments:(id)comments toAssetCollectionWithGUID:(id)guid personID:(id)id;
- (void)addComments:(id)comments toAssetCollectionWithGUID:(id)guid personID:(id)id info:(id)info;
- (void)deleteCommentWithGUID:(id)guid personID:(id)id;
- (void)deleteCommentWithGUID:(id)guid personID:(id)id info:(id)info;
- (void)forgetEverythingAboutPersonID:(id)id;
- (void)retrieveAssets:(id)assets inAlbumWithGUID:(id)guid personID:(id)id;
- (void)retrieveAssetsFromAssetCollectionsWithGUIDs:(id)guids assetTypeFlags:(int)flags personID:(id)id;
- (void)XPCNSClientConnection:(id)connection didReceiveRequest:(id)request;
@end

#endif /* MSASConnection_h */

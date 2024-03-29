//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMExtensionNotificationManager_h
#define IMExtensionNotificationManager_h
@import Foundation;

@class BOOL *, NSMutableArray;

@interface IMExtensionNotificationManager : NSObject

@property (retain, nonatomic) NSMutableArray *notificationsContext;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)populateUserInfoForNotificationContent:(id)content messageBalloonBundleID:(id)id payloadData:(id)data chatIdentifier:(id)identifier isUrgentMessageTrigger:(BOOL *)trigger shouldSuppressNotification:(BOOL *)notification;
- (id)notificationCategories;
- (BOOL)canPopulateUserInfoForMessageBalloonBundleID:(id)id;
- (BOOL)shouldRetractedMessageForBalloonBundleID:(id)id;
@end

#endif /* IMExtensionNotificationManager_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1502.1.1.3.0
//
#ifndef CALNNotificationMapper_h
#define CALNNotificationMapper_h
@import Foundation;

@interface CALNNotificationMapper : NSObject
/* class methods */
+ (id)notificationRequestFromNotificationRecord:(id)record;
+ (id)notificationRecordFromNotificationRequest:(id)request;
+ (id)notificationFromNotificationRecord:(id)record;
+ (id)notificationRecordsFromNotifications:(id)notifications;
@end

#endif /* CALNNotificationMapper_h */

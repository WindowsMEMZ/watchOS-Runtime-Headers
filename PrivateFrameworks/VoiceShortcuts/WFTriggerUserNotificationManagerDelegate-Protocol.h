//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFTriggerUserNotificationManagerDelegate_Protocol_h
#define WFTriggerUserNotificationManagerDelegate_Protocol_h
@import Foundation;

@protocol WFTriggerUserNotificationManagerDelegate <NSObject>
/* instance methods */
- (void)notificationManager:(id)manager receivedConfirmationToRunTriggerWithIdentifier:(id)identifier pendingTriggerEventIDs:(id)ids;
- (void)notificationManager:(id)manager didDismissTriggerWithIdentifier:(id)identifier pendingTriggerEventIDs:(id)ids;
- (void)notificationManager:(id)manager didFailToPostNotificationPromptWithTriggerIdentifier:(id)identifier pendingTriggerEventIDs:(id)ids;
- (void)notificationManager:(id)manager didRequestDisablementOfTriggersWithIdentifiers:(id)identifiers;
@end

#endif /* WFTriggerUserNotificationManagerDelegate_Protocol_h */

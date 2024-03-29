//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1502.1.1.3.0
//
#ifndef CALNNotificationDataSourceUtils_h
#define CALNNotificationDataSourceUtils_h
@import Foundation;

@interface CALNNotificationDataSourceUtils : NSObject
/* class methods */
+ (id)objectIDWithSourceClientIdentifier:(id)identifier;
+ (id)sourceClientIdentifierForNotification:(id)notification;
+ (id)notificationReferenceOfType:(int)type withSourceClientIdentifier:(id)identifier inEventStore:(id)store withNotificationReferenceProvider:(id)provider;
+ (id)eventWithSourceClientIdentifier:(id)identifier inEventStore:(id)store;
+ (id)calendarWithSourceClientIdentifier:(id)identifier inEventStore:(id)store;
+ (void)respondToSharedCalendarInvitationWithSourceClientIdentifier:(id)identifier inEventStore:(id)store withDataAccessExpressConnection:(id)connection accept:(BOOL)accept;
+ (void)reportSharedCalendarInvitationAsJunkWithSourceClientIdentifier:(id)identifier inEventStore:(id)store;
+ (void)hideCalendarFromNotificationCenter:(id)center inEventStore:(id)store;
+ (void)clearSharedCalendarInvitationResponseWithSourceClientIdentifier:(id)identifier inEventStore:(id)store;
@end

#endif /* CALNNotificationDataSourceUtils_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1870.2.1.0.0
//
#ifndef CADNotificationMonitorInterface_Protocol_h
#define CADNotificationMonitorInterface_Protocol_h
@import Foundation;

@protocol CADNotificationMonitorInterface 
/* instance methods */
- (void)CADDatabaseGetSharedCalendarInvitationsWithReply:(id /* block */)reply;
- (void)CADCalendarSetClearedFromNotificationCenter:(id)center error:(id /* block */)error;
- (void)CADDatabaseGetResourceChanges:(id /* block */)changes;
- (void)CADDatabaseGetInviteReplyNotifications:(id /* block */)notifications;
- (void)CADDatabaseGetEventNotificationItemsAfterDate:(id)date excludingUncheckedCalendars:(BOOL)calendars filteredByShowsNotificationsFlag:(BOOL)flag reply:(id /* block */)reply;
- (void)CADDatabaseGetNotificationCountForSourceWithExternalIdentifier:(id)identifier excludingDelegateSources:(BOOL)sources filteredByShowsNotificationsFlag:(BOOL)flag expanded:(BOOL)expanded reply:(id /* block */)reply;
- (void)CADDatabaseGetInboxRepliedSectionItems:(id /* block */)items;
- (void)CADResourceChange:(id)change setAlertedWithError:(id /* block */)error;
- (void)CADEventSetInvitationStatus:(int)status forEvents:(id)events error:(id /* block */)error;
@end

#endif /* CADNotificationMonitorInterface_Protocol_h */

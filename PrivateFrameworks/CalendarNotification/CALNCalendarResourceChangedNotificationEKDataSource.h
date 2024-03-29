//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1502.1.1.3.0
//
#ifndef CALNCalendarResourceChangedNotificationEKDataSource_h
#define CALNCalendarResourceChangedNotificationEKDataSource_h
@import Foundation;

#include "CALNCalendarResourceChangedNotificationDataSource-Protocol.h"
#include "CALNEKCalendarNotificationReferenceProvider-Protocol.h"
#include "CALNInboxNotificationProvider-Protocol.h"

@class NSString;
@protocol EKEventStoreProvider, EKNotificationPreferences;

@interface CALNCalendarResourceChangedNotificationEKDataSource : NSObject<CALNCalendarResourceChangedNotificationDataSource>

@property (readonly, nonatomic) NSObject<EKEventStoreProvider> *eventStoreProvider;
@property (readonly, nonatomic) NSObject<CALNInboxNotificationProvider> *inboxNotificationProvider;
@property (readonly, nonatomic) NSObject<CALNEKCalendarNotificationReferenceProvider> *notificationReferenceProvider;
@property (readonly, nonatomic) NSObject<EKNotificationPreferences> *preferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEventStoreProvider:(id)provider inboxNotificationProvider:(id)provider notificationReferenceProvider:(id)provider preferences:(id)preferences;
- (id)fetchCalendarResourceChangedNotifications;
- (id)fetchCalendarResourceChangedNotificationSourceClientIdentifiers:(id)identifiers;
- (id)fetchCalendarResourceChangedNotificationWithSourceClientIdentifier:(id)identifier;
- (void)clearCalendarResourceChangedNotificationWithSourceClientIdentifier:(id)identifier;
- (id)_notificationInfoFromNotificationReference:(id)reference;
- (id)_notificationInfoFromNotification:(id)notification;
@end

#endif /* CALNCalendarResourceChangedNotificationEKDataSource_h */

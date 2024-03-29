//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1502.1.1.3.0
//
#ifndef CALNSuggestedEventNotificationEKDataSource_h
#define CALNSuggestedEventNotificationEKDataSource_h
@import Foundation;

#include "CALNEKCalendarNotificationReferenceProvider-Protocol.h"
#include "CALNInboxNotificationProvider-Protocol.h"
#include "CALNSuggestedEventNotificationDataSource-Protocol.h"

@class NSString;
@protocol EKEventStoreProvider;

@interface CALNSuggestedEventNotificationEKDataSource : NSObject<CALNSuggestedEventNotificationDataSource>

@property (readonly, nonatomic) NSObject<EKEventStoreProvider> *eventStoreProvider;
@property (readonly, nonatomic) NSObject<CALNInboxNotificationProvider> *inboxNotificationProvider;
@property (readonly, nonatomic) NSObject<CALNEKCalendarNotificationReferenceProvider> *notificationReferenceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEventStoreProvider:(id)provider inboxNotificationProvider:(id)provider notificationReferenceProvider:(id)provider;
- (id)fetchSuggestedEventNotifications;
- (id)fetchSuggestedEventNotificationObjectIDs;
- (id)fetchSuggestedEventNotificationsWithSourceClientIdentifier:(id)identifier;
- (id)fetchSuggestedEventNotificationWithObjectID:(id)id;
- (void)confirmSuggestedEventWithSourceClientIdentifier:(id)identifier;
- (void)ignoreSuggestedEventWithSourceClientIdentifier:(id)identifier;
- (void)deleteCanceledSuggestedEventWithSourceClientIdentifier:(id)identifier;
- (void)clearSuggestedEventNotificationWithSourceClientIdentifier:(id)identifier;
- (void)_clearSuggestedEventNotificationWithObjectID:(id)id;
- (void)_acknowledgeSuggestedEventWithSourceClientIdentifier:(id)identifier accept:(BOOL)accept;
- (id)_eventForSourceClientIdentifier:(id)identifier eventStore:(id)store;
- (id)_notificationInfoFromNotification:(id)notification inEventStore:(id)store;
@end

#endif /* CALNSuggestedEventNotificationEKDataSource_h */

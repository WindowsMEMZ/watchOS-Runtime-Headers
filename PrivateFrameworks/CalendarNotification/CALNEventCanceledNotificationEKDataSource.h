//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1502.1.1.3.0
//
#ifndef CALNEventCanceledNotificationEKDataSource_h
#define CALNEventCanceledNotificationEKDataSource_h
@import Foundation;

#include "CALNDataSourceEventRepresentationProvider-Protocol.h"
#include "CALNEKCalendarNotificationReferenceProvider-Protocol.h"
#include "CALNEventCanceledNotificationDataSource-Protocol.h"
#include "CALNInboxNotificationProvider-Protocol.h"
#include "CALNRemoteMutator-Protocol.h"

@class NSString;
@protocol EKEventStoreProvider, EKNotificationPreferences;

@interface CALNEventCanceledNotificationEKDataSource : NSObject<CALNEventCanceledNotificationDataSource>

@property (readonly, nonatomic) NSObject<EKEventStoreProvider> *eventStoreProvider;
@property (readonly, nonatomic) NSObject<CALNInboxNotificationProvider> *inboxNotificationProvider;
@property (readonly, nonatomic) NSObject<CALNEKCalendarNotificationReferenceProvider> *notificationReferenceProvider;
@property (readonly, nonatomic) NSObject<CALNRemoteMutator> *remoteMutator;
@property (readonly, nonatomic) NSObject<CALNDataSourceEventRepresentationProvider> *dataSourceEventRepresentationProvider;
@property (readonly, nonatomic) NSObject<EKNotificationPreferences> *preferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEventStoreProvider:(id)provider inboxNotificationProvider:(id)provider notificationReferenceProvider:(id)provider remoteMutator:(id)mutator dataSourceEventRepresentationProvider:(id)provider preferences:(id)preferences;
- (id)fetchEventCanceledNotifications;
- (id)fetchEventCanceledNotificationSourceClientIdentifiers:(id)identifiers;
- (id)fetchEventCanceledNotificationWithSourceClientIdentifier:(id)identifier;
- (void)clearCanceledEventNotificationWithSourceClientIdentifier:(id)identifier;
- (void)deleteCanceledEventWithSourceClientIdentifier:(id)identifier;
- (id)_notificationInfoFromNotification:(id)notification inEventStore:(id)store;
@end

#endif /* CALNEventCanceledNotificationEKDataSource_h */

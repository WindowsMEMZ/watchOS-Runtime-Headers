//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1502.1.1.3.0
//
#ifndef CALNCalendarResourceChangedNotificationSource_h
#define CALNCalendarResourceChangedNotificationSource_h
@import Foundation;

#include "CALNCalendarIconIdentifierProvider-Protocol.h"
#include "CALNCalendarResourceChangedNotificationDataSource-Protocol.h"
#include "CALNNotificationManager-Protocol.h"
#include "CALNNotificationSource-Protocol.h"
#include "CALNSourceEventRepresentationProvider-Protocol.h"

@class NSArray, NSString;
@protocol CalDateProvider;

@interface CALNCalendarResourceChangedNotificationSource : NSObject<CALNNotificationSource>

@property (readonly, nonatomic) NSObject<CALNCalendarResourceChangedNotificationDataSource> *dataSource;
@property (readonly, weak, nonatomic) NSObject<CALNNotificationManager> *notificationManager;
@property (readonly, nonatomic) NSObject<CALNCalendarIconIdentifierProvider> *iconIdentifierProvider;
@property (readonly, nonatomic) NSObject<CALNSourceEventRepresentationProvider> *sourceEventRepresentationProvider;
@property (readonly, nonatomic) NSObject<CalDateProvider> *dateProvider;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) NSArray *categories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDataSource:(id)source notificationManager:(id)manager iconIdentifierProvider:(id)provider sourceEventRepresentationProvider:(id)provider dateProvider:(id)provider;
- (void)refreshNotifications:(id)notifications;
- (id)contentForNotificationWithSourceClientIdentifier:(id)identifier;
- (id)contentForNotificationWithInfo:(id)info;
- (void)didReceiveResponse:(id)response;
@end

#endif /* CALNCalendarResourceChangedNotificationSource_h */

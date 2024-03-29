//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 912.3.3.0.0
//
#ifndef NTSFiringAlertManager_h
#define NTSFiringAlertManager_h
@import Foundation;

#include "NTSAlertHandler-Protocol.h"
#include "NTSAlertable-Protocol.h"

@class NSMutableOrderedSet, NSSet, NSString;

@interface NTSFiringAlertManager : NSObject<NTSAlertHandler>

@property (retain, nonatomic) Class alertableClass;
@property (copy, nonatomic) NSString *changeNotificationName;
@property (retain, nonatomic) NSMutableOrderedSet *alerts;
@property (retain, nonatomic) NSSet *supportedNotificationCategories;
@property (readonly, nonatomic) long long numFiringAlerts;
@property (readonly, nonatomic) NSObject<NTSAlertable> *nextFiringAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedAlarmManager;
+ (id)sharedTimerManager;

/* instance methods */
- (id)_initWithAlertableClass:(Class)class changeNotificationName:(id)name removalNotificationName:(id)name supportedNotificationCategories:(id)categories;
- (id)alertProviderDelegate;
- (void)setAlertProviderDelegate:(id)delegate;
- (void)dealloc;
- (void)alertsRemoved:(id)removed;
- (void)removeAlertWithNotificationID:(id)id;
- (id)_alertWithNotificationID:(id)id;
- (void)addAlert:(id)alert;
- (void)_postChangeNotification;
- (void)_removeAlert:(id)alert;
- (id)_findAlertForAlertable:(id)alertable;
- (void)_clearNotification:(id)notification alertProvider:(id)provider;
- (BOOL)shouldShowAlert:(id)alert;
- (void)snoozeFiringAlert:(id)alert;
- (void)repeatFiringAlert:(id)alert;
- (void)dismissFiringAlert:(id)alert;
- (void)removeFiringAlert:(id)alert;
- (void)clearNotificationForFiringAlert:(id)alert withNotificationActionBlock:(id /* block */)block;
- (id)firingAlerts;
- (void)_removeOrphanedLocalNotificationNotification:(id)notification alertProvider:(id)provider;
- (BOOL)_isOrphanedLocalNotificationNotification:(id)notification;
- (BOOL)isNotificationForUs:(id)us;
- (BOOL)alertProvider:(id)provider wantsAlertForNotification:(id)notification;
- (void)alertProvider:(id)provider addNotification:(id)notification;
- (void)alertProvider:(id)provider addNotification:(id)notification replaceNotification:(id)notification;
- (void)alertProvider:(id)provider modifyNotification:(id)notification;
- (void)alertProvider:(id)provider removeNotification:(id)notification;
- (void)noteNotificationsInvalidated;
@end

#endif /* NTSFiringAlertManager_h */

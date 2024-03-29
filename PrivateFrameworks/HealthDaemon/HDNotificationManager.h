//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDNotificationManager_h
#define HDNotificationManager_h
@import Foundation;

#include "HDDiagnosticObject-Protocol.h"
#include "HDProfile.h"

@class HKObserverSet, NSDate, NSString, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

@interface HDNotificationManager : NSObject<HDDiagnosticObject> {
  /* instance variables */
  HDProfile *_profile;
  long long _bundle;
  HKObserverSet *_observers;
  NSObject<OS_dispatch_queue> *_clientQueue;
  NSObject<OS_dispatch_queue> *_resourceQueue;
  NSDate *_lastNotificationDate;
}

@property (readonly, nonatomic) UNUserNotificationCenter *userNotificationCenter;
@property (readonly, nonatomic) BOOL areHealthNotificationsAuthorized;
@property (readonly, nonatomic) BOOL areHealthCriticalAlertsAuthorized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProfile:(id)profile bundle:(long long)bundle;
- (void)dealloc;
- (void)badgeForDomain:(long long)domain completion:(id /* block */)completion;
- (BOOL)incrementBadgeForDomain:(long long)domain count:(long long)count error:(id *)error;
- (void)setBadge:(id)badge forDomain:(long long)domain completion:(id /* block */)completion;
- (void)postNotificationWithIdentifier:(id)identifier content:(id)content trigger:(id)trigger completion:(id /* block */)completion;
- (void)postNotificationWithRequest:(id)request completion:(id /* block */)completion;
- (void)postNotificationWithTitle:(id)title body:(id)body categoryIdentifier:(id)identifier subtitle:(id)subtitle domain:(long long)domain accessoryImageName:(id)name header:(id)header completion:(id /* block */)completion;
- (void)postNotificationWithTitle:(id)title body:(id)body categoryIdentifier:(id)identifier subtitle:(id)subtitle domain:(long long)domain url:(id)url accessoryImageName:(id)name header:(id)header completion:(id /* block */)completion;
- (void)postCompanionUserNotificationOfType:(long long)type completion:(id /* block */)completion;
- (void)receivedCompanionUserNotificationRequest:(id)request completion:(id /* block */)completion;
- (void)removePendingNotificationsWithIdentifiers:(id)identifiers;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)identifiers;
- (void)removeDeliveredNotificationsWithCategoryIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)addNotificationObserver:(id)observer;
- (void)removeNotificationObserver:(id)observer;
- (id)_badgeForDomain:(long long)domain error:(id *)error;
- (id)_aggregateBadge;
- (id)_resourceQueue_badgeForDomain:(long long)domain error:(id *)error;
- (id)diagnosticDescription;
@end

#endif /* HDNotificationManager_h */

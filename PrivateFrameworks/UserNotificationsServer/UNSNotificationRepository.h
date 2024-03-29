//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 491.7.0.0.0
//
#ifndef UNSNotificationRepository_h
#define UNSNotificationRepository_h
@import Foundation;

#include "UNCNotificationRepository-Protocol.h"
#include "UNSKeyedDataStoreRepository.h"
#include "UNSKeyedObservable.h"
#include "UNSNotificationCategoryRepository.h"
#include "UNSNotificationRepositoryDelegate-Protocol.h"
#include "UNSNotificationRepositorySettingsProvider-Protocol.h"

@class NSMutableSet, NSString, UNCBundleLibrarian;
@protocol OS_dispatch_queue;

@interface UNSNotificationRepository : NSObject<UNCNotificationRepository> {
  /* instance variables */
  UNSKeyedDataStoreRepository *_repository;
  UNSKeyedObservable *_observable;
  NSMutableSet *_unlimitedBodyBundleIdentifiers;
  NSObject<OS_dispatch_queue> *_queue;
  UNCBundleLibrarian *_librarian;
  UNSNotificationCategoryRepository *_categoryRepository;
}

@property (weak, nonatomic) NSObject<UNSNotificationRepositorySettingsProvider> *settingsProvider;
@property (nonatomic) NSObject<UNSNotificationRepositoryDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (long long)_maxObjectsPerKey;
- (id)initWithDirectory:(id)directory librarian:(id)librarian repositoryProtectionStrategy:(id)strategy categoryRepository:(id)repository;
- (id)initWithDataStoreRepository:(id)repository observable:(id)observable librarian:(id)librarian categoryRepository:(id)repository;
- (void)addObserver:(id)observer forBundleIdentifier:(id)identifier;
- (void)removeObserver:(id)observer forBundleIdentifier:(id)identifier;
- (id)notificationRecordsForBundleIdentifier:(id)identifier;
- (id)notificationRecordForForIdentifier:(id)identifier bundleIdentifier:(id)identifier;
- (void)saveNotificationRecord:(id)record shouldRepost:(BOOL)repost forBundleIdentifier:(id)identifier withCompletionHandler:(id /* block */)handler;
- (void)saveNotificationRequest:(id)request shouldRepost:(BOOL)repost withMessage:(id)message forBundleIdentifier:(id)identifier;
- (void)removeAllNotificationRecordsForBundleIdentifier:(id)identifier;
- (void)removeInvalidNotificationRecordsForBundleIdentifier:(id)identifier;
- (void)removeNotificationRecordsPassingTest:(id /* block */)test forBundleIdentifier:(id)identifier;
- (void)removeStoreForBundleIdentifier:(id)identifier;
- (void)removeNotificationRepository;
- (id)allBundleIdentifiers;
- (void)performMigration;
- (void)performValidation;
- (void)contentProtectionStateChangedForFirstUnlock:(BOOL)unlock;
- (void)notificationSourcesDidInstall:(id)install;
- (void)notificationSourcesDidUninstall:(id)uninstall;
- (id)_notificationsForObjects:(id)objects;
- (id)_queue_notificationRecordsForBundleIdentifier:(id)identifier;
- (id)_queue_notificationRecordForForIdentifier:(id)identifier forBundleIdentifier:(id)identifier;
- (void)_queue_notifyObserversNotificationsDidAddNotifications:(id)notifications replaceNotifications:(id)notifications replacementNotifications:(id)notifications removedNotifications:(id)notifications shouldRepost:(BOOL)repost shouldSyncForRemoval:(BOOL)removal forBundleIdentifier:(id)identifier;
- (void)_queue_saveNotificationRecord:(id)record shouldRepost:(BOOL)repost withOptions:(unsigned long long)options forBundleIdentifier:(id)identifier;
- (void)_queue_removeAllNotificationRecordsForBundleIdentifier:(id)identifier;
- (void)_queue_removeInvalidNotificationRecordsForBundleIdentifier:(id)identifier;
- (void)_queue_removeNotificationRecordsPassingTest:(id /* block */)test forBundleIdentifier:(id)identifier;
- (id)badgeNumberForBundleIdentifier:(id)identifier;
- (void)setBadgeNumber:(id)number forBundleIdentifier:(id)identifier withCompletionHandler:(id /* block */)handler;
- (void)setBadgeCount:(long long)count forBundleIdentifier:(id)identifier withCompletionHandler:(id /* block */)handler;
- (void)setBadgeString:(id)string forBundleIdentifier:(id)identifier withCompletionHandler:(id /* block */)handler;
- (id)_queue_badgeNumberForBundleIdentifier:(id)identifier;
- (void)_queue_setBadgeNumber:(id)number forBundleIdentifier:(id)identifier withCompletionHandler:(id /* block */)handler;
- (void)_queue_setBadgeCount:(long long)count forBundleIdentifier:(id)identifier withCompletionHandler:(id /* block */)handler;
- (void)_queue_setBadgeString:(id)string forBundleIdentifier:(id)identifier withCompletionHandler:(id /* block */)handler;
- (void)_queue_setBadgeValue:(id)value forBundleIdentifier:(id)identifier withCompletionHandler:(id /* block */)handler;
- (void)_logNotification:(id)notification forBundleIdentifier:(id)identifier;
- (void)_queue_performMigration;
- (void)_queue_performMigrationForUserNotificationsStore;
- (void)_queue_triggerInvalidationForFirstUnlock;
- (void)_queue_performMigrationForPushStore;
- (void)_queue_performMigrationForPushStoreAtPath:(id)path;
- (void)_queue_performMigrationForBundleIdentifier:(id)identifier;
- (void)_queue_performValidation;
- (BOOL)_shouldPersistNotificationRecord:(id)record forBundleSettings:(id)settings perTopicSettings:(id)settings;
@end

#endif /* UNSNotificationRepository_h */

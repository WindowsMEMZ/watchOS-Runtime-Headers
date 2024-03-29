//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 491.7.0.0.0
//
#ifndef UNNotificationSettingsCenter_h
#define UNNotificationSettingsCenter_h
@import Foundation;

#include "UNUserNotificationSettingsServiceConnectionObserver-Protocol.h"

@class NSString;
@protocol UNNotificationSettingsCenterDelegate;

@interface UNNotificationSettingsCenter : NSObject<UNUserNotificationSettingsServiceConnectionObserver>

@property (weak, nonatomic) NSObject<UNNotificationSettingsCenterDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)currentNotificationSettingsCenter;

/* instance methods */
- (id)init;
- (id)_init;
- (void)dealloc;
- (id)notificationSourceWithIdentifier:(id)identifier;
- (id)notificationSourcesWithIdentifiers:(id)identifiers;
- (id)allNotificationSources;
- (void)authorizationWithOptions:(unsigned long long)options forNotificationSourceIdentifier:(id)identifier withCompletionHandler:(id /* block */)handler;
- (void)replaceNotificationSettings:(id)settings forNotificationSourceIdentifier:(id)identifier;
- (void)replaceNotificationTopicSettings:(id)settings forNotificationSourceIdentifier:(id)identifier topicIdentifier:(id)identifier;
- (id)notificationSystemSettings;
- (void)setNotificationSystemSettings:(id)settings;
- (void)resetScheduledDeliverySetting;
- (void)settingsServiceConnection:(id)connection didUpdateNotificationSourcesWithIdentifiers:(id)identifiers;
- (void)settingsServiceConnection:(id)connection didUpdateNotificationSystemSettings:(id)settings;
@end

#endif /* UNNotificationSettingsCenter_h */

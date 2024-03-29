//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1003.300.71.0.0
//
#ifndef IMUserNotificationCenter_h
#define IMUserNotificationCenter_h
@import Foundation;

@class NSMutableDictionary;

@interface IMUserNotificationCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *identifierToIMUserNotificationQueueMap;
@property (retain, nonatomic) NSMutableDictionary *identifierToListenerQueueMap;
@property (retain, nonatomic) NSMutableDictionary *identifierToBlockQueueMap;
@property (retain, nonatomic) NSMutableDictionary *identifierToRunLoopSourcesMap;
@property (retain, nonatomic) NSMutableDictionary *identifierToCFUserNotificationMap;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)_frontUserNotificationForIdentifier:(id)identifier;
- (id)_frontListenerForIdentifier:(id)identifier;
- (id /* block */)_frontBlockForIdentifier:(id)identifier;
- (id)_dequeueUserNotificationForIdentifier:(id)identifier;
- (id)_dequeueListenerForIdentifier:(id)identifier;
- (id /* block */)_dequeueBlockForIdentifier:(id)identifier;
- (void)_enqueueUserNotification:(id)notification forIdentifier:(id)identifier;
- (void)_enqueueListener:(id)listener forIdentifier:(id)identifier;
- (void)_enqueueBlock:(id /* block */)block forIdentifier:(id)identifier;
- (void)_cancelActiveUserNotificationForIdentifier:(id)identifier;
- (void)_displayNextUserNotificationForIdentifier:(id)identifier;
- (void)_handleUserNotification:(struct __CFUserNotification *)notification responseFlags:(unsigned long long)flags;
- (void)addUserNotification:(id)notification listener:(id)listener;
- (void)addUserNotification:(id)notification listener:(id)listener completionHandler:(id /* block */)handler;
- (unsigned long long)countForIdentifier:(id)identifier;
- (void)removeNotificationsForServiceIdentifier:(id)identifier;
- (void)removeListener:(id)listener;
- (void)removeAllListeners;
@end

#endif /* IMUserNotificationCenter_h */

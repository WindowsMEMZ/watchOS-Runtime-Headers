//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 491.7.0.0.0
//
#ifndef UNUserNotificationCenterDelegateConnectionListener_h
#define UNUserNotificationCenterDelegateConnectionListener_h
@import Foundation;

#include "NSXPCListenerDelegate-Protocol.h"
#include "UNUserNotificationCenterDelegateServiceProtocol-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface UNUserNotificationCenterDelegateConnectionListener : NSObject<NSXPCListenerDelegate, UNUserNotificationCenterDelegateServiceProtocol> {
  /* instance variables */
  NSMutableDictionary *_listenerByBundleIdentifier;
  NSMutableDictionary *_delegateByBundleIdentifier;
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_queue> *_callOutQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)setDelegate:(id)delegate forBundleIdentifier:(id)identifier;
- (void)didReceiveNotificationResponse:(id)response forBundleIdentifier:(id)identifier withCompletionHandler:(id /* block */)handler;
- (void)didChangeSettings:(id)settings forBundleIdentifier:(id)identifier;
- (void)didOpenApplicationForResponse:(id)response forBundleIdentifier:(id)identifier;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)_queue_setDelegate:(id)delegate forBundleIdentifier:(id)identifier;
- (void)_queue_ensureListenerForBundleIdentifier:(id)identifier;
- (void)_queue_invalidateListenerForBundleIdentifier:(id)identifier;
- (void)_queue_didReceiveNotificationResponse:(id)response forBundleIdentifier:(id)identifier withCompletionHandler:(id /* block */)handler;
- (void)_queue_didChangeSettings:(id)settings forBundleIdentifier:(id)identifier;
- (void)_queue_didOpenApplicationForResponse:(id)response forBundleIdentifier:(id)identifier;
@end

#endif /* UNUserNotificationCenterDelegateConnectionListener_h */

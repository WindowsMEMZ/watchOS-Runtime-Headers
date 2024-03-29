//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 83.0.0.0.0
//
#ifndef SACriticalNotification_h
#define SACriticalNotification_h
@import Foundation;

#include "SABundleManager.h"
#include "UNUserNotificationCenterDelegate-Protocol.h"

@class NSString, UNUserNotificationCenter;

@interface SACriticalNotification : NSObject<UNUserNotificationCenterDelegate> {
  /* instance variables */
  UNUserNotificationCenter *_center;
  SABundleManager *_bundleManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBundleManager:(id)manager;
- (void)sendNotificationWithCompletionHandler:(id /* block */)handler;
- (id)_createNotification;
- (void)userNotificationCenter:(id)center didReceiveNotificationResponse:(id)response withCompletionHandler:(id /* block */)handler;
@end

#endif /* SACriticalNotification_h */

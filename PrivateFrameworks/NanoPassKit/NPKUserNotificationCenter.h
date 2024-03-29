//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKUserNotificationCenter_h
#define NPKUserNotificationCenter_h
@import Foundation;

#include "UNUserNotificationCenterDelegatePrivate-Protocol.h"

@class NSString, UNUserNotificationCenter;

@interface NPKUserNotificationCenter : NSObject<UNUserNotificationCenterDelegatePrivate> {
  /* instance variables */
  UNUserNotificationCenter *_notificationCenter;
  long long _authorizationStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)initWithNotificationBundleIdentifier:(id)identifier;
- (void)requestAuthorizationIfNecessaryForPassesManager:(id)manager withCompletion:(id /* block */)completion;
- (void)requestAuthorizationWithCompletion:(id /* block */)completion;
- (void)fetchAuthorizationStatusWithCompletion:(id /* block */)completion;
- (void)setNotificationCategoryWithIdentifier:(id)identifier intentIdentifier:(id)identifier actions:(id)actions options:(unsigned long long)options;
- (void)addNotification:(id)notification completion:(id /* block */)completion;
- (void)userNotificationCenter:(id)center didChangeSettings:(id)settings;
- (void)_addNotificationWithNotificationIdentifier:(id)identifier title:(id)title body:(id)body categoryIdentifier:(id)identifier userInfo:(id)info wantsBadgedIcon:(BOOL)icon suppressed:(BOOL)suppressed completion:(id /* block */)completion;
- (id)_requestWithNotificationIdentifier:(id)identifier title:(id)title body:(id)body categoryIdentifier:(id)identifier userInfo:(id)info wantsBadgedIcon:(BOOL)icon suppressed:(BOOL)suppressed;
- (void)_requestNotificationAuthorizationWithPreconditionCheck:(id /* block */)check completion:(id /* block */)completion;
- (void)_requestNotificationAuthorizationWithOptions:(unsigned long long)options completion:(id /* block */)completion;
@end

#endif /* NPKUserNotificationCenter_h */

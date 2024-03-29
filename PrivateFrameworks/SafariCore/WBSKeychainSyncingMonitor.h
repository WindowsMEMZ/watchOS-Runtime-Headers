//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSKeychainSyncingMonitor_h
#define WBSKeychainSyncingMonitor_h
@import Foundation;

@class ACAccount, NSString, OTClique;
@protocol OS_dispatch_queue;

@interface WBSKeychainSyncingMonitor : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_internalQueue;
  NSObject<OS_dispatch_queue> *_keychainStatusFetchingQueue;
  NSObject<OS_dispatch_queue> *_synchronousGetterQueue;
  OTClique *_keychainClique;
  unsigned long long _cachedKeychainSyncSettingValue;
  ACAccount *_primaryAppleAccount;
  NSString *_primaryAppleAccountAltDSID;
}

@property (readonly, nonatomic) unsigned long long keychainSyncSettingValue;
@property (readonly, nonatomic) BOOL isKeychainSyncEnabled;
@property (readonly, nonatomic) BOOL canKeychainSyncBeEnabled;

/* class methods */
+ (id)sharedMonitor;

/* instance methods */
- (id)init;
- (void)_fetchKeychainSyncingStatus;
- (void)_updateAccountOnInternalQueue:(id)queue;
- (void)_updateKeychainClique;
- (void)_keychainSyncingStatusMayHaveChanged;
- (void)_primaryAppleAccountDidChange;
- (void)performTaskOnceKeychainSyncValueHasBeenFetchedOnQueue:(id)queue task:(id /* block */)task;
@end

#endif /* WBSKeychainSyncingMonitor_h */

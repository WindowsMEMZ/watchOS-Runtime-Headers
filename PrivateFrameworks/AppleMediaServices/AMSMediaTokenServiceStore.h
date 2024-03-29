//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSMediaTokenServiceStore_h
#define AMSMediaTokenServiceStore_h
@import Foundation;

#include "AMSMediaToken.h"
#include "AMSMediaTokenServiceKeychainStore.h"

@class NSString;

@interface AMSMediaTokenServiceStore : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int x0; } accessLock;
@property (retain, nonatomic) AMSMediaToken *memoryMediaToken;
@property (readonly, nonatomic) AMSMediaTokenServiceKeychainStore *keychainStore;
@property (readonly, nonatomic) NSString *notificationObject;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *keychainAccessGroup;
@property (readonly, nonatomic) BOOL usingAccessControlIdentifier;

/* class methods */
+ (BOOL)_hasAppleGroupEnabled;

/* instance methods */
- (id)initWithClientIdentifier:(id)identifier keychainAccessGroup:(id)group;
- (id)initWithClientIdentifier:(id)identifier keychainStore:(id)store;
- (id)initWithClientIdentifier:(id)identifier keychainAccessGroup:(id)group usingAccessControlIdentifier:(BOOL)identifier;
- (id)retrieveToken;
- (void)storeToken:(id)token;
- (void)deleteToken;
- (void)dealloc;
- (id)_keychainAccessGroup;
- (id)_mediaTokenFromUserDefaults;
- (void)_deleteMediaTokenFromUserDefaultsIfPresent;
- (id)_mediaTokenChangedNotificationName;
- (void)_mediaTokenChanged:(id)changed;
- (void)_setupKeychainNotifications;
- (void)_teardownKeychainNotifications;
@end

#endif /* AMSMediaTokenServiceStore_h */

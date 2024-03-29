//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICUserIdentityStore_h
#define ICUserIdentityStore_h
@import Foundation;

#include "ICDelegateAccountStore.h"
#include "ICDelegateAccountStoreOptions.h"
#include "ICLocalStoreAccountProperties.h"
#include "ICUserIdentityStoreBackend-Protocol.h"
#include "ICUserIdentityStoreBackendDelegate-Protocol.h"
#include "ICUserIdentityStoreCoding.h"
#include "ICValueHistory.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface ICUserIdentityStore : NSObject<ICUserIdentityStoreBackendDelegate, NSSecureCoding> {
  /* instance variables */
  ICValueHistory *_activeAccountHistory;
  ICValueHistory *_activeLockerAccountHistory;
  NSObject<ICUserIdentityStoreBackend> *_backend;
  ICUserIdentityStoreCoding *_codingHelper;
  ICDelegateAccountStore *_delegateAccountStore;
  ICDelegateAccountStoreOptions *_delegateAccountStoreOptions;
  unsigned long long _lastKnownActiveAccountTimestamp;
  unsigned long long _lastKnownActiveLockerAccountTimestamp;
  NSObject<OS_dispatch_queue> *_accessQueue;
  NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly, nonatomic) long long identityStoreStyle;
@property (readonly, nonatomic) NSObject<ICUserIdentityStoreBackend> *_unsafeBackend;
@property (readonly, nonatomic) ICLocalStoreAccountProperties *localStoreAccountProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)defaultIdentityStore;
+ (void)_claimSingleWriterStatus;
+ (id)nullIdentityStore;
+ (id)testingIdentityStoreWithDatabasePath:(id)path;
+ (id)testingIdentityStoreWithSingleWriterService:(id)service;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_initCommon;
- (id)_initWithStyle:(long long)style delegateAccountStoreOptions:(id)options;
- (void)dealloc;
- (void)addDelegationUUIDs:(id)uuids forUserIdentity:(id)identity completionHandler:(id /* block */)handler;
- (void)enumerateDelegateTokensUsingBlock:(id /* block */)block completionHandler:(id /* block */)handler;
- (void)enumerateDelegateTokensWithType:(long long)type usingBlock:(id /* block */)block completionHandler:(id /* block */)handler;
- (void)getDelegationUUIDsForUserIdentity:(id)identity completionHandler:(id /* block */)handler;
- (id)getPropertiesForActiveICloudAccountReturningError:(id *)error;
- (void)getPropertiesForUserIdentity:(id)identity completionHandler:(id /* block */)handler;
- (id)getPropertiesForUserIdentity:(id)identity error:(id *)error;
- (id)getVerificationContextForUserIdentity:(id)identity error:(id *)error;
- (void)insertPropertiesForUserIdentity:(id)identity usingBlock:(id /* block */)block;
- (BOOL)insertPropertiesForUserIdentity:(id)identity usingBlock:(id /* block */)block error:(id *)error;
- (void)insertPropertiesForUserIdentity:(id)identity usingBlock:(id /* block */)block completionHandler:(id /* block */)handler;
- (void)insertPropertiesForUserIdentity:(id)identity andPostAccountChangeNotification:(BOOL)notification usingBlock:(id /* block */)block completionHandler:(id /* block */)handler;
- (void)removeAllDelegateTokensWithCompletionHandler:(id /* block */)handler;
- (void)removeDelegateTokenForUserIdentity:(id)identity completionHandler:(id /* block */)handler;
- (void)removeDelegateTokensExpiringBeforeDate:(id)date completionHandler:(id /* block */)handler;
- (void)removeDelegationUUIDs:(id)uuids forUserIdentity:(id)identity completionHandler:(id /* block */)handler;
- (void)removePropertiesForUserIdentity:(id)identity completionHandler:(id /* block */)handler;
- (void)setActiveAccountWithDSID:(id)dsid completionHandler:(id /* block */)handler;
- (void)setActiveLockerAccountWithDSID:(id)dsid completionHandler:(id /* block */)handler;
- (void)disableLockerAccountWithDSID:(id)dsid completionHandler:(id /* block */)handler;
- (void)synchronize;
- (void)synchronizeWithCompletionHandler:(id /* block */)handler;
- (void)updatePropertiesForUserIdentity:(id)identity usingBlock:(id /* block */)block;
- (void)updatePropertiesForUserIdentity:(id)identity usingBlock:(id /* block */)block completionHandler:(id /* block */)handler;
- (id)DSIDForUserIdentity:(id)identity outError:(id *)error;
- (id)userIdentitiesForManageableAccountsWithError:(id *)error;
- (void)updatePropertiesForLocalStoreAccountUsingBlock:(id /* block */)block completionHandler:(id /* block */)handler;
- (id)userIdentitiesForAllStoreAccountsWithError:(id *)error;
- (void)userIdentityStoreBackendDidChange:(id)change;
- (void)_prepareDelegateAccountStoreWithCompletionHandler:(id /* block */)handler;
- (BOOL)_refreshLocalStoreAccountPropertiesAllowingDidChangeNotification:(BOOL)notification;
- (void)_reloadForExternalChange;
- (void)_resetDelegateAccountStoreWithCompletionHandler:(id /* block */)handler;
- (void)_unsafe_deleteDelegateAccountStore;
- (void)_updateDelegateAccountStoreUsingBlock:(id /* block */)block;
- (void)_delegateAccountStoreDidChangeNotification:(id)notification;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)_allowsDelegationForUserIdentity:(id)identity;
- (void)_assertNonNullIdentityStoreForSelector:(SEL)selector;
- (void)_dispatchDidChangeNotification:(BOOL)notification didDelegateAccountStoreChange:(BOOL)change;
- (id)_dsidForTimestamp:(unsigned long long)timestamp history:(id)history;
- (id)_dsidForUserIdentity:(id)identity error:(id *)error;
- (id)_existingIdentityPropertiesForUserIdentity:(id)identity error:(id *)error;
- (void)_importValuesFromCodingHelper:(id)helper;
- (void)_initializeLocalStoreAccountProperties;
- (id)_openDelegateAccountStoreWithError:(id *)error;
- (id)_openDelegateAccountStoreForUserIdentity:(id)identity error:(id *)error;
- (void)_registerForDelegateAccountStoreNotifications:(id)notifications;
- (BOOL)_saveIdentityProperties:(id)properties andPostAccountChangeNotification:(BOOL)notification forUserIdentity:(id)identity error:(id *)error;
- (void)_unregisterForDelegateAccountStoreNotifications:(id)notifications;
- (id)_icValidStoreAccountsFromACAccounts:(id)acaccounts;
@end

#endif /* ICUserIdentityStore_h */

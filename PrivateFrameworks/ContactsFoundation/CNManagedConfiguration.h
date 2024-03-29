//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNManagedConfiguration_h
#define CNManagedConfiguration_h
@import Foundation;

#include "CNManagedProfileConnection-Protocol.h"

@class NSString;

@interface CNManagedConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSObject<CNManagedProfileConnection> *profileConnection;
@property (readonly, copy, nonatomic) NSString *providerContainerIdentifier;

/* class methods */
+ (id)os_log;

/* instance methods */
- (id)init;
- (id)initForContactsProvider;
- (id)initWithAuditToken:(struct { unsigned int x0[8] })token managedProfileConnection:(id)connection;
- (id)initWithBundleIdentifier:(id)identifier managedProfileConnection:(id)connection;
- (BOOL)deviceHasManagementRestrictions;
- (BOOL)canReadFromLocalAccount;
- (BOOL)canWriteToLocalAccount;
- (BOOL)accountIsManaged:(id)managed;
- (BOOL)accountIsManagedForIdentifier:(id)identifier;
- (BOOL)canReadFromAccountWithIdentifier:(id)identifier;
- (BOOL)canWriteToAccountWithIdentifier:(id)identifier;
- (BOOL)canWriteToAccountWithIdentifier:(id)identifier fromSourceAccountIdentifier:(id)identifier;
- (id)readableAccountIdentifiersFromIdentifiers:(id)identifiers;
- (id)writableAccountIdentifiersFromIdentifiers:(id)identifiers;
- (id)writableAccountsFromAccounts:(id)accounts;
- (id)readableAccountsFromAccounts:(id)accounts;
- (id)accountForIdentifier:(id)identifier;
- (BOOL)hasContactsProviderRestrictions;
- (BOOL)canAccessProviderContainerWithIdentifier:(id)identifier;
@end

#endif /* CNManagedConfiguration_h */

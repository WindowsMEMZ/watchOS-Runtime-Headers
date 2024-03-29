//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSMetricsIdentifierStore_h
#define AMSMetricsIdentifierStore_h
@import Foundation;

#include "AMSProcessInfo.h"

@class ACAccount, BOOL *, NSString;

@interface AMSMetricsIdentifierStore : NSObject

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) BOOL includeAccountMatchStatus;
@property (nonatomic) BOOL isActiveITunesAccountRequired;
@property (nonatomic) double resetInterval;

/* class methods */
+ (void)cleanupIdentifiers;
+ (id)identifierForAccount:(id)account bag:(id)bag bagNamespace:(id)namespace keyName:(id)name;
+ (id)identifierStoreWithAccount:(id)account bagNamespace:(id)namespace bag:(id)bag;
+ (void)removeIdentifiersForAccount:(id)account;
+ (id)_accountIdentifierForAccount:(id)account;
+ (id)_database;
+ (id)_identifierStoreWithAccount:(id)account parameters:(id)parameters;
+ (id)_parametersForBag:(id)bag bagNamespace:(id)namespace;
+ (id)_sharedQueue;
+ (id)_sync;

/* instance methods */
- (id)generateEventFieldsForKeys:(id)keys;
- (id)generateEventFieldsForKeys:(id)keys date:(id)date;
- (id)_generateEventFieldsForKeys:(id)keys date:(id)date;
- (id)identifierForKey:(id)key;
- (void)reset;
- (void)setIdentifier:(id)identifier forKey:(id)key;
- (void)_setIdentifier:(id)identifier withStartedDate:(id)date forKey:(id)key;
- (void)_setIdentifier:(id)identifier withStartedDate:(id)date lastSyncDate:(id)date forKey:(id)key;
- (id)identifierIfExistsForKey:(id)key;
- (void)_generateFutureIdentifiersIfNeededForKeys:(id)keys storeInfo:(id)info afterPeriod:(long long)period inDatabase:(id)database date:(id)date;
- (id)_identifierInfoForKey:(id)key storeInfo:(id)info period:(long long)period inDatabase:(id)database date:(id)date setValue:(id)value lastSyncDate:(id)date needsToSync:(BOOL *)sync error:(id *)error;
- (BOOL)isAccountValidForKey:(id)key activeItunesAccountDSID:(inout id *)dsid;
- (id)_identifiersForKeys:(id)keys currentDate:(id)date;
- (id)_identifierStoreInfoForKeys:(id)keys inDatabase:(id)database date:(id)date needsToSync:(BOOL *)sync error:(id *)error;
- (id)_generateStoreKey;
- (id)_generateIdentifierKey:(id)key storeInfo:(id)info period:(long long)period;
@end

#endif /* AMSMetricsIdentifierStore_h */

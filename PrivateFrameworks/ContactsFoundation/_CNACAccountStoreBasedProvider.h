//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef _CNACAccountStoreBasedProvider_h
#define _CNACAccountStoreBasedProvider_h
@import Foundation;

#include "CNACAccountProvider.h"

@class ACAccountStore;

@interface _CNACAccountStoreBasedProvider : CNACAccountProvider

@property (readonly, nonatomic) ACAccountStore *accountStore;

/* instance methods */
- (id)initWithAccountStore:(id)store;
- (id)allAccountTypes;
- (id)accountsWithAccountType:(id)type;
- (id)childAccountsForAccount:(id)account;
- (BOOL)isAccountSyncable:(id)syncable;
- (BOOL)isAnyAccountSyncableIgnoringAccount:(id)account;
@end

#endif /* _CNACAccountStoreBasedProvider_h */

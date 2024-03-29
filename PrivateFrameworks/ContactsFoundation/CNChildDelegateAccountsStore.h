//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNChildDelegateAccountsStore_h
#define CNChildDelegateAccountsStore_h
@import Foundation;

#include "CNDelegateAccountSink-Protocol.h"
#include "CNDelegateAccountSource-Protocol.h"

@class ACAccount, ACAccountStore, NSString;

@interface CNChildDelegateAccountsStore : NSObject<CNDelegateAccountSource, CNDelegateAccountSink>

@property (readonly, nonatomic) ACAccount *parentAccount;
@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)os_log;
+ (void)configureChildAccount:(id)account withSettingsFromDelegateInfo:(id)info parent:(id)parent;

/* instance methods */
- (id)initWithParentAccount:(id)account accountStore:(id)store;
- (id)delegateAccounts;
- (id)primaryAccount;
- (BOOL)updateAccounts:(id)accounts error:(id *)error;
- (id)addChildWithDelegateInfo:(id)info;
- (id)updateAccount:(id)account;
- (id)removeAccount:(id)account;
@end

#endif /* CNChildDelegateAccountsStore_h */

//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDAccountController_h
#define IMDAccountController_h
@import Foundation;

#include "IDSAccountDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSSet, NSString;

@interface IMDAccountController : NSObject<IDSAccountDelegate> {
  /* instance variables */
  NSSet *_operationalAccountsCache;
  BOOL _isFirstLoad;
}

@property (readonly, nonatomic) BOOL isLoading;
@property (readonly, nonatomic) NSArray *accounts;
@property (readonly, nonatomic) NSArray *activeAccounts;
@property (readonly, nonatomic) NSArray *connectedAccounts;
@property (readonly, nonatomic) NSArray *connectingAccounts;
@property (readonly, nonatomic) NSArray *activeSessions;
@property (nonatomic) BOOL networkDataAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;
+ (id)sharedAccountController;

/* instance methods */
- (BOOL)activeAccountsAreEligibleForHawking;
- (BOOL)receiverIsCandidateForHawking:(id)hawking;
- (BOOL)hasActivePhoneAccount;
- (BOOL)receiverIsCandidateForJunk:(id)junk forAccount:(id)account;
- (id)activeAliases;
- (id)init;
- (void)dealloc;
- (void)_daemonWillShutdown:(id)shutdown;
- (void)load;
- (void)deferredSave;
- (void)save;
- (void)activateAccount:(id)account;
- (void)activateAccounts:(id)accounts;
- (void)deactivateAccounts:(id)accounts force:(BOOL)force;
- (void)deactivateAccount:(id)account;
- (void)deactivateAccounts:(id)accounts;
- (void)deactivateAccount:(id)account force:(BOOL)force;
- (BOOL)_isAccountActive:(id)active forService:(id)service;
- (BOOL)isAccountActive:(id)active;
- (void)addAccount:(id)account;
- (void)removeAccount:(id)account;
- (id)accountsForLoginID:(id)id onService:(id)service;
- (id)accountForAccountID:(id)id;
- (id)accountForHandle:(id)handle;
- (id)accountsForService:(id)service;
- (id)activeAccountsForService:(id)service;
- (id)connectedAccountsForService:(id)service;
- (id)connectingAccountsForService:(id)service;
- (BOOL)accountAssociatedWithHandle:(id)handle;
- (id)accountForIDSAccountUniqueID:(id)id;
- (id)sessionForAccount:(id)account;
- (id)anySessionForServiceName:(id)name;
- (id)sessionForReplicationSourceServiceName:(id)name replicatingAccount:(id)account;
- (void)_checkPowerAssertion;
- (void)_rebuildOperationalAccountsCache;
- (void)_resetAccountReplicationSessions;
- (id)_operationalAccounts;
- (BOOL)_isOperationalForAccount:(id)account;
- (id)_nicknameController;
- (void)account:(id)account isActiveChanged:(BOOL)changed;
@end

#endif /* IMDAccountController_h */

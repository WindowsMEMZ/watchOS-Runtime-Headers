//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 359.4.1.2.1
//
#ifndef CDPAccount_h
#define CDPAccount_h
@import Foundation;

@class NSDate;

@interface CDPAccount : NSObject

@property (retain, nonatomic) NSDate *rpdProbationFirstSeenDate;

/* class methods */
+ (id)_authKitAccountWith:(id)with;
+ (BOOL)checkIfAltDSIDIsBeneficiary:(id)beneficiary;
+ (id)appleAccountForAltDSID:(id)dsid;
+ (id)personIDForAltDSID:(id)dsid;
+ (id)altDSIDForPersonID:(id)id;
+ (id)contextForAccountWithAltDSID:(id)dsid;
+ (BOOL)isHSA2Enabled:(id)enabled;
+ (BOOL)isICDPEnabledForDSID:(id)dsid;
+ (BOOL)isICDPEnabledForDSID:(id)dsid checkWithServer:(BOOL)server;
+ (id)sharedInstance;
+ (BOOL)saveVerifiedAccount:(id)account error:(id *)error;

/* instance methods */
- (id)_serverFriendlyDateFormatter;
- (BOOL)rpdProbationIsInEffectForDuration:(double)duration context:(id)context;
- (void)octagonStatusForContext:(id)context withCompletion:(id /* block */)completion;
- (void)sosStatusForContext:(id)context withCompletion:(id /* block */)completion;
- (BOOL)isOTEnabledForContext:(id)context;
- (id)primaryAccountUsername;
- (id)primaryAccountDSID;
- (id)primaryAccountAltDSID;
- (unsigned long long)primaryAccountSecurityLevel;
- (BOOL)primaryAccountIsBeneficiary;
- (id)authToken;
- (id)escrowURL;
- (id)iCloudEnv;
- (id)contextForPrimaryAccount;
- (id)primaryAccountFirstName;
- (id)primaryAccountFullName;
- (id)primaryAppleAccount;
- (id)primaryAuthKitAccount;
- (id)primaryAccountStashedPRK;
- (BOOL)primaryAccountNeedsEscrowRecordRepair;
@end

#endif /* CDPAccount_h */

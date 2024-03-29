//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKAccountManager_h
#define AKAccountManager_h
@import Foundation;

@class ACAccountStore, ACAccountType, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AKAccountManager : NSObject {
  /* instance variables */
  ACAccountStore *_accountStore;
  NSObject<OS_dispatch_queue> *_accountQueue;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _authKitAccountTypeLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _appleIDAccountTypeLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _iCloudAccountTypeLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _iTunesAccountTypeLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accountTypeCacheLock;
  NSMutableDictionary *_accountTypeCache;
}

@property (readonly, nonatomic) ACAccountType *appleIDAccountType;
@property (retain, nonatomic) ACAccountStore *store;
@property (readonly, nonatomic) ACAccountType *authKitAccountType;
@property (readonly, nonatomic) ACAccountType *iCloudAccountType;
@property (readonly, nonatomic) ACAccountType *iTunesAccountType;

/* class methods */
+ (id)sharedInstance;
+ (BOOL)isAccountsFrameworkAvailable;
+ (id)stringRepresentationForService:(long long)service;
+ (id)personaIDIfCurrentPersonaIsDataSeparated;
+ (void)performWithinPersonaForAccount:(id)account withBlock:(id /* block */)block;

/* instance methods */
- (id)init;
- (id)altDSIDForAccount:(id)account;
- (id)telemetryDeviceSessionIDForAccount:(id)account;
- (BOOL)accountIsSignedIntoServices:(id)services;
- (BOOL)accountAccessTelemetryOptInForAccount:(id)account;
- (void)setTelemetryDeviceSessionID:(id)id forAccount:(id)account;
- (BOOL)setAccountAccessTelemetryOptIn:(BOOL)in forAccount:(id)account error:(id *)error;
- (void)updateAccountAccessTelemetryOptInTimestampForAccount:(id)account withOptIn:(BOOL)in;
- (id)accountAccessTelemetryOptInDateForAccount:(id)account;
- (id)configDataVersionForAccount:(id)account;
- (void)setConfigDataVersion:(id)version forAccount:(id)account;
- (id)configValue:(id)value forAccount:(id)account;
- (void)setConfigValue:(id)value forKey:(id)key forAccount:(id)account;
- (void)setAltDSID:(id)dsid forAccount:(id)account;
- (id)DSIDForAccount:(id)account;
- (void)setDSID:(id)dsid forAccount:(id)account;
- (id)combinedAliasesAndReachableEmailsForAccount:(id)account;
- (id)aliasesForAccount:(id)account;
- (void)setAliases:(id)aliases forAccount:(id)account;
- (id)formattedUsernameForAccount:(id)account;
- (void)updateVerifiedEmail:(BOOL)email forAccountWithAltDSID:(id)dsid;
- (void)updateUsername:(id)username forAccountsWithAltDSID:(id)dsid;
- (BOOL)_setUsername:(id)username forAccount:(id)account;
- (id)primaryEmailAddressForAccount:(id)account;
- (void)setPrimaryEmailAddress:(id)address forAccount:(id)account;
- (BOOL)verifiedPrimaryEmailForAccount:(id)account;
- (void)setVerifiedPrimaryEmail:(BOOL)email forAccount:(id)account;
- (BOOL)phoneAsAppleIDForAccount:(id)account;
- (void)setPhoneAsAppleID:(BOOL)id forAccount:(id)account;
- (BOOL)userUnderAgeForAccount:(id)account;
- (void)setUserUnderage:(BOOL)underage forAccount:(id)account;
- (BOOL)userIsSeniorForAccount:(id)account;
- (void)setUserIsSenior:(BOOL)senior forAccount:(id)account;
- (BOOL)demoAccountForAccount:(id)account;
- (void)setDemoAccount:(BOOL)account forAccount:(id)account;
- (id)ageOfMajorityForAccount:(id)account;
- (void)setAgeOfMajority:(id)majority forAccount:(id)account;
- (id)appleIDCountryCodeForAccount:(id)account;
- (void)setAppleIDCountryCode:(id)code forAccount:(id)account;
- (BOOL)authorizationUsedForAccount:(id)account;
- (void)setAuthorizationUsed:(BOOL)used forAccount:(id)account;
- (BOOL)privateAttestationEnabledForAccount:(id)account;
- (void)setPrivateAttestationEnabled:(BOOL)enabled forAccount:(id)account;
- (BOOL)isProximityAuthEligible:(id)eligible;
- (void)setIsProximityAuthEligible:(BOOL)eligible forAccount:(id)account;
- (id)reachableEmailAddressesForAccount:(id)account;
- (void)setReachableEmailAddresses:(id)addresses forAccount:(id)account;
- (id)givenNameForAccount:(id)account;
- (void)setGivenName:(id)name forAccount:(id)account;
- (id)familyNameForAccount:(id)account;
- (void)setFamilyName:(id)name forAccount:(id)account;
- (id)forwardingEmailForAccount:(id)account;
- (void)setForwardingEmail:(id)email forAccount:(id)account;
- (BOOL)selectedPrivateEmailForAccount:(id)account;
- (void)setSelectedPrivateEmail:(BOOL)email forAccount:(id)account;
- (id)selectedAuthorizationEmailForAccount:(id)account;
- (void)setSelectedAuthorizationEmail:(id)email forAccount:(id)account;
- (BOOL)saveAccount:(id)account error:(id *)error;
- (unsigned long long)securityLevelForAccount:(id)account;
- (void)setSecurityLevel:(unsigned long long)level forAccount:(id)account;
- (BOOL)mdmInformationRequiredForAccount:(id)account;
- (void)setMDMInformationRequired:(BOOL)required forAccount:(id)account;
- (unsigned long long)authenticationModeForAccount:(id)account;
- (void)setAuthenticationMode:(unsigned long long)mode forAccount:(id)account;
- (BOOL)shouldUpdateAuthModeForAccount:(id)account;
- (void)updateAuthModeTimestampForAccount:(id)account;
- (BOOL)deviceTrustRevokedForAccount:(id)account;
- (void)setDeviceTrustRevoked:(BOOL)revoked forAccount:(id)account;
- (BOOL)shouldPerformSatoriWarmupVerificationForAccount:(id)account;
- (void)updateSatoriWarmUpTimestampForAccount:(id)account;
- (BOOL)needsRepairForAccount:(id)account;
- (unsigned long long)repairStateForAccount:(id)account;
- (void)setRepairState:(unsigned long long)state forAccount:(id)account;
- (id)webAccessEnabledForAccount:(id)account;
- (void)setWebAccessEnabled:(BOOL)enabled forAccount:(id)account;
- (id)serverExperimentalFeaturesForAccount:(id)account;
- (void)setServerExperimentalFeatures:(id)features forAccount:(id)account;
- (id)markedForSignOutForAccount:(id)account;
- (void)setMarkedForSignOut:(BOOL)out forAccount:(id)account;
- (id)hasSOSActiveDeviceForAccount:(id)account;
- (void)setHasSOSActiveDevice:(BOOL)device forAccount:(id)account;
- (id)isSOSNeededForAccount:(id)account;
- (void)setSOSNeeded:(BOOL)sosneeded forAccount:(id)account;
- (id)hasModernRecoveryKeyForAccount:(id)account;
- (void)setHasModernRecoveryKey:(BOOL)key forAccount:(id)account;
- (id)hearbeatTokenForAccount:(id)account;
- (id)continuationTokenForAccount:(id)account;
- (id)passwordResetTokenForAccount:(id)account;
- (id)passwordResetTokenBackupForAccount:(id)account;
- (id)hearbeatTokenForAccount:(id)account error:(id *)error;
- (id)continuationTokenForAccount:(id)account error:(id *)error;
- (id)passwordResetTokenForAccount:(id)account error:(id *)error;
- (id)passwordResetTokenBackupForAccount:(id)account error:(id *)error;
- (id)allTokensForAccount:(id)account error:(id *)error;
- (id)buildCredentialWithTokens:(id)tokens;
- (id)masterTokenForAccount:(id)account;
- (id)settingsServiceTokenForAccount:(id)account;
- (void)removeMasterTokenForAccount:(id)account;
- (id)_tokenWithName:(id)name forAccount:(id)account error:(id *)error;
- (void)_reportTokenWithName:(id)name forAccount:(id)account error:(id)error;
- (id)authKitAccountWithAltDSID:(id)dsid;
- (id)authKitAccountWithDSID:(id)dsid;
- (id)authKitAccountWithAppleID:(id)id;
- (id)allAuthKitAccounts;
- (id)appleIDAccountWithAltDSID:(id)dsid;
- (id)appleIDAccountWithAppleID:(id)id;
- (id)primaryAuthKitAccount;
- (id)accountEligibleForUpdate;
- (id)_serviceTypesForSecurityUpgrade;
- (id)_defaultSecurityUpgradeServiceNames;
- (long long)_serviceTypeForServiceNameString:(id)string;
- (id)_accountTypeForServiceType:(long long)type;
- (BOOL)_isAccountEligibleForSecurityUpgrade:(id)upgrade ofServiceType:(long long)type;
- (id)_matchingServiceAccountForAuthKitAccount:(id)account service:(long long)service;
- (id)mostRecentlyUsedAuthKitAccount;
- (void)removeAllPasswordResetTokens;
- (void)removeContinuationTokenForAccount:(id)account telemetryFlowID:(id)id error:(id)error;
- (void)_removeTokenKey:(id)key forAccount:(id)account;
- (void)_removeTokenForKeys:(id)keys forAccount:(id)account;
- (void)_triggerSilentTTRFor:(unsigned long long)ttrfor;
- (void)_reportTokenWithTelemetryID:(id)id account:(id)account telemetryFlowID:(id)id error:(id)error;
- (void)setAccount:(id)account inUse:(BOOL)use byService:(long long)service;
- (id)servicesUsingAccount:(id)account;
- (id)accountsUsingService:(long long)service;
- (id)activeServiceNamesForAccount:(id)account;
- (BOOL)hasPrimaryiCloudAccountForAppleID:(id)id;
- (BOOL)hasPrimaryiCloudAccountForAltDSID:(id)dsid;
- (id)iCloudAccountForAppleID:(id)id;
- (id)_iCloudAccounts;
- (id)iCloudAccountForAltDSID:(id)dsid;
- (BOOL)isPrimaryiCloudAccount:(id)account;
- (BOOL)isPrimaryiCloudAccountEmailVerified:(id)verified;
- (id)primaryiCloudAccount;
- (id)altDSIDforPrimaryiCloudAccount;
- (id)transportableAuthKitAccount:(id)account;
- (id)_aliasesForiCloudAccount:(id)account;
- (BOOL)isFulliCloudAccount:(id)account;
- (id)_altDSIDForiCloudAccount:(id)account;
- (id)accountTypeForTypeIdentifier:(id)identifier;
- (id)additionalInfoForAccount:(id)account;
- (void)setAdditionalInfo:(id)info forAccount:(id)account;
- (id)trustedPhoneNumbersForAccount:(id)account;
- (void)setTrustedPhoneNumbers:(id)numbers forAccount:(id)account;
- (id)securityKeysForAccount:(id)account;
- (void)setSecurityKeys:(id)keys forAccount:(id)account;
- (id)loginHandlesForAccount:(id)account;
- (void)setLoginHandles:(id)handles forAccount:(id)account;
- (void)_removeAllRawPasswordCaches;
- (void)_clearRawPasswordForAccount:(id)account;
- (BOOL)isManagedAppleIDForAccount:(id)account;
- (unsigned long long)managedOrganizationTypeForAccount:(id)account;
- (void)setManagedOrganizationType:(unsigned long long)type forAccount:(id)account;
- (id)managedOrganizationNameForAccount:(id)account;
- (void)setManagedOrganizationName:(id)name forAccount:(id)account;
- (BOOL)isNotificationEmailAvailableForAccount:(id)account;
- (void)setIsNotificationEmailAvailable:(BOOL)available forAccount:(id)account;
- (id)notificationEmailForAccount:(id)account;
- (void)setNotificationEmail:(id)email forAccount:(id)account;
- (BOOL)canBeCustodianForAccount:(id)account;
- (void)setCanBeCustodian:(BOOL)custodian forAccount:(id)account;
- (BOOL)canHaveCustodianForAccount:(id)account;
- (void)setCanHaveCustodian:(BOOL)custodian forAccount:(id)account;
- (BOOL)custodianEnabledForAccount:(id)account;
- (void)setCustodianEnabled:(BOOL)enabled forAccount:(id)account;
- (id)custodianListVersionForAccount:(id)account;
- (void)setCustodianListVersion:(id)version forAccount:(id)account;
- (id)custodianLastModifiedForAccount:(id)account;
- (void)setCustodianLastModified:(id)modified forAccount:(id)account;
- (id)custodianInfosForAccount:(id)account;
- (void)setCustodianInfos:(id)infos forAccount:(id)account;
- (id)beneficiaryInfoForAccount:(id)account;
- (void)setBeneficiaryInfo:(id)info forAccount:(id)account;
- (BOOL)isBeneficiaryForAccount:(id)account;
- (void)setBeneficiary:(BOOL)beneficiary forAccount:(id)account;
- (BOOL)canBeBeneficiaryForAccount:(id)account;
- (void)setCanBeBeneficiary:(BOOL)beneficiary forAccount:(id)account;
- (BOOL)canHaveBeneficiaryForAccount:(id)account;
- (void)setCanHaveBeneficiary:(BOOL)beneficiary forAccount:(id)account;
- (id)beneficiaryListVersionForAccount:(id)account;
- (void)setBeneficiaryListVersion:(id)version forAccount:(id)account;
- (id)beneficiaryLastModifiedForAccount:(id)account;
- (void)setBeneficaryLastModified:(id)modified forAccount:(id)account;
- (BOOL)hasMDMForAccount:(id)account;
- (void)setHasMDM:(BOOL)mdm forAccount:(id)account;
- (id)isSilentEscrowRecordRepairEnabledForAccount:(id)account;
- (id)_isSilentEscrowRecordRepairEnabledForAccount:(id)account;
- (void)setSilentEscrowRecordRepairEnabled:(id)enabled forAccount:(id)account;
- (id)isSilentEscrowRecordRepairEnabledForAccountV2:(id)v2;
- (id)_isSilentEscrowRecordRepairEnabledForAccountV2:(id)v2;
- (void)setSilentEscrowRecordRepairEnabledV2:(id)v2 forAccount:(id)account;
- (BOOL)isFidoForAccount:(id)account;
- (void)setFido:(BOOL)fido forAccount:(id)account;
- (id)altDSIDForAuthKitAccountRequestingAuthorization;
- (id)authKitAccountRequestingAuthorization;
- (id)_iCloudAccountRequestingAuthorization;
- (void)setPasskeyEligible:(BOOL)eligible forAccount:(id)account;
- (id)passkeyEligibleForAccount:(id)account;
- (void)setPasskeyPresent:(BOOL)present forAccount:(id)account;
- (id)passkeyPresentForAccount:(id)account;
- (void)setPasskeysInKeychainCount:(id)count forAccount:(id)account;
- (id)passkeysInKeychainCountForAccount:(id)account;
- (void)setPasskeyRegistrationAttemptDateForAccount:(id)account forAccount:(id)account;
- (id)passkeyRegistrationAttemptDateForAccount:(id)account;
- (void)setPasskeysDeletionAttemptDate:(id)date forAccount:(id)account;
- (id)passkeysDeletionAttemptDateForAccount:(id)account;
- (id)groupKitEligibilityForAccount:(id)account;
- (void)setGroupKitEligibility:(id)eligibility forAccount:(id)account;
- (id)preferredAccountUsingStoreService;
- (id)preferredAccountUsingStoreServiceFromAccounts:(id)accounts;
- (void)setPasscodeAuthEnabled:(BOOL)enabled forAccount:(id)account;
- (BOOL)isPasscodeAuthEnabledForAccount:(id)account;
- (void)setPasscodeAuth:(BOOL)auth forAccount:(id)account;
- (BOOL)isPasscodeAuthForAccount:(id)account;
- (void)setAskToBuy:(BOOL)buy forAccount:(id)account;
- (BOOL)isAskToBuyForAccount:(id)account;
- (id)deviceListVersionForAccount:(id)account;
- (void)setDeviceListVersion:(id)version forAccount:(id)account;
- (id)deletedDevicesCacheExpiryOffsetForAccount:(id)account;
- (void)setDeletedDevicesCacheExpiryOffset:(id)offset forAccount:(id)account;
- (id)birthYearForAccount:(id)account;
- (void)setBirthYear:(id)year forAccount:(id)account;
@end

#endif /* AKAccountManager_h */

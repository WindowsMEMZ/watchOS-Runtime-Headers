//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSAccount_h
#define SSAccount_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "SSXPCCoding-Protocol.h"

@class ACAccount, NSArray, NSData, NSDictionary, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface SSAccount : NSObject<SSXPCCoding, NSCopying> {
  /* instance variables */
  NSData *_bioToken;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backingAccountAccessQueue;
@property long long accountSource;
@property (copy, nonatomic) NSArray *automaticDownloadKinds;
@property (readonly, nonatomic) ACAccount *backingAccount;
@property (readonly, nonatomic) BOOL demoAccount;
@property (copy, nonatomic) NSString *demoAccountRawPassword;
@property (readonly, nonatomic) BOOL dirty;
@property (readonly, nonatomic) BOOL hasBrokenDSID;
@property (readonly, nonatomic) BOOL localAccount;
@property (copy, nonatomic) NSString *secureToken;
@property BOOL didFallbackToPassword;
@property BOOL active;
@property BOOL activeLockerAccount;
@property (copy) NSString *ITunesPassSerialNumber;
@property BOOL newCustomer;
@property BOOL managedAppleID;
@property (copy, nonatomic) NSString *passwordEquivalentToken;
@property (copy, nonatomic) NSString *rawPassword;
@property long long accountKind;
@property (copy) NSString *accountName;
@property long long accountScope;
@property (copy) NSString *altDSID;
@property BOOL authenticated;
@property (copy) NSString *creditsString;
@property (copy) NSString *firstName;
@property (copy) NSString *lastName;
@property (copy) NSDictionary *privacyAcknowledgement;
@property BOOL socialEnabled;
@property (copy) NSString *storeFrontIdentifier;
@property (retain) NSNumber *uniqueIdentifier;
@property long long availableServiceTypes;
@property long long enabledServiceTypes;
@property long long freeDownloadsPasswordSetting;
@property long long paidPurchasesPasswordSetting;
@property (readonly) NSString *localizedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (long long)accountKindFromAuthenticationResponseDictionary:(id)dictionary;
+ (id)accountNameFromAuthenticationResponseDictionary:(id)dictionary;
+ (id)altDSIDFromAuthenticationResponseDictionary:(id)dictionary;
+ (BOOL)backingAccountIsDemoAccount:(id)account;
+ (BOOL)backingAccountIsLocalAccount:(id)account;
+ (id)creditsStringFromAuthenticationResponseDictionary:(id)dictionary;
+ (id)DSIDFromAuthenticationResponseDictionary:(id)dictionary;
+ (id)firstNameFromAuthenticationResponseDictionary:(id)dictionary;
+ (BOOL)isManagedAppleIDFromAuthenticationResponseDictionary:(id)dictionary;
+ (BOOL)isNewCustomerFromAuthenticationResponseDictionary:(id)dictionary;
+ (id)lastNameFromAuthenticationResponseDictionary:(id)dictionary;
+ (id)secureTokenForIdentifier:(id)identifier;
+ (id)storeFrontIdentifierFromURLResponse:(id)urlresponse;
+ (id)serverValueForAccountPasswordSettingValue:(long long)value;
+ (id)_countryCodeFromStorefrontIdentifier:(id)identifier;
+ (id)_displayedServerPromptKeyWithIdentifier:(id)identifier;
+ (id)_lastAttemptForServerPromptKeyWithIdentifier:(id)identifier;
+ (id)_valueForFirstAvailableKeyPath:(id)path inDictionary:(id)dictionary;

/* instance methods */
- (id)init;
- (id)initWithBackingAccount:(id)account;
- (BOOL)displayedServerPromptWithIdentifier:(id)identifier;
- (BOOL)isDirty;
- (BOOL)isAuthenticated;
- (BOOL)isSocialEnabled;
- (id)lastAttemptDateForServerPromptWithIdentifier:(id)identifier;
- (BOOL)isActive;
- (BOOL)isActiveLockerAccount;
- (BOOL)isDemoAccount;
- (BOOL)isDuplicate:(id)duplicate;
- (BOOL)isManagedAppleID;
- (BOOL)isNewCustomer;
- (void)setDisplayedServerPrompt:(BOOL)prompt withIdentifier:(id)identifier;
- (void)setLastAttemptDate:(id)date forServerPromptWithIdentifier:(id)identifier;
- (void)setStoreFrontIdentifier:(id)identifier forRequest:(id)request response:(id)response;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)xpcencoding;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (void)acceptTermsAndConditions:(id)conditions withCompletionBlock:(id /* block */)block;
- (id)eligibilityForService:(long long)service;
- (void)getDownloadKindsEligibleForContentRestoreWithBlock:(id /* block */)block;
- (void)getEligibilityForService:(long long)service completionBlock:(id /* block */)block;
- (void)getPurchasedItemsForItems:(id)items completionBlock:(id /* block */)block;
- (void)getTermsAndConditionsWithBlock:(id /* block */)block;
- (id)accountPropertyForKey:(id)key;
- (void)addAvailableServiceTypes:(long long)types;
- (void)addEnabledServiceTypes:(long long)types;
- (void)getITunesMatchStatusWithCompletionBlock:(id /* block */)block;
- (void)getKeybagSyncDataWithType:(long long)type completionHandler:(id /* block */)handler;
- (id)hashedDescription;
- (BOOL)isLocalAccount;
- (void)removeAvailableServiceTypes:(long long)types;
- (void)removeEnabledServiceTypes:(long long)types;
- (void)resetTransientData;
- (void)setEligibility:(id)eligibility forServiceType:(long long)type;
- (id)copyLockdownRepresentation;
- (BOOL)mergeValuesFromAccount:(id)account;
- (id)popBiometricToken;
- (void)setBiometricToken:(id)token;
- (void)setLockdownDictionary:(id)dictionary;
- (void)updateAccountPasswordSettings:(id /* block */)settings;
- (void)updateAccountPasswordSettingsWithRequestProperties:(id)properties completionBlock:(id /* block */)block;
- (void)_addAccountPropertyBitmask:(long long)bitmask forKey:(id)key;
- (id)_backingAccount;
- (void)_removeAccountPropertyBitmask:(long long)bitmask forKey:(id)key;
- (void)_sendMessage:(id)message withReply:(id /* block */)reply;
- (void)_setAccountProperty:(id)property forKey:(id)key;
- (void)_setBackingAccount:(id)account;
@end

#endif /* SSAccount_h */

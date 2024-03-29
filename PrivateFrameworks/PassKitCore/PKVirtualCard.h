//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKVirtualCard_h
#define PKVirtualCard_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PKCurrencyAmount.h"
#include "PKVirtualCardCredentials.h"

@class CNContact, NSData, NSDate, NSString;

@interface PKVirtualCard : NSObject<NSSecureCoding, NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *cardholderName;
@property (nonatomic) long long state;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *FPANSuffix;
@property (copy, nonatomic) NSString *dpanSuffix;
@property (copy, nonatomic) NSString *expiration;
@property (copy, nonatomic) NSDate *lastUpdatedDate;
@property (copy, nonatomic) NSData *encryptedData;
@property (copy, nonatomic) NSData *ephemeralPublicKey;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSDate *lastAutoFilledBySafari;
@property (nonatomic) BOOL supportsLocalStorage;
@property (nonatomic) BOOL requiresAuthentication;
@property (copy, nonatomic) NSString *securityCodeIdentifier;
@property (copy, nonatomic) NSDate *securityCodeExpiration;
@property (nonatomic) BOOL hasDynamicSecurityCode;
@property (copy, nonatomic) CNContact *billingAddress;
@property (nonatomic) long long credentialType;
@property (copy, nonatomic) NSString *nameFromSafari;
@property (nonatomic) unsigned long long refreshType;
@property (copy, nonatomic) PKCurrencyAmount *balance;
@property (copy, nonatomic) PKVirtualCardCredentials *keychainCardCredentials;
@property (readonly, copy, nonatomic) NSString *displayablePANSuffix;

/* class methods */
+ (id)cardsForPaymentPass:(id)pass;
+ (id)cardsForPaymentPass:(id)pass accordingToWebService:(id)service;
+ (id)demoVPANVirtualCards;
+ (void)queryKeychainForVirtualCards:(id /* block */)cards;
+ (void)deleteAllLocalKeychainVirtualCards;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)mergeVirtualCardWith:(id)with;
- (BOOL)hasSensitiveCredentials;
- (BOOL)isEqualToSafariEntryWithPrimaryAccountNumber:(id)number expirationDate:(id)date;
- (id)generateHashWithPrimaryAccountNumber:(id)number expirationDate:(id)date;
- (void)setLastAutoFilledBySafariWithCompletion:(id /* block */)completion;
- (void)setContactNameEnteredInSafari:(id)safari completion:(id /* block */)completion;
- (id)initWithKeychainData:(id)data;
- (void)writeKeychainVirtualCardToKeychain;
- (id)keychainVirtualCard;
- (void)deleteKeychainVirtualCard;
- (void)deleteLocalKeychainVirtualCard;
- (BOOL)isValidFromKeychain;
- (id)_wrapperWithType:(unsigned long long)type identifier:(id)identifier;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)setDPANSuffix:(id)dpansuffix;
@end

#endif /* PKVirtualCard_h */

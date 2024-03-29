//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEVPNProtocolIPSec_h
#define NEVPNProtocolIPSec_h
@import Foundation;

#include "NEVPNProtocol.h"
#include "NEKeychainItem.h"

@class NSArray, NSData, NSString;

@interface NEVPNProtocolIPSec : NEVPNProtocol

@property (copy) NEKeychainItem *sharedSecretKeychainItem;
@property (copy) NSArray *legacyProposals;
@property (copy) NSArray *legacyExchangeMode;
@property BOOL extendedAuthPasswordPrompt;
@property long long authenticationMethod;
@property BOOL useExtendedAuthentication;
@property (copy) NSData *sharedSecretReference;
@property (copy) NSString *localIdentifier;
@property (copy) NSString *remoteIdentifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithType:(long long)type;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)checkValidityAndCollectErrors:(id)errors;
- (id)descriptionWithIndent:(int)indent options:(unsigned long long)options;
- (id)copyLegacyDictionary;
- (id)initFromLegacyDictionary:(id)dictionary;
- (struct __SCNetworkInterface *)createInterface;
- (void)syncWithKeychainInDomain:(long long)domain configuration:(id)configuration suffix:(id)suffix;
- (BOOL)needToUpdateKeychain;
- (void)removeKeychainItemsInDomain:(long long)domain keepIdentity:(BOOL)identity;
- (void)migratePasswordsFromPreferences:(struct __SCPreferences *)preferences;
@end

#endif /* NEVPNProtocolIPSec_h */

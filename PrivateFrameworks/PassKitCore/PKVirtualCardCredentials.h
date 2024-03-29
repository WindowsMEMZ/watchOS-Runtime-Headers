//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKVirtualCardCredentials_h
#define PKVirtualCardCredentials_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface PKVirtualCardCredentials : NSObject<NSSecureCoding, NSCopying>

@property (copy, nonatomic) NSString *primaryAccountNumber;
@property (copy, nonatomic) NSString *cardSecurityCode;
@property (nonatomic) long long cardType;
@property (copy, nonatomic) NSString *expiration;
@property (copy, nonatomic) NSString *formattedExpiration;

/* class methods */
+ (id)demoVPANCredentials;
+ (id)formattedDateStringFromServerDateString:(id)string;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)initWithEncryptedCardData:(id)data ephemeralPublicKey:(id)key privateKey:(struct __SecKey *)key error:(id *)error;
- (id)initWithVPANPaymentCredentialResponse:(id)response privateKey:(struct __SecKey *)key error:(id *)error;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* PKVirtualCardCredentials_h */

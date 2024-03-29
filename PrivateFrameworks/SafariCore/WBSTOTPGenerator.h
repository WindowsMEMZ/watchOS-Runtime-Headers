//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSTOTPGenerator_h
#define WBSTOTPGenerator_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSData, NSDate, NSDictionary, NSString, NSURL;

@interface WBSTOTPGenerator : NSObject<NSSecureCoding> {
  /* instance variables */
  NSData *_key;
  NSArray *_cachedHeuristicallyDeterminedServiceNameHints;
}

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *issuer;
@property (readonly, copy, nonatomic) NSString *accountName;
@property (readonly, nonatomic) NSDate *initialDate;
@property (readonly, nonatomic) unsigned long long codeGenerationPeriod;
@property (readonly, nonatomic) unsigned long long algorithm;
@property (readonly, nonatomic) unsigned long long numberOfDigitsInCode;
@property (copy, nonatomic) NSURL *originalURL;
@property (readonly, copy, nonatomic) NSURL *exportableURL;
@property (readonly, copy, nonatomic) NSArray *heuristicallyDeterminedServiceNameHints;

/* class methods */
+ (id)_keyDataForBase32EncodedString:(id)string;
+ (id)_base32EncodedStringForKeyData:(id)data;
+ (BOOL)_urlWithComponentsHasValidOtpauthURLScheme:(id)urlscheme;
+ (BOOL)supportsSecureCoding;
+ (id)countdownStringForSecondsRemaining:(long long)remaining;

/* instance methods */
- (id)initWithOTPAuthURL:(id)url;
- (id)initWithASCIIEncodedKey:(id)key initialDate:(id)date codeGenerationPeriod:(unsigned long long)period numberOfDigits:(unsigned long long)digits algorithm:(unsigned long long)algorithm;
- (id)initWithBase32EncodedKey:(id)key initialDate:(id)date codeGenerationPeriod:(unsigned long long)period numberOfDigits:(unsigned long long)digits algorithm:(unsigned long long)algorithm;
- (id)initWithBase32EncodedKey:(id)key;
- (id)initWithUserProvidedString:(id)string;
- (id)initWithKeyData:(id)data initialDate:(id)date codeGenerationPeriod:(unsigned long long)period numberOfDigits:(unsigned long long)digits algorithm:(unsigned long long)algorithm issuer:(id)issuer accountName:(id)name originalURL:(id)url;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithDictionaryRepresentation:(id)representation;
- (id)codeForDate:(id)date;
- (id)startDateOfIntervalContainingDate:(id)date;
- (BOOL)generatesIdenticalCodesToGenerator:(id)generator;
- (unsigned long long)_numberOfIntervalsSinceInitialDateForDate:(id)date;
- (unsigned long long)_algorithmForQueryItemValue:(id)value;
- (unsigned int)_commonCryptoAlgorithmForTOTPAlgorithm:(unsigned long long)totpalgorithm;
- (unsigned long long)_HMACLengthForAlgorithm:(unsigned long long)algorithm;
- (id)_stringForAlgorithm:(unsigned long long)algorithm;
@end

#endif /* WBSTOTPGenerator_h */

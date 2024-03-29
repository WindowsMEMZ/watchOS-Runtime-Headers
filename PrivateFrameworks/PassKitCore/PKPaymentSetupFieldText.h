//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupFieldText_h
#define PKPaymentSetupFieldText_h
@import Foundation;

#include "PKPaymentSetupField.h"

@class NSArray, NSCharacterSet, NSNumberFormatter, NSString;

@interface PKPaymentSetupFieldText : PKPaymentSetupField {
  /* instance variables */
  NSNumberFormatter *_currencyFormatter;
  NSNumberFormatter *_amountFormatter;
}

@property (nonatomic) unsigned long long minLength;
@property (nonatomic) unsigned long long maxLength;
@property (nonatomic) BOOL secureText;
@property (nonatomic) BOOL secureVisibleText;
@property (nonatomic) BOOL numeric;
@property (nonatomic) BOOL numericFractional;
@property (nonatomic) BOOL luhnCheck;
@property (copy, nonatomic) NSString *displayFormatPlaceholder;
@property (copy, nonatomic) NSString *currencyCode;
@property (nonatomic) BOOL keepPaddingCharactersForSubmission;
@property (retain, nonatomic) NSArray *paddingCharacters;
@property (nonatomic) unsigned long long alignment;
@property (copy, nonatomic) NSCharacterSet *allowedCharacters;

/* class methods */
+ (id)readOnlyPaymentSetupFieldWithDisplayName:(id)name value:(id)value;

/* instance methods */
- (id)initWithIdentifier:(id)identifier type:(unsigned long long)type;
- (void)setCurrentValue:(id)value;
- (void)setDefaultValue:(id)value;
- (id)displayString;
- (id)_submissionStringForValue:(id)value;
- (id)decimalSeparator;
- (BOOL)submissionStringMeetsAllRequirements;
- (id)_currencyFormatter;
- (id)_amountFormatter;
- (id)_allowedCharacters;
- (BOOL)hasDisplayFormat;
- (id)_stringByApplyingCurrencyFormatter:(id)formatter allowPartialFractional:(BOOL)fractional;
- (id)_stringByApplyingNumericFractionalFormat:(id)format;
- (id)stringByApplyingDisplayFormat:(id)format;
- (id)stringByApplyingDisplayFormat:(id)format allowPartialFractional:(BOOL)fractional;
- (id)displayFormatPaddingCharacters;
- (void)updateDisplayFormat:(id)format;
- (void)updateWithConfiguration:(id)configuration;
- (unsigned long long)fieldType;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isSecureText;
- (BOOL)isSecureVisibleText;
- (BOOL)isNumeric;
- (BOOL)isNumericFractional;
- (BOOL)useLuhnCheck;
@end

#endif /* PKPaymentSetupFieldText_h */

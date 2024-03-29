//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKCurrencyAmountSelectorOptionProvider_h
#define PKCurrencyAmountSelectorOptionProvider_h
@import Foundation;

#include "PKCurrencyAmountSelectorOption.h"

@class NSArray, NSDecimalNumber, NSString, PKAccountUser;

@interface PKCurrencyAmountSelectorOptionProvider : NSObject {
  /* instance variables */
  PKAccountUser *_accountUser;
  NSArray *_defaultAmounts;
  NSArray *_customAmounts;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSDecimalNumber *amount;
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) NSArray *options;
@property (readonly, nonatomic) PKCurrencyAmountSelectorOption *selectedOption;
@property (copy, nonatomic) id /* block */ optionsUpdateHandler;

/* instance methods */
- (id)initWithType:(long long)type accountUser:(id)user currencyCode:(id)code;
- (void)insertCustomAmount:(id)amount;
- (void)removeCustomAmount:(id)amount;
- (void)selectAmount:(id)amount;
- (id)_optionWithAmount:(id)amount isCustom:(BOOL)custom selected:(BOOL)selected;
- (void)_updateOptions;
@end

#endif /* PKCurrencyAmountSelectorOptionProvider_h */

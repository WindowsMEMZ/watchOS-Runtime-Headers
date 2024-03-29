//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.0.0.0.0
//
#ifndef StockDataFormatter_h
#define StockDataFormatter_h
@import Foundation;

@class NSNumberFormatter, NSString;
@protocol OS_dispatch_queue;

@interface StockDataFormatter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *decimalFormatterQueue;
@property (retain, nonatomic) NSNumberFormatter *decimalFormatter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *percentFormatterQueue;
@property (retain, nonatomic) NSNumberFormatter *percentFormatter;
@property (readonly, nonatomic) BOOL localeUsesASCII;
@property (readonly, nonatomic) NSString *percentSymbol;

/* class methods */
+ (id)sharedDataFormatter;

/* instance methods */
- (id)initPrivate;
- (void)dealloc;
- (id)formattedChangeInPercentForStock:(id)stock;
- (id)formattedChangeInPointsForStock:(id)stock withPrecision:(unsigned long long)precision;
- (id)formattedChangeInPointsForStock:(id)stock withPrecision:(unsigned long long)precision droppingFractionDigitsIfLengthExceeds:(unsigned long long)exceeds;
- (id)formattedPriceForStock:(id)stock withPrecision:(unsigned long long)precision;
- (id)formattedPriceForStock:(id)stock withPrecision:(unsigned long long)precision droppingFractionDigitsIfLengthExceeds:(unsigned long long)exceeds;
- (id)formattedNumber:(id)number withPrecision:(unsigned long long)precision useGroupSeparator:(BOOL)separator;
- (id)formattedNumber:(id)number withPrecision:(unsigned long long)precision useGroupSeparator:(BOOL)separator droppingFractionDigitsIfLengthExceeds:(unsigned long long)exceeds;
- (id)formattedPercent:(id)percent;
- (id)formattedPercent:(id)percent withPrecision:(unsigned long long)precision;
- (id)_locked_formatNumber:(id)number withPrecision:(unsigned long long)precision useGroupSeparator:(BOOL)separator;
- (id)_locked_formatPercent:(id)percent withPrecision:(unsigned long long)precision;
- (void)_resetLocale:(id)locale;
- (BOOL)doesLocaleUseASCII;
@end

#endif /* StockDataFormatter_h */

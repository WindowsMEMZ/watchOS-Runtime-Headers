//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 92.0.0.0.0
//
#ifndef CalculateTerm_h
#define CalculateTerm_h
@import Foundation;

#include "CalculateResult.h"
#include "CalculateUnit.h"

@class NSArray, NSNumber, NSString;

@interface CalculateTerm : NSObject

@property (weak, nonatomic) CalculateResult *result;
@property (nonatomic) struct { unsigned long long x0[2] } decimalValue;
@property (readonly, nonatomic) NSNumber *value;
@property (readonly, nonatomic) NSArray *units;
@property (readonly, nonatomic) NSString *formattedResult;
@property (readonly, nonatomic) NSString *formattedValue;
@property (readonly, nonatomic) NSString *formattedUnit;
@property (readonly, nonatomic) CalculateUnit *primaryUnit;

/* class methods */
+ (id)termWithValue:(id)value units:(id)units result:(id)result;

/* instance methods */
- (id)init;
- (void)_setDecimalValue:(struct { unsigned long long x0[2] })value;
- (id)resultContainingNumberFormatter;
- (id)numberFormatter;
- (id)locale;
- (BOOL)isCurrency;
- (void)getMaximumFractionDigits:(unsigned long long *)digits minimumFractionDigits:(unsigned long long *)digits;
- (void)getMaximumFractionDigits:(unsigned long long *)digits minimumFractionDigits:(unsigned long long *)digits forValue:(struct { unsigned long long x0[2] })value;
- (double)_valueWithoutIrrelevantDecimals;
- (id)emptyNumeratorString;
- (id)formattedUnitReplacingFirstNumerator:(id)numerator;
- (long long)compare:(id)compare;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* CalculateTerm_h */

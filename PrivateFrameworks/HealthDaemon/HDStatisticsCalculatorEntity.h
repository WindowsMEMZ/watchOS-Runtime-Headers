//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDStatisticsCalculatorEntity_h
#define HDStatisticsCalculatorEntity_h
@import Foundation;

#include "HDHealthEntity.h"

@interface HDStatisticsCalculatorEntity : HDHealthEntity
/* class methods */
+ (id)statisticsForOwner:(id)owner type:(id)type anchor:(id *)anchor transaction:(id)transaction error:(id *)error;
+ (id)calculatorForOwner:(id)owner type:(id)type anchor:(id *)anchor transaction:(id)transaction error:(id *)error;
+ (BOOL)setStatistics:(id)statistics forOwner:(id)owner anchor:(id)anchor transaction:(id)transaction error:(id *)error;
+ (BOOL)setCalculator:(id)calculator forOwner:(id)owner anchor:(id)anchor transaction:(id)transaction error:(id *)error;
+ (BOOL)enumerateStatisticsForOwner:(id)owner transaction:(id)transaction error:(id *)error block:(id /* block */)block;
+ (id)databaseTable;
+ (Class)ownerEntityClass;
+ (id)ownerEntityReferenceColumn;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)count;
+ (id)foreignKeys;
+ (id)uniquedColumns;
@end

#endif /* HDStatisticsCalculatorEntity_h */
